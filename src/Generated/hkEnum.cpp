#include "Generated\hkEnum.h"

#include "Generated\hclClothData.h"
#include "Generated\hclBufferLayout.h"
#include "Generated\hclRuntimeConversionInfo.h"
#include "Generated\hclBufferLayout.h"
#include "Generated\hclLocalRangeConstraintSet.h"

template<>
bool hktypes::hkEnum<hclClothData::Platform, hkUint32>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::FromInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->GetValue(storage);
	return true;
}

template<>
bool hktypes::hkEnum<hclClothData::Platform, hkUint32>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::ToInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->SetValue(storage);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkEnum<hclClothData::Platform, hkUint32>::GetTemplateArgs() { return {
	{"tENUM", "hclClothData::Platform"},
	{"tSTORAGE", "hkUint32"},
}; };

template<>
bool hktypes::hkEnum<hclBufferLayout::TriangleFormat, hkUint8>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::FromInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->GetValue(storage);
	return true;
}

template<>
bool hktypes::hkEnum<hclBufferLayout::TriangleFormat, hkUint8>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::ToInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->SetValue(storage);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkEnum<hclBufferLayout::TriangleFormat, hkUint8>::GetTemplateArgs() { return {
	{"tENUM", "hclBufferLayout::TriangleFormat"},
	{"tSTORAGE", "hkUint8"},
}; };

template<>
bool hktypes::hkEnum<hclRuntimeConversionInfo::VectorConversion, hkUint8>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::FromInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->GetValue(storage);
	return true;
}

template<>
bool hktypes::hkEnum<hclRuntimeConversionInfo::VectorConversion, hkUint8>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::ToInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->SetValue(storage);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkEnum<hclRuntimeConversionInfo::VectorConversion, hkUint8>::GetTemplateArgs() { return {
	{"tENUM", "hclRuntimeConversionInfo::VectorConversion"},
	{"tSTORAGE", "hkUint8"},
}; };

template<>
bool hktypes::hkEnum<hclBufferLayout::SlotFlags, hkUint8>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::FromInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->GetValue(storage);
	return true;
}

template<>
bool hktypes::hkEnum<hclBufferLayout::SlotFlags, hkUint8>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::ToInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->SetValue(storage);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkEnum<hclBufferLayout::SlotFlags, hkUint8>::GetTemplateArgs() { return {
	{"tENUM", "hclBufferLayout::SlotFlags"},
	{"tSTORAGE", "hkUint8"},
}; };

template<>
bool hktypes::hkEnum<hclLocalRangeConstraintSet::ShapeType, hkUint32>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::FromInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->GetValue(storage);
	return true;
}

template<>
bool hktypes::hkEnum<hclLocalRangeConstraintSet::ShapeType, hkUint32>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkEnum::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkEnum") {
		std::cout << "hkEnum::ToInstance: Expecting hkEnum but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("storage")->SetValue(storage);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkEnum<hclLocalRangeConstraintSet::ShapeType, hkUint32>::GetTemplateArgs() { return {
	{"tENUM", "hclLocalRangeConstraintSet::ShapeType"},
	{"tSTORAGE", "hkUint32"},
}; };

