#include "hclClothContainer.h"


bool hktypes::hclClothContainer::FromInstance(const hkreflex::hkClassInstance* instance)
{
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);
	if (class_instance->type->type_name != "hclClothContainer") {
		std::cout << "hclClothContainer::FromInstance: type_name is not hclClothContainer" << std::endl;
		return false;
	}

	this->hclCollidable = class_instance->GetArrayOfPointersByFieldName<hclCollidable>("collidables");
	this->hclClothDatas = class_instance->GetArrayOfPointersByFieldName<hclClothData>("clothDatas");

	return true;
}