#include "Generated\hkArray.h"

#include "Generated\hkRootLevelContainer.h"
#include "Generated\.h"
#include "Generated\.h"
#include "Generated\.h"
#include "Generated\.h"
#include "Generated\hkaSkeleton.h"
#include "Generated\hkaSkeleton.h"
#include "Generated\.h"
#include "Generated\hclSimClothData.h"
#include "Generated\.h"
#include "Generated\.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclSimClothData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclVirtualCollisionPointsData.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclClothState.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclClothState.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclObjectSpaceDeformer.h"
#include "Generated\hclTransformSetUsage.h"
#include "Generated\hclStretchLinkConstraintSetMx.h"
#include "Generated\hclStretchLinkConstraintSetMx.h"
#include "Generated\hclBonePlanesConstraintSet.h"
#include "Generated\hclMoveParticlesOperator.h"
#include "Generated\hclSimpleMeshBoneDeformOperator.h"
#include "Generated\hclStandardLinkConstraintSetMx.h"
#include "Generated\hclSimulateOperator.h"
#include "Generated\hclStandardLinkConstraintSetMx.h"
#include "Generated\hclBendStiffnessConstraintSetMx.h"
#include "Generated\hclVolumeConstraintMx.h"
#include "Generated\hclVolumeConstraintMx.h"
#include "Generated\hclStateDependencyGraph.h"
#include "Generated\hclLocalRangeConstraintSet.h"
#include "Generated\.h"
#include "Generated\hclBendStiffnessConstraintSetMx.h"
#include "Generated\hclLocalRangeConstraintSet.h"

template<>
bool hktypes::hkArray<hkRootLevelContainer::NamedVariant, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkRootLevelContainer::NamedVariant, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkRootLevelContainer::NamedVariant, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkRootLevelContainer::NamedVariant"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclSimClothData>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclSimClothData>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclSimClothData>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclSimClothData>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclBufferDefinition>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclBufferDefinition>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclBufferDefinition>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclBufferDefinition>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclTransformSetDefinition>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclTransformSetDefinition>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclTransformSetDefinition>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclTransformSetDefinition>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclOperator>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclOperator>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclOperator>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclOperator>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclClothState>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclClothState>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclClothState>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclClothState>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclStateTransition>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclStateTransition>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclStateTransition>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclStateTransition>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclAction>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclAction>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclAction>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclAction>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkInt16, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkInt16, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkInt16, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkInt16"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkaBone, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkaBone, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkaBone, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkaBone"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkQsTransform, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkQsTransform, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkQsTransform, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkQsTransform"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkReal, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkReal, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkReal, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkReal"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkStringPtr, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkStringPtr, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkStringPtr, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkStringPtr"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkaSkeleton::LocalFrameOnBone, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkaSkeleton::LocalFrameOnBone, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkaSkeleton::LocalFrameOnBone, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkaSkeleton::LocalFrameOnBone"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkaSkeleton::Partition, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkaSkeleton::Partition, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkaSkeleton::Partition, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkaSkeleton::Partition"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclSimClothData::ParticleData, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclSimClothData::ParticleData, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclSimClothData::ParticleData, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclSimClothData::ParticleData"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkUint16, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkUint16, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkUint16, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkUint16"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<unsigned int, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<unsigned int, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<unsigned int, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "unsigned int"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclSimClothPose>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclSimClothPose>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclSimClothPose>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclSimClothPose>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclConstraintSet>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclConstraintSet>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclConstraintSet>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclConstraintSet>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<T*<hclCollidable>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<T*<hclCollidable>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<T*<hclCollidable>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "T*<hclCollidable>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkUint32, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkUint32, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkUint32, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkUint32"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkUint8, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkUint8, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkUint8, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkUint8"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkBool, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkBool, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkBool, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkBool"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclSimClothData::CollidablePinchingData, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclSimClothData::CollidablePinchingData, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclSimClothData::CollidablePinchingData, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclSimClothData::CollidablePinchingData"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkMatrix4, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkMatrix4, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkMatrix4, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkMatrix4"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::Block, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::Block, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::Block, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::Block"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::BarycentricDictionaryEntry, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::BarycentricDictionaryEntry, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::BarycentricDictionaryEntry, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::BarycentricDictionaryEntry"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::BarycentricPair, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::BarycentricPair, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::BarycentricPair, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::BarycentricPair"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFanSection, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFanSection, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFanSection, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::EdgeFanSection"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFan, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFan, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFan, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::EdgeFan"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFanSection, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFanSection, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFanSection, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::TriangleFanSection"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFan, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFan, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFan, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::TriangleFan"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFanLandscape, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFanLandscape, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::EdgeFanLandscape, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::EdgeFanLandscape"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFanLandscape, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFanLandscape, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVirtualCollisionPointsData::TriangleFanLandscape, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVirtualCollisionPointsData::TriangleFanLandscape"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::LocalBlockPN, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::LocalBlockPN, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::LocalBlockPN, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::LocalBlockPN"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::LocalBlockUnpackedPN, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::LocalBlockUnpackedPN, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::LocalBlockUnpackedPN, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::LocalBlockUnpackedPN"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclClothState::BufferAccess, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclClothState::BufferAccess, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclClothState::BufferAccess, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclClothState::BufferAccess"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclClothState::TransformSetAccess, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclClothState::TransformSetAccess, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclClothState::TransformSetAccess, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclClothState::TransformSetAccess"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::EightBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::EightBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::EightBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::EightBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::SevenBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::SevenBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::SevenBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::SevenBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::SixBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::SixBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::SixBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::SixBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::FiveBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::FiveBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::FiveBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::FiveBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::FourBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::FourBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::FourBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::FourBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::ThreeBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::ThreeBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::ThreeBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::ThreeBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::TwoBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::TwoBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::TwoBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::TwoBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::OneBlendEntryBlock, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclObjectSpaceDeformer::OneBlendEntryBlock, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclObjectSpaceDeformer::OneBlendEntryBlock, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclObjectSpaceDeformer::OneBlendEntryBlock"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclTransformSetUsage::TransformTracker, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclTransformSetUsage::TransformTracker, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclTransformSetUsage::TransformTracker, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclTransformSetUsage::TransformTracker"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclMoveParticlesOperator::VertexParticlePair, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclMoveParticlesOperator::VertexParticlePair, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclMoveParticlesOperator::VertexParticlePair, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclMoveParticlesOperator::VertexParticlePair"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclSimulateOperator::Config, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclSimulateOperator::Config, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclSimulateOperator::Config, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclSimulateOperator::Config"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkInt32, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkInt32, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkInt32, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkInt32"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclSimpleMeshBoneDeformOperator::TriangleBonePair, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclSimpleMeshBoneDeformOperator::TriangleBonePair, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclSimpleMeshBoneDeformOperator::TriangleBonePair, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclSimpleMeshBoneDeformOperator::TriangleBonePair"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkVector4, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkVector4, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkVector4, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkVector4"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclStandardLinkConstraintSetMx::Batch, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclStandardLinkConstraintSetMx::Batch, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclStandardLinkConstraintSetMx::Batch, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclStandardLinkConstraintSetMx::Batch"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclStandardLinkConstraintSetMx::Single, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclStandardLinkConstraintSetMx::Single, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclStandardLinkConstraintSetMx::Single, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclStandardLinkConstraintSetMx::Single"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclStretchLinkConstraintSetMx::Batch, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclStretchLinkConstraintSetMx::Batch, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclStretchLinkConstraintSetMx::Batch, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclStretchLinkConstraintSetMx::Batch"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclStretchLinkConstraintSetMx::Single, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclStretchLinkConstraintSetMx::Single, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclStretchLinkConstraintSetMx::Single, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclStretchLinkConstraintSetMx::Single"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclBonePlanesConstraintSet::BonePlane, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclBonePlanesConstraintSet::BonePlane, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclBonePlanesConstraintSet::BonePlane, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclBonePlanesConstraintSet::BonePlane"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclBendStiffnessConstraintSetMx::Batch, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclBendStiffnessConstraintSetMx::Batch, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclBendStiffnessConstraintSetMx::Batch, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclBendStiffnessConstraintSetMx::Batch"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclBendStiffnessConstraintSetMx::Single, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclBendStiffnessConstraintSetMx::Single, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclBendStiffnessConstraintSetMx::Single, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclBendStiffnessConstraintSetMx::Single"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclLocalRangeConstraintSet::LocalConstraint, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclLocalRangeConstraintSet::LocalConstraint, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclLocalRangeConstraintSet::LocalConstraint, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclLocalRangeConstraintSet::LocalConstraint"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclLocalRangeConstraintSet::LocalStiffnessConstraint, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclLocalRangeConstraintSet::LocalStiffnessConstraint, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclLocalRangeConstraintSet::LocalStiffnessConstraint, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclLocalRangeConstraintSet::LocalStiffnessConstraint"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVolumeConstraintMx::FrameBatchData, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVolumeConstraintMx::FrameBatchData, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVolumeConstraintMx::FrameBatchData, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVolumeConstraintMx::FrameBatchData"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclVolumeConstraintMx::ApplyBatchData, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclVolumeConstraintMx::ApplyBatchData, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclVolumeConstraintMx::ApplyBatchData, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclVolumeConstraintMx::ApplyBatchData"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hclStateDependencyGraph::Branch, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hclStateDependencyGraph::Branch, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hclStateDependencyGraph::Branch, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hclStateDependencyGraph::Branch"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<int, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<int, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<int, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "int"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

template<>
bool hktypes::hkArray<hkArray<int, hkContainerHeapAllocator>, hkContainerHeapAllocator>::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::FromInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->GetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->GetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->GetValue(m_capacityAndFlags);
	return true;
}

template<>
bool hktypes::hkArray<hkArray<int, hkContainerHeapAllocator>, hkContainerHeapAllocator>::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassArrayInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hkArray::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hkArray") {
		std::cout << "hkArray::ToInstance: Expecting hkArray but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	class_instance->GetInstanceByFieldName("m_data")->SetValue(m_data);
	class_instance->GetInstanceByFieldName("m_size")->SetValue(m_size);
	class_instance->GetInstanceByFieldName("m_capacityAndFlags")->SetValue(m_capacityAndFlags);
	return true;
}

template<>
inline std::vector<std::pair<std::string, std::string>> hktypes::hkArray<hkArray<int, hkContainerHeapAllocator>, hkContainerHeapAllocator>::GetTemplateArgs() { return {
	{"tT", "hkArray<int, hkContainerHeapAllocator>"},
	{"tAllocator", "hkContainerHeapAllocator"},
}; };

