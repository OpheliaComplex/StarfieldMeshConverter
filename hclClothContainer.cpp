#include "hclClothContainer.h"


bool hktypes::hclClothContainer::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hclClothContainer") {
		std::cout << "hclClothContainer::FromInstance: type_name is not hclClothContainer" << std::endl;
		return false;
	}
	// Load from hkx binary
	auto _collidables = class_instance->GetArrayOfPointersByFieldName<hclCollidable>("collidables");
	this->collidables = _collidables;

	auto _clothDatas = class_instance->GetArrayOfPointersByFieldName<hclClothData>("clothDatas");
	this->clothDatas = _clothDatas;

	std::cout << "hclClothContainer::FromInstance initialization done" << std::endl;
	return true;
}

bool hktypes::hclClothContainer::ToInstance(hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hclClothContainer") {
		std::cout << "hclClothContainer::FromInstance: type_name is not hclClothContainer" << std::endl;
		return false;
	}

	// set output 
	class_instance->GetInstanceByFieldName("collidables")->SetValue(this->collidables);
	class_instance->GetInstanceByFieldName("clothDatas")->SetValue(this->clothDatas);

	return true;
}
