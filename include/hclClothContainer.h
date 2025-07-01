#pragma once
#include "hkInclude.h"
#include "hkTypes.h"
#include "hclSimClothData.h"
#include "hclClothData.h"

namespace hktypes{

	class hclClothContainer : public hkReferencedObject {
	public:
		using BaseType = hkReferencedObject;
		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() override { return "hclClothContainer"; };
		inline std::string GetTranscriptId() override { return "hclClothContainer"; };
		inline uint32_t GethkClassHash() override { return 0; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() override {
			return {
				{ "clothDatas", "hkArray<hclClothData, hkContainerHeapAllocator>" },
				{ "collidables", "hkArray<hclCollidable, hkContainerHeapAllocator>" },
			};
		};
		inline std::vector<std::pair<std::string, std::string>> GetTemplateArgs();

		std::vector<hclClothData*> clothDatas;
		//hkArray<T*<hclClothData>, hkContainerHeapAllocator> clothDatas; // Offset: 40 Unk: 0

		std::vector<hclCollidable*> collidables;
		//hkArray<T*<hclCollidable>, hkContainerHeapAllocator> collidables; // Offset: 24 Unk: 0

	};
}