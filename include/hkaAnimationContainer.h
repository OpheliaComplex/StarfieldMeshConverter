#pragma once
#include "hkInclude.h"
#include "hkTypes.h"
#include "hkaSkeleton.h"


namespace hktypes{

	class hkaAnimationContainer : public hkReferencedObject {
	public:
		using BaseType = hkReferencedObject;
		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() override { return "hkaAnimationContainer"; };
		inline std::string GetTranscriptId() override { return "hkaAnimationContainer"; };
		inline uint32_t GethkClassHash() override { return 0; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() override {
			return {
				{ "skeletons", "hkArray<hkaSkeleton, hkContainerHeapAllocator>" },
				{ "animations", "hkArray<hkaAnimation>, hkContainerHeapAllocator>" },
				{ "bindings", "hkArray<hkaAnimationBinding>, hkContainerHeapAllocator>" },
				{ "attachments", "hkArray<hkaBoneAttachment>, hkContainerHeapAllocator>" },
				{ "skins", "hkArray<hkaMeshBinding>, hkContainerHeapAllocator>" },
			};
		};
		inline std::vector<std::pair<std::string, std::string>> GetTemplateArgs();
	
		std::vector<hkaSkeleton*> skeletons;
		//hkArray<T*<hkaSkeleton>, hkContainerHeapAllocator> skeletons; // Offset: 24 Unk: 0

		std::vector<int> animations;
		//hkArray<hkUint16, hkContainerHeapAllocator> animations; // Offset: 40 Unk: 0

		std::vector<int> bindings;
		//hkArray<hkUint16, hkContainerHeapAllocator> bindings;	// Offset: 56 Unk: 0

		std::vector<int> attachments;
		//hkArray<hkUint16, hkContainerHeapAllocator> attachments;	// Offset: 72 Unk: 0

		std::vector<int> skins;
		//hkArray<hkUint16, hkContainerHeapAllocator> skins;	// Offset: 88 Unk: 0


		hkReferencedObject* GetSkeletonRef(std::string type_name, std::string instance_name = "");
	};
}