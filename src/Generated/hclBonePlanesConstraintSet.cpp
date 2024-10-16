#include "Generated\hclBonePlanesConstraintSet.h"

#include "Generated\.h"
#include "Generated\.h"
#include "Generated\.h"

bool hktypes::hclBonePlanesConstraintSet::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBonePlanesConstraintSet::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBonePlanesConstraintSet") {
		std::cout << "hclBonePlanesConstraintSet::FromInstance: Expecting hclBonePlanesConstraintSet but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	hclConstraintSet::FromInstance(class_instance->GetInstanceByFieldName("class_parent"));
	class_instance->GetInstanceByFieldName("bonePlanes")->GetValue(bonePlanes);
	class_instance->GetInstanceByFieldName("transformSetIndex")->GetValue(transformSetIndex);
	return true;
}

bool hktypes::hclBonePlanesConstraintSet::BonePlane::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBonePlanesConstraintSet::BonePlane::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBonePlanesConstraintSet::BonePlane") {
		std::cout << "hclBonePlanesConstraintSet::BonePlane::FromInstance: Expecting hclBonePlanesConstraintSet::BonePlane but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("planeEquationBone")->GetValue(planeEquationBone);
	class_instance->GetInstanceByFieldName("particleIndex")->GetValue(particleIndex);
	class_instance->GetInstanceByFieldName("transformIndex")->GetValue(transformIndex);
	class_instance->GetInstanceByFieldName("stiffness")->GetValue(stiffness);
	return true;
}

bool hktypes::hclBonePlanesConstraintSet::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBonePlanesConstraintSet::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBonePlanesConstraintSet") {
		std::cout << "hclBonePlanesConstraintSet::ToInstance: Expecting hclBonePlanesConstraintSet but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	hclConstraintSet::ToInstance(class_instance->GetInstanceByFieldName("class_parent"));
	class_instance->GetInstanceByFieldName("bonePlanes")->SetValue(bonePlanes);
	class_instance->GetInstanceByFieldName("transformSetIndex")->SetValue(transformSetIndex);
	return true;
}

bool hktypes::hclBonePlanesConstraintSet::BonePlane::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBonePlanesConstraintSet::BonePlane::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBonePlanesConstraintSet::BonePlane") {
		std::cout << "hclBonePlanesConstraintSet::BonePlane::ToInstance: Expecting hclBonePlanesConstraintSet::BonePlane but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("planeEquationBone")->SetValue(planeEquationBone);
	class_instance->GetInstanceByFieldName("particleIndex")->SetValue(particleIndex);
	class_instance->GetInstanceByFieldName("transformIndex")->SetValue(transformIndex);
	class_instance->GetInstanceByFieldName("stiffness")->SetValue(stiffness);
	return true;
}

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBonePlanesConstraintSet::GetTemplateArgs() { return {
}; };

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBonePlanesConstraintSet::BonePlane::GetTemplateArgs() { return {
}; };

