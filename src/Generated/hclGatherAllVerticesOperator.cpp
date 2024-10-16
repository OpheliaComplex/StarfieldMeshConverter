#include "Generated\hclGatherAllVerticesOperator.h"

#include "Generated\.h"
#include "Generated\.h"
#include "Generated\.h"

bool hktypes::hclGatherAllVerticesOperator::FromInstance(const hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<const hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclGatherAllVerticesOperator::FromInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclGatherAllVerticesOperator") {
		std::cout << "hclGatherAllVerticesOperator::FromInstance: Expecting hclGatherAllVerticesOperator but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	hclOperator::FromInstance(class_instance->GetInstanceByFieldName("class_parent"));
	class_instance->GetInstanceByFieldName("vertexInputFromVertexOutput")->GetValue(vertexInputFromVertexOutput);
	class_instance->GetInstanceByFieldName("inputBufferIdx")->GetValue(inputBufferIdx);
	class_instance->GetInstanceByFieldName("outputBufferIdx")->GetValue(outputBufferIdx);
	class_instance->GetInstanceByFieldName("gatherNormals")->GetValue(gatherNormals);
	class_instance->GetInstanceByFieldName("partialGather")->GetValue(partialGather);
	return true;
}

bool hktypes::hclGatherAllVerticesOperator::ToInstance(hkreflex::hkClassInstance* instance) {
	auto class_instance = dynamic_cast<hkreflex::hkClassRecordInstance*>(instance);

#ifndef NO_HK_TYPENAME_CHECK
	if (!class_instance) {
		std::cout << "hclGatherAllVerticesOperator::ToInstance: hkClassRecordInstance is nullptr!" << std::endl;
		throw;
	}
	if (class_instance->type->type_name != "hclGatherAllVerticesOperator") {
		std::cout << "hclGatherAllVerticesOperator::ToInstance: Expecting hclGatherAllVerticesOperator but got " << class_instance->type->type_name << std::endl;
		return false;
	}
#endif // NO_HK_TYPENAME_CHECK

	hclOperator::ToInstance(class_instance->GetInstanceByFieldName("class_parent"));
	class_instance->GetInstanceByFieldName("vertexInputFromVertexOutput")->SetValue(vertexInputFromVertexOutput);
	class_instance->GetInstanceByFieldName("inputBufferIdx")->SetValue(inputBufferIdx);
	class_instance->GetInstanceByFieldName("outputBufferIdx")->SetValue(outputBufferIdx);
	class_instance->GetInstanceByFieldName("gatherNormals")->SetValue(gatherNormals);
	class_instance->GetInstanceByFieldName("partialGather")->SetValue(partialGather);
	return true;
}

inline std::vector<std::pair<std::string, std::string>> hktypes::hclGatherAllVerticesOperator::GetTemplateArgs() { return {
}; };

