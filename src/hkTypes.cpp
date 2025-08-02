#include "hkTypes.h"
#include "hclSimClothData.h"
#include "hclOperator.h"


bool hktypes::hkUFloat8::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	
#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkUFloat8::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkUFloat8") {
		std::cout << "hkUFloat8::FromInstance: Expecting hkUFloat8 but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("value")->GetValue(value);
	return true;
}

bool hktypes::hkUFloat8::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkUFloat8::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkUFloat8") {
		std::cout << "hkUFloat8::ToInstance: Expecting hkUFloat8 but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("value")->SetValue(value);
	return true;
}

bool hktypes::hkFloat3::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkFloat3::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkFloat3") {
		std::cout << "hkFloat3::FromInstance: Expecting hkFloat3 but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("x")->GetValue(x);
	class_instance->GetInstanceByFieldName("y")->GetValue(y);
	class_instance->GetInstanceByFieldName("z")->GetValue(z);
	return true;
}

bool hktypes::hkFloat3::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkFloat3::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkFloat3") {
		std::cout << "hkFloat3::ToInstance: Expecting hkFloat3 but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("x")->SetValue(x);
	class_instance->GetInstanceByFieldName("y")->SetValue(y);
	class_instance->GetInstanceByFieldName("z")->SetValue(z);
	return true;
}

bool hktypes::hkPackedVector3::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkPackedVector3") {
		std::cout << "hkPackedVector3::FromInstance: type_name is not hkPackedVector3" << std::endl;
		return false;
	}

	std::vector<int16_t> _values;
	class_instance->GetInstanceByFieldName("values")->GetValue(_values);

	this->values[0] = _values[0];
	this->values[1] = _values[1];
	this->values[2] = _values[2];
	this->values[3] = _values[3];

	return true;
}

bool hktypes::hkPackedVector3::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkPackedVector3") {
		std::cout << "hkPackedVector3::FromInstance: type_name is not hkPackedVector3" << std::endl;
		return false;
	}

	std::vector<int16_t> _values = { this->values[0], this->values[1], this->values[2], this->values[3] };
	class_instance->GetInstanceByFieldName("values")->SetValue(_values);

	return true;
}

Eigen::Vector3f hktypes::hkPackedVector3::ToVector3f()
{
	auto iexp = (int)values[3] << 16;
	auto fexp = *reinterpret_cast<float*>(&iexp);
	auto x = fexp * float((int)values[0] << 16);
	auto y = fexp * float((int)values[1] << 16);
	auto z = fexp * float((int)values[2] << 16);
	return Eigen::Vector3f(x, y, z);
}

hktypes::hkPackedVector3 hktypes::hkPackedVector3::FromVector3f(const Eigen::Vector3f vec)
{
	hkPackedVector3 result;
	// Find the maximum absolute value among the components
	float m = 0;
	for (int i = 0; i < 3; ++i) {
		float absValue = fabs(vec[i]);
		if (absValue > m) {
			m = absValue;
		}
	}
	// Calculate exponential part
	uint8_t b = 0;
	int* const exp_ptr = reinterpret_cast<int*>(&m);
	int x = *exp_ptr;
	const int log_2 = ((x >> 23) & 255) - 128;
	x &= ~(255 << 23);
	x += 127 << 23;
	*exp_ptr = x;
	int log2 = (int(m) + 1 + log_2 + 96);
	if (log2 > b) {
		b = log2;
	}
	result.values[3] = b << 7;
	int iexp = b << 23;
	float fexp = *reinterpret_cast<float*>(&iexp);
	// Scale and pack the values part
	result.values[0] = (int32_t)(vec.x() / fexp) >> 16;
	result.values[1] = (int32_t)(vec.y() / fexp) >> 16;
	result.values[2] = (int32_t)(vec.z() / fexp) >> 16;
	return result;
}

bool hktypes::hkMatrix4Holder::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto array_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);
	if (array_instance->type->type_name != "hkMatrix4Impl" && array_instance->type->type_name != "hkTransformf" && array_instance->type->type_name != "hkMatrix4" && array_instance->type->type_name != "hkMatrix4f" && array_instance->type->type_name != "hkMatrix4d") {
		std::cout << "hkMatrix4Holder::FromInstance: type_name is: " << array_instance->type->type_name << std::endl;
		return false;
	}

	std::vector<float> _values;
	array_instance->GetValue(_values);
	for (int i = 0; i < 16; i++) {
		this->values[i] = _values[i];
	}

	return true;
}

bool hktypes::hkMatrix4Holder::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto array_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);
	if (array_instance->type->type_name != "hkMatrix4Impl" && array_instance->type->type_name != "hkTransformf" && array_instance->type->type_name != "hkMatrix4" && array_instance->type->type_name != "hkMatrix4f" && array_instance->type->type_name != "hkMatrix4d") {
		std::cout << "hkMatrix4Holder::ToInstance: type_name is: " << array_instance->type->type_name << std::endl;
		return false;
	}

	std::vector<float> _values = { this->values[0], this->values[1], this->values[2], this->values[3], this->values[4], this->values[5], this->values[6], this->values[7], this->values[8], this->values[9], this->values[10], this->values[11], this->values[12], this->values[13], this->values[14], this->values[15] };
	array_instance->SetValue(_values);

	return true;
}

Eigen::Matrix4f hktypes::hkMatrix4Holder::ToMatrix4f()
{
	Eigen::Matrix4f mat;
	mat << values[0], values[1], values[2], values[3],
		values[4], values[5], values[6], values[7],
		values[8], values[9], values[10], values[11],
		values[12], values[13], values[14], values[15];
	return mat;
}

hktypes::hkMatrix4Holder hktypes::hkMatrix4Holder::FromMatrix4f(const Eigen::Matrix4f mat)
{
	hkMatrix4Holder result;
	result.values[0] = mat(0, 0);
	result.values[1] = mat(0, 1);
	result.values[2] = mat(0, 2);
	result.values[3] = mat(0, 3);
	result.values[4] = mat(1, 0);
	result.values[5] = mat(1, 1);
	result.values[6] = mat(1, 2);
	result.values[7] = mat(1, 3);
	result.values[8] = mat(2, 0);
	result.values[9] = mat(2, 1);
	result.values[10] = mat(2, 2);
	result.values[11] = mat(2, 3);
	result.values[12] = mat(3, 0);
	result.values[13] = mat(3, 1);
	result.values[14] = mat(3, 2);
	result.values[15] = mat(3, 3);
	return result;
}

bool hktypes::hkVector4Holder::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto array_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);
	if (array_instance->type->type_name != "hkVector4Impl" && array_instance->type->type_name != "hkVector4" && array_instance->type->type_name != "hkVector4f" && array_instance->type->type_name != "hkVector4d") {
		std::cout << "hkVector4Holder::FromInstance: type_name is not hkVector4" << std::endl;
		return false;
	}

	std::vector<float> _values;
	array_instance->GetValue(_values);
	for (int i = 0; i < 4; i++) {
		this->values[i] = _values[i];
	}

	return true;
}

bool hktypes::hkVector4Holder::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto array_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);
	if (array_instance->type->type_name != "hkVector4Impl" && array_instance->type->type_name != "hkVector4" && array_instance->type->type_name != "hkVector4f" && array_instance->type->type_name != "hkVector4d") {
		std::cout << "hkVector4Holder::FromInstance: type_name is not hkVector4" << std::endl;
		return false;
	}

	std::vector<float> _values = { this->values[0], this->values[1], this->values[2], this->values[3] };
	array_instance->SetValue(_values);

	return true;
}

Eigen::Vector4f hktypes::hkVector4Holder::ToVector4f()
{
	return Eigen::Vector4f(values[0], values[1], values[2], values[3]);
}

hktypes::hkVector4Holder hktypes::hkVector4Holder::FromVector4f(const Eigen::Vector4f vec)
{
	hkVector4Holder result;
	result.values[0] = vec.x();
	result.values[1] = vec.y();
	result.values[2] = vec.z();
	result.values[3] = vec.w();
	return result;
}

Eigen::Vector3f hktypes::hkVector4Holder::ToVector3f()
{
	return Eigen::Vector3f(values[0], values[1], values[2]);
}

hktypes::hkVector4Holder hktypes::hkVector4Holder::FromVector3f(const Eigen::Vector3f vec, const float w)
{
	hkVector4Holder result;
	result.values[0] = vec.x();
	result.values[1] = vec.y();
	result.values[2] = vec.z();
	result.values[3] = w;
	return result;
}

bool hktypes::hkQuaternionHolder::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto array_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);
	if (array_instance->type->type_name != "hkQuaternionImpl" && array_instance->type->type_name != "hkQuaternion" && array_instance->type->type_name != "hkQuaternionf" && array_instance->type->type_name != "hkQuaterniond") {
		std::cout << "hkQuaternionHolder::FromInstance: type_name is not hkQuaternion" << std::endl;
		return false;
	}

	std::vector<float> _values;
	array_instance->GetValue(_values);
	for (int i = 0; i < 4; i++) {
		this->values[i] = _values[i];
	}

	return true;
}

bool hktypes::hkQuaternionHolder::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto array_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);
	if (array_instance->type->type_name != "hkQuaternionImpl" && array_instance->type->type_name != "hkQuaternion" && array_instance->type->type_name != "hkQuaternionf" && array_instance->type->type_name != "hkQuaterniond") {
		std::cout << "hkQuaternionHolder::FromInstance: type_name is not hkQuaternion" << std::endl;
		return false;
	}

	std::vector<float> _values = { this->values[0], this->values[1], this->values[2], this->values[3] };
	array_instance->SetValue(_values);

	return true;
}

Eigen::Vector4f hktypes::hkQuaternionHolder::ToVector4f()
{
	return Eigen::Vector4f(values[0], values[1], values[2], values[3]);
}

hktypes::hkQuaternionHolder hktypes::hkQuaternionHolder::FromVector4f(const Eigen::Vector4f vec)
{
	hkQuaternionHolder result;
	result.values[0] = vec.x();
	result.values[1] = vec.y();
	result.values[2] = vec.z();
	result.values[3] = vec.w();
	return result;
}

Eigen::Vector3f hktypes::hkQuaternionHolder::ToVector3f()
{
	return Eigen::Vector3f(values[0], values[1], values[2]);
}

hktypes::hkQuaternionHolder hktypes::hkQuaternionHolder::FromVector3f(const Eigen::Vector3f vec, const float w)
{
	hkQuaternionHolder result;
	result.values[0] = vec.x();
	result.values[1] = vec.y();
	result.values[2] = vec.z();
	result.values[3] = w;
	return result;
}

bool hktypes::hkBitField::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkBitField") {
		std::cout << "hkBitField::FromInstance: type_name is not hkBitField" << std::endl;
		return false;
	}

	hkBitFieldBase<hkBitFieldStorage<std::vector<uint32_t>>>::FromInstance(class_instance->GetInstanceByFieldName("class_parent"));
	return true;
}

bool hktypes::hkBitField::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkBitField") {
		std::cout << "hkBitField::FromInstance: type_name is not hkBitField" << std::endl;
		return false;
	}

	hkBitFieldBase<hkBitFieldStorage<std::vector<uint32_t>>>::ToInstance(class_instance->GetInstanceByFieldName("class_parent"));
	return true;
}

hktypes::hkBitField hktypes::hkBitField::FromMask(std::vector<bool>& mask, int num_bits)
{
	this->SetNumBits(num_bits);
	this->SetMask(mask);
	return *this;
}

hktypes::hkBitField hktypes::hkBitField::FromMaskedIds(std::vector<uint32_t>& ids, int num_bits)
{
	this->SetNumBits(num_bits);
	this->SetMaskedIds(ids);
	return *this;
}

std::vector<bool> hktypes::hkBitField::GetMask()
{
	size_t word_size = sizeof(decltype(this->storage.words)::value_type) * 8;
	std::vector<bool> mask;
	for (auto& word: this->storage.words) {
		for (int i = 0; i < word_size; i++) {
			mask.push_back(word & (1 << i));
		}
	}
	mask.resize(this->storage.numBits);
	return mask;
}

std::vector<uint32_t> hktypes::hkBitField::GetMaskedIds() {
	std::vector<uint32_t> ids;
	auto mask = this->GetMask();
	for (int i = 0; i < mask.size(); ++i) {
		if (mask[i]) {
			ids.push_back(i);
		}
	}
	return ids;
}

void hktypes::hkBitField::SetMask(std::vector<bool>& mask)
{
	size_t word_size = sizeof(decltype(this->storage.words)::value_type) * 8;
	this->storage.words.clear();
	this->storage.numBits = mask.size();
	this->storage.words.resize((mask.size() + word_size - 1) / word_size);
	for (int i = 0; i < mask.size(); i++) {
		if (mask[i]) {
			this->storage.words[i / word_size] |= 1 << (i % word_size);
		}
	}
}

void hktypes::hkBitField::SetMaskedIds(std::vector<uint32_t>& ids)
{
	std::vector<bool> mask;
	mask.resize(this->storage.numBits);
	for (auto& id : ids) {
		mask[id] = true;
	}
	this->SetMask(mask);
}

void hktypes::hkBitField::operator=(const hkBitField& other)
{
	this->storage.numBits = other.storage.numBits;
	this->storage.words = other.storage.words;
}

hktypes::hkBitField hktypes::hkBitField::operator|(const hkBitField& other) const
{
	hkBitField ret = *this;
	auto& storage = ret.storage;
	auto& other_storage = other.storage;
	if (storage.numBits != other_storage.numBits) {
		std::cout << "hkBitField::operator|: numBits is not equal" << std::endl;
		throw std::runtime_error("hkBitField::operator|: numBits is not equal");
		return ret;
	}
	for (int i = 0; i < storage.words.size(); i++) {
		storage.words[i] |= other_storage.words[i];
	}
	return ret;
}

hktypes::hkBitField hktypes::hkBitField::operator|=(const hkBitField& other)
{
	auto& storage = this->storage;
	auto& other_storage = other.storage;
	if (storage.numBits != other_storage.numBits) {
		std::cout << "hkBitField::operator|=: numBits is not equal" << std::endl;
		throw std::runtime_error("hkBitField::operator|=: numBits is not equal");
		return *this;
	}
	for (int i = 0; i < storage.words.size(); i++) {
		storage.words[i] |= other_storage.words[i];
	}
	return *this;
}

bool hktypes::hkRefCountedProperties::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkRefCountedProperties::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkRefCountedProperties") {
		std::cout << "hkRefCountedProperties::FromInstance: Expecting hkRefCountedProperties but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	hkReferencedObject::FromInstance(class_instance->GetInstanceByFieldName("class_parent"));
	class_instance->GetInstanceByFieldName("entries")->GetValue(entries);
	return true;
}

bool hktypes::hkRefCountedProperties::Entry::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkRefCountedProperties::Entry::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkRefCountedProperties::Entry") {
		std::cout << "hkRefCountedProperties::Entry::FromInstance: Expecting hkRefCountedProperties::Entry but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("object")->GetValue(object);
	class_instance->GetInstanceByFieldName("key")->GetValue(key);
	class_instance->GetInstanceByFieldName("flags")->GetValue(flags);
	return true;
}

bool hktypes::hkRefCountedProperties::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkRefCountedProperties::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkRefCountedProperties") {
		std::cout << "hkRefCountedProperties::ToInstance: Expecting hkRefCountedProperties but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	hkReferencedObject::ToInstance(class_instance->GetInstanceByFieldName("class_parent"));
	class_instance->GetInstanceByFieldName("entries")->SetValue(entries);
	return true;
}

bool hktypes::hkRefCountedProperties::Entry::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkRefCountedProperties::Entry::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkRefCountedProperties::Entry") {
		std::cout << "hkRefCountedProperties::Entry::ToInstance: Expecting hkRefCountedProperties::Entry but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("object")->SetValue(object);
	class_instance->GetInstanceByFieldName("key")->SetValue(key);
	class_instance->GetInstanceByFieldName("flags")->SetValue(flags);
	return true;
}

#include "hkaAnimationContainer.h"
#include "hclClothContainer.h"

bool hktypes::hkRootLevelContainer::SwapNamedVariantOrders() {
	std::cout << "flipping "<< this->namedVariants.at(0).className << " with " << this->namedVariants.at(1).className << std::endl;
	std::reverse(this->namedVariants.begin(), this->namedVariants.end());
	return true;
}

bool hktypes::hkRootLevelContainer::NamedVariant::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkRootLevelContainer::NamedVariant") {
		std::cout << "hkRootLevelContainer::NamedVariant::FromInstance: type_name is not hkRootLevelContainer::NamedVariant" << std::endl;
		return false;
	}
	
	class_instance->GetInstanceByFieldName("name")->GetValue(this->name);
	std::cout << this->name << std::endl;
	class_instance->GetInstanceByFieldName("className")->GetValue(this->className);
	std::cout << this->className << std::endl;
	auto _variant = class_instance->GetPointersByFieldName<hkReferencedObject>("variant");
	std::cout << _variant->GethkClassName() << std::endl;
	if (_variant->GethkClassName() == "hkaAnimationContainer") {
		std::cout << "replacing hkaAnimationContainer with hkaSkeleton" << std::endl;
		// get the hkaSkeleton instead
		auto _hkaSkeleton = dynamic_cast<const hkaAnimationContainer*>(_variant)->skeletons.at(0);
		this->variant = _hkaSkeleton;
		this->name = ""; //is nameless
		this->className = "hkaSkeleton";
		std::cout << "replacing done " << std::endl;
	}
	else if (_variant->GethkClassName() == "hclClothContainer"){
		std::cout << "replacing hclClothContainer with hclClothDatas" << std::endl;
		// get the hkaSkeleton instead
		// get the hclClothDatas instead
		auto _hclClothDatas = dynamic_cast<const hclClothContainer*>(_variant)->clothDatas.at(0);
		this->variant = _hclClothDatas;
		this->name = ""; //is nameless
		this->className = "hclClothData";
		std::cout << "replacing done " << std::endl;
		int sizeOfCollidables = dynamic_cast<const hclClothContainer*>(_variant)->collidables.size();
		if (sizeOfCollidables > 0)
			printf("hkx has collidables, the actually hclCollidable mesh is lost with this implementation but I *think* it works in game, as a perinstancecollidable inside hclclothdata. \r\n");
	}
	else {
		std::cout << "hkRootLevelContainer that shouldn't be modified: " << _variant->GethkClassName() << std::endl;
		this->variant = _variant;
	}
	return true;
}

bool hktypes::hkRootLevelContainer::NamedVariant::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkRootLevelContainer::NamedVariant") {
		std::cout << "hkRootLevelContainer::NamedVariant::FromInstance: type_name is not hkRootLevelContainer::NamedVariant" << std::endl;
		return false;
	}

	class_instance->GetInstanceByFieldName("name")->SetValue(this->name);
	class_instance->GetInstanceByFieldName("className")->SetValue(this->className);
	class_instance->GetInstanceByFieldName("variant")->SetValue(this->variant);

	return true;
}

bool hktypes::hkRootLevelContainer::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkRootLevelContainer") {
		std::cout << "hkRootLevelContainer::FromInstance: type_name is not hkRootLevelContainer" << std::endl;
		return false;
	}

	class_instance->GetInstanceByFieldName("namedVariants")->GetValue(this->namedVariants);

	return true;
}

bool hktypes::hkRootLevelContainer::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkRootLevelContainer") {
		std::cout << "hkRootLevelContainer::FromInstance: type_name is not hkRootLevelContainer" << std::endl;
		return false;
	}

	class_instance->GetInstanceByFieldName("namedVariants")->SetValue(this->namedVariants);

	return true;
}

hktypes::hkReferencedObject* hktypes::hkRootLevelContainer::GetNamedVariantRef(std::string type_name, std::string instance_name)
{
	for (auto& namedVariant : this->namedVariants) {
		if (namedVariant.className == type_name && (instance_name.empty() || instance_name == namedVariant.name)) {
			return namedVariant.variant;
		}
	}
	return nullptr;
}

std::vector<hktypes::hkReferencedObject*> hktypes::hkRootLevelContainer::GetNamedVariantRefs(std::string type_name, std::string instance_name)
{
	std::vector<hkReferencedObject*> ret;
	for (auto& namedVariant : this->namedVariants) {
		if (namedVariant.className == type_name && (instance_name.empty() || instance_name == namedVariant.name)) {
			ret.push_back(namedVariant.variant);
		}
	}
	return ret;
}

hktypes::hkRootLevelContainer::NamedVariant& hktypes::hkRootLevelContainer::GetNamedVariant(std::string type_name, std::string instance_name)
{
	for (auto& namedVariant : this->namedVariants) {
		if (namedVariant.className == type_name && (instance_name.empty() || instance_name == namedVariant.name)) {
			return namedVariant;
		}
	}
	throw std::runtime_error("NamedVariant not found");
}



hktypes::hclBufferedMeshObj& hktypes::hclBufferedMeshObj::FromSimClothData(hclSimClothData* simClothData)
{
	if (simClothData == nullptr) {
		return *this;
	}

	auto& ret = *this;

	ret.name = "hclSimClothData_" + simClothData->name;

	auto& sim_poses = simClothData->simClothPoses;
	if (sim_poses.size() == 1) {
		auto& sim_positions = sim_poses[0]->positions;
		for (auto& p : sim_positions) {
			auto pos = p.ToVector4f();
			ret.positions.push_back({ pos.x(), pos.y(), pos.z() });
		}
	}

	for (int i = 0; i < simClothData->triangleIndices.size(); i += 3) {
		ret.triangleIndices.push_back({ simClothData->triangleIndices[i], simClothData->triangleIndices[i + 1], simClothData->triangleIndices[i + 2] });
	}

	if (simClothData->doNormals) {
		// Don't know what to do here
	}

	ret.extraDataList.resize(ret.positions.size());
	for (int i = 0; i < ret.positions.size(); ++i) {
		auto particle_data_extra_data = make_extra_data("particleDatas", simClothData->particleDatas[i]);
		ret.extraDataList[i].push_back(particle_data_extra_data);

		if (std::find(simClothData->fixedParticles.begin(), simClothData->fixedParticles.end(), i) != simClothData->fixedParticles.end()) {
			auto fixed_particles_extra_data = make_extra_data("fixedParticles", true);
			ret.extraDataList[i].push_back(fixed_particles_extra_data);
		}else{
			auto fixed_particles_extra_data = make_extra_data("fixedParticles", false);
			ret.extraDataList[i].push_back(fixed_particles_extra_data);
		}

		auto static_collision_mask_extra_data = make_extra_data("staticCollisionMasks", simClothData->staticCollisionMasks[i]);
		ret.extraDataList[i].push_back(static_collision_mask_extra_data);

		bool perParticlePinchDetectionEnabledFlags = simClothData->perParticlePinchDetectionEnabledFlags[i];
		auto perParticlePinchDetectionEnabledFlags_extra_data = make_extra_data("perParticlePinchDetectionEnabledFlags", perParticlePinchDetectionEnabledFlags);
	}

	size_t num_collidables = simClothData->perInstanceCollidables.size();
	for (int i = 0; i < num_collidables; i++) {
		auto& collider = simClothData->perInstanceCollidables[i];
		auto transform = simClothData->perInstanceCollidables[i]->transform.ToMatrix4f();
		transform.transposeInPlace();
		transform.block<1,3>(3, 0) = Eigen::Vector3f::Zero();
		auto offset = simClothData->collidableTransformMap.offsets[i].ToMatrix4f();
		offset.transposeInPlace();
		auto& shape = collider->shape;
		if (shape->type == 0) {
			auto mesh = shape->ToVisualizeMeshObj();
			mesh.localFrame = transform * offset;
			mesh.name.append(":" + collider->name);
			ret.extraShapes.push_back(mesh);
		}
	}

	return ret;
}

hktypes::hclBufferedMeshObj& hktypes::hclBufferedMeshObj::FromObjectSpaceSkinPNOperator(hclObjectSpaceSkinPNOperator* skinOperator)
{
	if (skinOperator == nullptr) {
		return *this;
	}

	auto& ret = *this;

	ret.name = "hclObjectSpaceSkinPNOperator_" + skinOperator->name;

	auto& transformSubSet = skinOperator->transformSubset;

	auto& deformer = skinOperator->objectSpaceDeformer;

	auto& PNs = skinOperator->localPNs;

	int num_verts = deformer.endVertexIndex + 1;

	ret.positions.resize(num_verts);
	ret.normals.resize(num_verts);
	ret.boneWeights.resize(num_verts);
	ret.extraDataList.resize(num_verts);

	using _block_t = hclObjectSpaceDeformer::EntryBlockBase;
	std::vector<std::vector<_block_t*>> blocks;
	blocks.push_back(utils::make_references<_block_t*>(deformer.eightBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.sevenBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.sixBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.fiveBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.fourBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.threeBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.twoBlendEntries));
	blocks.push_back(utils::make_references<_block_t*>(deformer.oneBlendEntries));

	//blocks.erase(std::remove_if(blocks.begin(), blocks.end(), [](auto& block) {return block.empty(); }), blocks.end());

	std::vector<uint8_t> control_bytes = deformer.controlBytes;

	std::vector<std::queue<std::array<uint16_t, 16>>> vert_ids;

	for (auto& block_list : blocks) {
		std::queue<std::array<uint16_t, 16>> _vert_id_list;
		for (auto& block : block_list) {
			auto& vert_id_list = block->vertexIndices;
			auto bone_weight_pairs = block->GetBoneIndicesAndWeights(transformSubSet);

			for (int j = 0; j < 16; ++j) {
				ret.boneWeights[vert_id_list[j]] = bone_weight_pairs[j];
			}

			_vert_id_list.push(utils::make_array(vert_id_list));
		}
		vert_ids.push_back(_vert_id_list);
	}

	// TODO: there could be another indexing scheme for control bytes
	// four: 4 (index 0)
	// three: 2 (index 1)
	// two: 0 (index 2)
	// one: 1 (index 3)
	// control_bytes: 0,0,0,0,1,1,3
	for (int i = 0; i < PNs.size(); ++i) {
		auto& localPositions = PNs[i].localPosition;
		auto& localNormals = PNs[i].localNormal;

		auto& vert_id_block = vert_ids[control_bytes[i] + 4];
		auto& vert_id_list = vert_id_block.front();
		vert_id_block.pop();

		for (int j = 0; j < 16; ++j) {
			auto p = localPositions[j].ToVector3f();
			auto n = localNormals[j].ToVector3f();
			ret.positions[vert_id_list[j]] = { p.x(), p.y(), p.z() };
			ret.normals[vert_id_list[j]] = { n.x(), n.y(), n.z() };
		}
	}

	return ret;
}

hktypes::hclBufferedMeshObj& hktypes::hclBufferedMeshObj::FromBoneSpaceSkinPNOperator(hclBoneSpaceSkinPNOperator* skinOperator)
{
	if (skinOperator == nullptr) {
		return *this;
	}

	auto& ret = *this;

	ret.name = "hclBoneSpaceSkinPNOperator_" + skinOperator->name;

	auto& transformSubSet = skinOperator->transformSubset;

	int num_verts = skinOperator->boneSpaceDeformer.endVertexIndex + 1;

	ret.positions.resize(num_verts);
	ret.normals.resize(num_verts);

	int i = 0;
	for (auto& block : skinOperator->boneSpaceDeformer.fourBlendEntries) {
		auto& vert_id_list = block.vertexIndices;
		auto localPositions = skinOperator->localPNs[i].localPosition;
		auto localNormals = skinOperator->localPNs[i].localNormal;

		for (int j = 0; j < 16; ++j) {
			auto p = localPositions[j].ToVector4f();
			auto n = localNormals[j].ToVector3f();
			ret.positions[vert_id_list[j]] = { p.x(), p.y(), p.z() };
			ret.normals[vert_id_list[j]] = { n.x(), n.y(), n.z() };
		}

		i++;
	}

	for (auto& block : skinOperator->boneSpaceDeformer.threeBlendEntries) {
		auto& vert_id_list = block.vertexIndices;
		auto localPositions = skinOperator->localPNs[i].localPosition;
		auto localNormals = skinOperator->localPNs[i].localNormal;

		for (int j = 0; j < 16; ++j) {
			auto p = localPositions[j].ToVector4f();
			auto n = localNormals[j].ToVector3f();
			ret.positions[vert_id_list[j]] = { p.x(), p.y(), p.z() };
			ret.normals[vert_id_list[j]] = { n.x(), n.y(), n.z() };
		}

		i++;
	}

	for (auto& block : skinOperator->boneSpaceDeformer.twoBlendEntries) {
		auto& vert_id_list = block.vertexIndices;
		auto localPositions = skinOperator->localPNs[i].localPosition;
		auto localNormals = skinOperator->localPNs[i].localNormal;

		for (int j = 0; j < 16; ++j) {
			auto p = localPositions[j].ToVector4f();
			auto n = localNormals[j].ToVector3f();
			ret.positions[vert_id_list[j]] = { p.x(), p.y(), p.z() };
			ret.normals[vert_id_list[j]] = { n.x(), n.y(), n.z() };
		}

		i++;
	}

	for (auto& block : skinOperator->boneSpaceDeformer.oneBlendEntries) {
		auto& vert_id_list = block.vertexIndices;
		auto localPositions = skinOperator->localPNs[i].localPosition;
		auto localNormals = skinOperator->localPNs[i].localNormal;

		for (int j = 0; j < 16; ++j) {
			auto p = localPositions[j].ToVector4f();
			auto n = localNormals[j].ToVector3f();
			ret.positions[vert_id_list[j]] = { p.x(), p.y(), p.z() };
			ret.normals[vert_id_list[j]] = { n.x(), n.y(), n.z() };
		}

		i++;
	}

	return ret;
}

bool hktypes::hclBufferedMeshObj::ToSimClothData(hclSimClothData* simClothData)
{
	if (simClothData == nullptr) {
		return false;
	}

	simClothData->name = this->name;

	hclSimClothPose* pose = new hclSimClothPose();
	pose->name = "DefaultClothPose";

	auto num_particles = this->positions.size();
	auto num_triangles = this->triangleIndices.size();

	for (auto& old_p: simClothData->simClothPoses) {
		if (old_p) {
			delete old_p;
		}
	}
	simClothData->simClothPoses.clear();

	for (auto& p : this->positions) {
		auto pos = hkVector4Holder::FromVector3f(Eigen::Vector3f(p[0], p[1], p[2]), 1.f);
		pose->positions.push_back(pos);
	}

	simClothData->simClothPoses.push_back(pose);

	simClothData->triangleIndices.clear();
	for (auto& tri : this->triangleIndices) {
		simClothData->triangleIndices.push_back(tri[0]);
		simClothData->triangleIndices.push_back(tri[1]);
		simClothData->triangleIndices.push_back(tri[2]);
	}

	simClothData->triangleFlips.clear();
	for (size_t i = 0; i * 8 < num_triangles; i++) {
		simClothData->triangleFlips.push_back(0);
	}

	simClothData->particleDatas.clear();
	simClothData->fixedParticles.clear();
	simClothData->staticCollisionMasks.clear();
	simClothData->perParticlePinchDetectionEnabledFlags.clear();
	for (uint32_t i = 0; i < num_particles; i++) {
		simClothData->particleDatas.push_back(hclSimClothData::ParticleData());
		simClothData->staticCollisionMasks.push_back(0);
		simClothData->perParticlePinchDetectionEnabledFlags.push_back(false);
	}

	return true;
}

bool hktypes::hclBufferedMeshObj::ToObjectSpaceSkinPNOperator(hclObjectSpaceSkinPNOperator* skinOperator)
{
	return false;
}

bool hktypes::hclBufferedMeshObj::ToBoneSpaceSkinPNOperator(hclBoneSpaceSkinPNOperator* skinOperator)
{
	return false;
}

nlohmann::json hktypes::hclBufferedMeshObj::ToJson()
{
	nlohmann::json ret;

	ret["name"] = this->name;

	ret["type"] = (uint8_t)this->shapeType;

	for (int i = 0; i < 4; ++i) {
		ret["localFrame"].push_back(nlohmann::json::array());
		for (int j = 0; j < 4; ++j) {
			ret["localFrame"][i].push_back(this->localFrame(i, j));
		}
	}

	if (this->shapeType == ShapeType::Capsule) {
		ret["capsuleStart"] = this->capsuleStart;
		ret["capsuleEnd"] = this->capsuleEnd;
		ret["capsuleBigRadius"] = this->capsuleBigRadius;
		ret["capsuleSmallRadius"] = this->capsuleSmallRadius;

		return ret;
	}

	ret["positions"] = this->positions;
	ret["normals"] = this->normals;
	ret["boneWeights"] = this->boneWeights;
	ret["triangleIndices"] = this->triangleIndices;

	for (int i = 0; i < this->extraDataList.size(); ++i) {
		auto& extra_data_list = this->extraDataList[i];
		for (auto& extra_data : extra_data_list) {
			if (extra_data->name == "particleDatas") {
				auto particle_data = static_cast<ExtraData<hclSimClothData::ParticleData>*>(extra_data);
				auto& particle_data_content = particle_data->data;
				auto particle_data_json = nlohmann::json::object();
				particle_data_json["mass"] = particle_data_content.mass;
				particle_data_json["invMass"] = particle_data_content.invMass;
				particle_data_json["radius"] = particle_data_content.radius;
				particle_data_json["friction"] = particle_data_content.friction;
				ret["extraDataList"][i]["particleDatas"] = particle_data_json;
			}
			else if (extra_data->name == "fixedParticles") {
				auto fixed_particles = static_cast<ExtraData<bool>*>(extra_data);
				ret["extraDataList"][i]["fixedParticles"] = fixed_particles->data;
			}
			else if (extra_data->name == "staticCollisionMasks") {
				auto static_collision_masks = static_cast<ExtraData<uint32_t>*>(extra_data);
				ret["extraDataList"][i]["staticCollisionMasks"] = static_collision_masks->data;
			}
			else if (extra_data->name == "perParticlePinchDetectionEnabledFlags") {
				auto per_particle_pinch_detection_enabled_flags = static_cast<ExtraData<bool>*>(extra_data);
				ret["extraDataList"][i]["perParticlePinchDetectionEnabledFlags"] = per_particle_pinch_detection_enabled_flags->data;
			}
		}
	}

	for (auto& extra_shape : this->extraShapes) {
		ret["extraShapes"].push_back(extra_shape.ToJson());
	}

	return ret;
}

hktypes::hclBufferedMeshObj hktypes::hclBufferedMeshObj::FromJson(nlohmann::json& json)
{
	this->name = json["name"];

	this->shapeType = (ShapeType)json["type"];

	if (json.contains("localFrame")) {
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; j++) {
				this->localFrame(i, j) = json["localFrame"][i][j];
			}
		}
	}
	else {
		this->localFrame = Eigen::Matrix4f::Identity();
	}

	if (this->shapeType == ShapeType::Capsule) {
		// Some weird thing in havok cloth
		this->localFrame(1, 3) = this->localFrame(2, 0);
		this->localFrame(0, 3) = this->localFrame(2, 1);

		this->capsuleStart = json["capsuleStart"];
		this->capsuleEnd = json["capsuleEnd"];
		this->capsuleBigRadius = json["capsuleBigRadius"];
		this->capsuleSmallRadius = json["capsuleSmallRadius"];

		return *this;
	}

	this->positions = json["positions"];
	this->normals = json["normals"];
	this->boneWeights = json["boneWeights"];
	this->triangleIndices = json["triangleIndices"];

	if (json.find("extraDataList") != json.end()) {
		for (int i = 0; i < this->positions.size(); ++i) {
			auto& extra_data_list_json = json["extraDataList"][i];
			for (auto& extra_data_json : extra_data_list_json) {
				if (extra_data_json.find("particleDatas") != extra_data_json.end()) {
					auto particle_data = make_extra_data("particleDatas", hclSimClothData::ParticleData());
					particle_data->data.mass = extra_data_json["particleDatas"]["mass"];
					particle_data->data.invMass = extra_data_json["particleDatas"]["invMass"];
					particle_data->data.radius = extra_data_json["particleDatas"]["radius"];
					particle_data->data.friction = extra_data_json["particleDatas"]["friction"];
					this->extraDataList[i].push_back(particle_data);
				}
				else if (extra_data_json.find("fixedParticles") != extra_data_json.end()) {
					bool fixed_particles_v = extra_data_json["fixedParticles"];
					auto fixed_particles = make_extra_data("fixedParticles", fixed_particles_v);
					this->extraDataList[i].push_back(fixed_particles);
				}
				else if (extra_data_json.find("staticCollisionMasks") != extra_data_json.end()) {
					uint32_t static_collision_masks_v = extra_data_json["staticCollisionMasks"];
					auto static_collision_masks = make_extra_data("staticCollisionMasks", static_collision_masks_v);
					this->extraDataList[i].push_back(static_collision_masks);
				}
				else if (extra_data_json.find("perParticlePinchDetectionEnabledFlags") != extra_data_json.end()) {
					bool per_particle_pinch_detection_enabled_flags_v = extra_data_json["perParticlePinchDetectionEnabledFlags"];
					auto per_particle_pinch_detection_enabled_flags = make_extra_data("perParticlePinchDetectionEnabledFlags", per_particle_pinch_detection_enabled_flags_v);
					this->extraDataList[i].push_back(per_particle_pinch_detection_enabled_flags);
				}
			}
		}
	}

	if (json.find("extraShapes") != json.end()) {
		for (auto& extra_shape_json : json["extraShapes"]) {
			auto extra_shape = hclBufferedMeshObj();
			extra_shape.FromJson(extra_shape_json);
			this->extraShapes.push_back(extra_shape);
		}
	}
	return *this;
}
