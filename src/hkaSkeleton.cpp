#include "hkaSkeleton.h"

bool hktypes::hkQsTransformf::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkQsTransformf") {
		std::cout << "hkQsTransform::FromInstance: type_name is not hkQsTransformf" << std::endl;
		return false;
	}

	auto t_inst = class_instance->GetArrayByFieldName<double>("translation");
	auto r_inst = class_instance->GetArrayByFieldName<double>("rotation");
	auto s_inst = class_instance->GetArrayByFieldName<double>("scale");

	//
	// std::cout << "Scale " << s_inst[3] << std::endl;
	/*
	printf("\r\n(%f, %f, %f, %f)\r\n", t_inst[0], t_inst[1], t_inst[2], t_inst[3]);
	printf("(%f, %f, %f, %f)\r\n", r_inst[0], r_inst[1], r_inst[2], r_inst[3]);
	printf("(%f, %f, %f, %f)\r\n", s_inst[0], s_inst[1], s_inst[2], s_inst[3]);
	*/

	this->translation = Eigen::Vector4f(t_inst[0], t_inst[1], t_inst[2], t_inst[3]);
	this->rotation = Eigen::Quaternionf(r_inst[3], r_inst[0], r_inst[1], r_inst[2]);//?? wxyz instead of xyzw?
	this->scale = Eigen::Vector4f(s_inst[0], s_inst[1], s_inst[2], s_inst[3]);

	return true;
}

bool hktypes::hkQsTransformf::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkQsTransformf") {
		std::cout << "hkQsTransform::ToInstance: type_name is not hkQsTransformf" << std::endl;
		return false;
	}

	std::vector<double> t_inst = { this->translation.x(), this->translation.y(), this->translation.z(), this->translation.w() };
	std::vector<double> r_inst = { this->rotation.x(), this->rotation.y(), this->rotation.z(), this->rotation.w() };
	std::vector<double> s_inst = { this->scale.x(), this->scale.y(), this->scale.z(), this->scale.w() };

	class_instance->GetInstanceByFieldName("translation")->SetValue(t_inst);
	class_instance->GetInstanceByFieldName("rotation")->SetValue(r_inst);
	class_instance->GetInstanceByFieldName("scale")->SetValue(s_inst);

	return true;
}

Eigen::Matrix4f hktypes::hkQsTransformf::getMatrix(bool force_M44_1)
{
	Eigen::Matrix4f result;
	result.setIdentity();
	result.block<3, 3>(0, 0) = this->rotation.toRotationMatrix();
	result.block<4, 1>(0, 3) = this->translation.block<4, 1>(0, 0);

	if (force_M44_1) {
		result(3, 3) = 1.0f;
	}

	return result;
}

Eigen::Vector4f hktypes::hkQsTransformf::getRotatedDir(Eigen::Vector4f& dir, Eigen::Quaternionf& rot)
{
	Eigen::Vector4f result;
	// Extract the scalar (real) part of the quaternion
	float qreal = rot.w();

	// Calculate q^2 - 0.5
	float q2minus1 = qreal * qreal - 0.5f;

	// Calculate the contribution of the imaginary part of the quaternion
	result = dir * q2minus1;

	// Calculate the dot product of the imaginary part of the quaternion and the direction vector
	float imagDotDir = rot.vec().dot(dir.head<3>());

	// Add the contribution of the cross product of the imaginary part and the direction vector
	result.head<3>() += rot.vec() * imagDotDir;

	// Calculate the cross product of the imaginary part and the direction vector
	Eigen::Vector3f imagCrossDir = rot.vec().cross(dir.head<3>());

	// Add the contribution of the cross product multiplied by the scalar part of the quaternion
	result.head<3>() += imagCrossDir * qreal;

	// The fourth component remains unchanged
	return result + result;
}

hktypes::hkQsTransformf hktypes::hkQsTransformf::fromMultiplied(hkQsTransformf& a, hkQsTransformf& b)
{
	hkQsTransformf result;
	result.translation = a.translation + getRotatedDir(b.translation, a.rotation);
	result.rotation = a.rotation * b.rotation;
	result.scale = a.scale.cwiseProduct(b.scale);
	return result;
}

hktypes::hkQsTransformf hktypes::hkQsTransformf::fromInverse(hkQsTransformf& a)
{
	hkQsTransformf result;
	result.rotation = a.rotation.conjugate();
	Eigen::Vector4f inv_t = -a.translation;
	result.translation = getRotatedDir(inv_t, result.rotation);
	result.scale = a.scale.cwiseInverse();
	result.scale.w() = 0;
	return result;
}

hktypes::hkQsTransformf hktypes::hkQsTransformf::fromMatrix(Eigen::Matrix4f& mat, float scale)
{
	hkQsTransformf result;
	result.translation = mat.block<4, 1>(0, 3);
	result.rotation = Eigen::Quaternionf(mat.block<3, 3>(0, 0));
	result.scale = Eigen::Vector4f(scale, scale, scale, 0);
	return result;
}

bool hktypes::hkaBoneHolder::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkaBone") {
		std::cout << "hkaBoneHolder::FromInstance: type_name is not hkaBone" << std::endl;
		return false;
	}

	this->name = class_instance->GetStringByFieldName("name");
	this->lockTranslation = class_instance->GetBoolByFieldName("lockTranslation");

	return true;
}

bool hktypes::hkaBoneHolder::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkaBone") {
		std::cout << "hkaBoneHolder::FromInstance: type_name is not hkaBone" << std::endl;
		return false;
	}

	class_instance->GetInstanceByFieldName("name")->SetValue(this->name);
	class_instance->GetInstanceByFieldName("lockTranslation")->SetValue(this->lockTranslation);

	return true;
}

void hktypes::hkaBoneHolder::SetTransform(hkQsTransformf& transform, bool update_world_trans)
{
	this->transform = transform;
	if (update_world_trans) {
		if (this->parent) {
			this->world_transform = hktypes::hkQsTransformf::fromMultiplied(this->parent->world_transform, this->transform);
		}
		else {
			this->world_transform = this->transform;
		}
	}
}

void hktypes::hkaBoneHolder::SetWorldTransform(hkQsTransformf& transform, bool update_local_trans)
{
	this->world_transform = transform;
	if (update_local_trans) {
		if (this->parent) {
			auto inv_parent = hktypes::hkQsTransformf::fromInverse(this->parent->world_transform);
			this->transform = hktypes::hkQsTransformf::fromMultiplied(inv_parent, this->world_transform);
		}
		else {
			this->transform = this->world_transform;
			this->transform.scale.w() = 1.0f;
		}
	}
}

hktypes::hkQsTransformf hktypes::hkaBoneHolder::GetTransform()
{
	return this->transform;
}

hktypes::hkQsTransformf hktypes::hkaBoneHolder::GetWorldTransform()
{
	return this->world_transform;
}

bool hktypes::hkaSkeleton::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkaSkeleton") {
		std::cout << "hkaSkeleton::FromInstance: type_name is not hkaSkeleton" << std::endl;
		return false;
	}

	this->name = class_instance->GetStringByFieldName("name");

	auto parent_indices = class_instance->GetArrayByFieldName<int16_t>("parentIndices");

	auto bones_v = class_instance->GetArrayByFieldName<hkaBoneHolder>("bones");

	auto reference_pose = class_instance->GetArrayByFieldName<hkQsTransformf>("referencePose");

	for (int i = 0; i < bones_v.size(); i++) {
		auto b_ptr = new hkaBoneHolder(bones_v[i]);
		bones.push_back(b_ptr);
	}

	for (int i = 0; i < bones.size(); ++i) {
		auto bone = bones[i];
		auto parent_index = parent_indices[i];
		if (parent_index == -1) {
			this->root = bone;
			//force rotation to nothing
			printf("Root bone: %s\r\n", bone->name.c_str());
			printf("(%f, %f, %f, %f)\r\n", reference_pose[i].rotation.w(), reference_pose[i].rotation.x(), reference_pose[i].rotation.y(), reference_pose[i].rotation.z());
			root->SetTransform(reference_pose[i]);
		}
		else {
			bone->parent = bones[parent_index];
			bones[parent_index]->children.push_back(bone);
			if (false) {  //strcmp(bone->name.c_str(), "Root") == 0 || strcmp(bone->name.c_str(), "HumanExportRoot")==0 || strcmp(bone->name.c_str(), "COM") == 0 || strcmp(bone->name.c_str(), "C_Hips") == 0
				printf("%s\r\n", bone->name.c_str());
				hkQsTransformf testRotater = reference_pose[i];
				//print the rotations before changing
				printf("(%f, %f, %f, %f)\r\n", reference_pose[i].rotation.w(), reference_pose[i].rotation.x(), reference_pose[i].rotation.y(), reference_pose[i].rotation.z());
			}

			bone->SetTransform(reference_pose[i]);
		}
	}

	return true;
}

bool hktypes::hkaSkeleton::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkaSkeleton") {
		std::cout << "hkaSkeleton::FromInstance: type_name is not hkaSkeleton" << std::endl;
		return false;
	}

	std::vector<int16_t> parent_indices;
	std::vector<hkQsTransformf> reference_pose;

	std::vector<hkaBoneHolder> _bones;
	for (auto bone : this->bones) {
		_bones.push_back(*bone);
		parent_indices.push_back(bone->parent ? std::distance(this->bones.begin(), std::find(this->bones.begin(), this->bones.end(), bone->parent)) : -1);
		reference_pose.push_back(bone->GetTransform());
	}

	class_instance->GetInstanceByFieldName("name")->SetValue(this->name);
	class_instance->GetInstanceByFieldName("parentIndices")->SetValue(parent_indices);
	class_instance->GetInstanceByFieldName("bones")->SetValue(_bones);
	class_instance->GetInstanceByFieldName("referencePose")->SetValue(reference_pose);

	return true;
}

void hktypes::hkaSkeleton::TraverseBones(std::function<bool(hkaBoneHolder*)> pre_order_func, std::function<bool(hkaBoneHolder*)> post_order_func)
{
	std::function<void(hkaBoneHolder*)> traverse = [&](hkaBoneHolder* bone) {
		bool pre_rtn = pre_order_func(bone);
		if (!pre_rtn) {
			return;
		}
		for (auto child : bone->children) {
			traverse(child);
		}
		bool post_rtn = post_order_func(bone);
		if (!post_rtn) {
			return;
		}
		};

	traverse(this->root);
}

nlohmann::json hktypes::hkaSkeleton::ToJson(hkaBoneHolder* cur_bone)
{
	if (cur_bone == nullptr) {
		cur_bone = this->root;
	}
	nlohmann::json serialized;

	serialized["name"] = cur_bone->name;
	serialized["lock_translation"] = cur_bone->lockTranslation;

	auto matrix = cur_bone->GetWorldTransform().getMatrix(true);

	auto rtn = utils::xf::toAxis(matrix, 0.07);

	serialized["head"].push_back(rtn.first.x());
	serialized["head"].push_back(rtn.first.y());
	serialized["head"].push_back(rtn.first.z());
	serialized["tail"].push_back(rtn.second.x());
	serialized["tail"].push_back(rtn.second.y());
	serialized["tail"].push_back(rtn.second.z());
	for (int i = 0; i < 4; ++i) {
		serialized["matrix"].push_back(nlohmann::json::array());
		for (int j = 0; j < 4; ++j) {
			serialized["matrix"][i].push_back(matrix(i, j));
		}
	}

	for (auto child : cur_bone->children) {
		if (child == nullptr) {
			continue;
		}
		serialized["children"].push_back(ToJson(child));
	}

	return serialized;
}

void hktypes::hkaSkeleton::FromJson(nlohmann::json& json, hkaBoneHolder* bone)
{
	bool calc_num_bones = false;
	if (bone == nullptr) {
		this->name = "Root";
		this->root = new hkaBoneHolder();
		bone = this->root;
		calc_num_bones = true;
	}

	bone->name = json["name"];
	if (json.contains("lock_translation"))
		bone->lockTranslation = json["lock_translation"];

	Eigen::Matrix4f matrix;
	matrix.setIdentity();
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; j++) {
			matrix(i, j) = json["matrix"][i][j];
		}
	}

	auto trans = hkQsTransform::fromMatrix(matrix);

	bone->SetWorldTransform(trans, true);

	for (auto child : json["children"]) {
		auto child_bone = new hkaBoneHolder();
		bone->children.push_back(child_bone);
		child_bone->parent = bone;
		this->FromJson(child, child_bone);
	}

	if (calc_num_bones) {
		this->CalculateBoneList();
	}
}

uint16_t hktypes::hkaSkeleton::GetBoneIndex(std::string bone_name)
{
	uint16_t index = uint16_t(-1);
	for (int i = 0; i < this->bones.size(); ++i) {
		if (this->bones[i]->name == bone_name) {
			index = i;
			break;
		}
	}
	return index;
}

hktypes::hkaBoneHolder* hktypes::hkaSkeleton::GetBone(std::string bone_name)
{
	hkaBoneHolder* bone = nullptr;
	for (int i = 0; i < this->bones.size(); ++i) {
		if (this->bones[i]->name == bone_name) {
			bone = this->bones[i];
			break;
		}
	}
	return bone;
}

hktypes::hkaSkeleton* hktypes::hkaSkeleton::Clone()
{
	hkaSkeleton* clone = new hkaSkeleton();
	clone->name = this->name;
	auto json_serialization = this->ToJson();
	clone->FromJson(json_serialization);
	return clone;
}

void hktypes::hkaSkeleton::CalculateBoneList()
{
	this->bones.clear();
	this->TraverseBones([&](hkaBoneHolder* bone) {
		bones.push_back(bone);
		return true;
		});
}

bool hktypes::hkQsTransform::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (class_instance && class_instance->type->type_name != "hkQsTransform") {
		std::cout << "hkQsTransform::FromInstance: Wrong type!" << std::endl;
		throw;
	}
#endif // NO_HK_TYPENAME_CHECK

	hkQsTransformf::FromInstance(class_instance->GetInstanceByFieldName("class_parent"));
	return true;
}

bool hktypes::hkQsTransform::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (class_instance && class_instance->type->type_name != "hkQsTransform") {
		std::cout << "hkQsTransform::ToInstance: Wrong type!" << std::endl;
		throw;
	}
#endif // NO_HK_TYPENAME_CHECK

	hkQsTransformf::ToInstance(class_instance->GetInstanceByFieldName("class_parent"));
	return true;
}
