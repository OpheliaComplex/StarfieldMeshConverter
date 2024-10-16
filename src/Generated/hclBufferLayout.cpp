#include "Generated\hclBufferLayout.h"

#include "Generated\.h"
#include "Generated\.h"
#include "Generated\.h"

bool hktypes::hclBufferLayout::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout") {
		std::cout << "hclBufferLayout::FromInstance: Expecting hclBufferLayout but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("elementsLayout")->GetValue(elementsLayout);
	class_instance->GetInstanceByFieldName("slots")->GetValue(slots);
	class_instance->GetInstanceByFieldName("numSlots")->GetValue(numSlots);
	class_instance->GetInstanceByFieldName("triangleFormat")->GetValue(triangleFormat);
	return true;
}

bool hktypes::hclBufferLayout::BufferElement::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::BufferElement::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::BufferElement") {
		std::cout << "hclBufferLayout::BufferElement::FromInstance: Expecting hclBufferLayout::BufferElement but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("vectorConversion")->GetValue(vectorConversion);
	class_instance->GetInstanceByFieldName("vectorSize")->GetValue(vectorSize);
	class_instance->GetInstanceByFieldName("slotId")->GetValue(slotId);
	class_instance->GetInstanceByFieldName("slotStart")->GetValue(slotStart);
	return true;
}

bool hktypes::hclBufferLayout::Slot::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::Slot::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::Slot") {
		std::cout << "hclBufferLayout::Slot::FromInstance: Expecting hclBufferLayout::Slot but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("flags")->GetValue(flags);
	class_instance->GetInstanceByFieldName("stride")->GetValue(stride);
	return true;
}

bool hktypes::hclBufferLayout::TriangleFormat::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::TriangleFormat::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::TriangleFormat") {
		std::cout << "hclBufferLayout::TriangleFormat::FromInstance: Expecting hclBufferLayout::TriangleFormat but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	return true;
}

bool hktypes::hclBufferLayout::SlotFlags::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::SlotFlags::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::SlotFlags") {
		std::cout << "hclBufferLayout::SlotFlags::FromInstance: Expecting hclBufferLayout::SlotFlags but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	return true;
}

bool hktypes::hclBufferLayout::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout") {
		std::cout << "hclBufferLayout::ToInstance: Expecting hclBufferLayout but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("elementsLayout")->SetValue(elementsLayout);
	class_instance->GetInstanceByFieldName("slots")->SetValue(slots);
	class_instance->GetInstanceByFieldName("numSlots")->SetValue(numSlots);
	class_instance->GetInstanceByFieldName("triangleFormat")->SetValue(triangleFormat);
	return true;
}

bool hktypes::hclBufferLayout::BufferElement::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::BufferElement::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::BufferElement") {
		std::cout << "hclBufferLayout::BufferElement::ToInstance: Expecting hclBufferLayout::BufferElement but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("vectorConversion")->SetValue(vectorConversion);
	class_instance->GetInstanceByFieldName("vectorSize")->SetValue(vectorSize);
	class_instance->GetInstanceByFieldName("slotId")->SetValue(slotId);
	class_instance->GetInstanceByFieldName("slotStart")->SetValue(slotStart);
	return true;
}

bool hktypes::hclBufferLayout::Slot::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::Slot::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::Slot") {
		std::cout << "hclBufferLayout::Slot::ToInstance: Expecting hclBufferLayout::Slot but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("flags")->SetValue(flags);
	class_instance->GetInstanceByFieldName("stride")->SetValue(stride);
	return true;
}

bool hktypes::hclBufferLayout::TriangleFormat::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::TriangleFormat::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::TriangleFormat") {
		std::cout << "hclBufferLayout::TriangleFormat::ToInstance: Expecting hclBufferLayout::TriangleFormat but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	return true;
}

bool hktypes::hclBufferLayout::SlotFlags::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclBufferLayout::SlotFlags::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclBufferLayout::SlotFlags") {
		std::cout << "hclBufferLayout::SlotFlags::ToInstance: Expecting hclBufferLayout::SlotFlags but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	return true;
}

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBufferLayout::GetTemplateArgs() { return {
}; };

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBufferLayout::BufferElement::GetTemplateArgs() { return {
}; };

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBufferLayout::Slot::GetTemplateArgs() { return {
}; };

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBufferLayout::TriangleFormat::GetTemplateArgs() { return {
}; };

inline std::vector<std::pair<std::string, std::string>> hktypes::hclBufferLayout::SlotFlags::GetTemplateArgs() { return {
}; };

