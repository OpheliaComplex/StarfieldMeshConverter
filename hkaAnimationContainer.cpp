#include "hkaAnimationContainer.h"


bool hktypes::hkaAnimationContainer::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkaAnimationContainer") {
		std::cout << "hkaAnimationContainer::FromInstance: type_name is not hkaAnimationContainer" << std::endl;
		return false;
	}
	// Load from hkx binary
	auto _skeletons = class_instance->GetArrayOfPointersByFieldName<hkaSkeleton>("skeletons");
	this->skeletons = _skeletons;

	return true;
}

bool hktypes::hkaAnimationContainer::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hkaAnimationContainer") {
		std::cout << "hkaAnimationContainer::FromInstance: type_name is not hkaAnimationContainer" << std::endl;
		return false;
	}

	// set output hkx to std::vector<*hkaskeleton> skeletons of hkaanimationcontainer
	class_instance->GetInstanceByFieldName("skeletons")->SetValue(this->skeletons);

	return true;
}
