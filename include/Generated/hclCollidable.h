#pragma once
#include "hkInclude.h"


namespace hktypes{
	class hkStringPtr;
	class hkReferencedObject;
	class hkBool;
	class hkVector4;
	class hkTransform;
	class hclShape;
	class hkArray;

	class hclCollidable : public hkReferencedObject {
	public:
		using BaseType = hkReferencedObject;
		hkTransform transform; // Offset: 32
		hkVector4 linearVelocity; // Offset: 96
		hkVector4 angularVelocity; // Offset: 112
		hkUint64 userData; // Offset: 128
		T*<hclShape> shape; // Offset: 136
		hkStringPtr name; // Offset: 144
		hkReal pinchDetectionRadius; // Offset: 152
		hkInt8 pinchDetectionPriority; // Offset: 156
		hkBool pinchDetectionEnabled; // Offset: 157
		hkBool virtualCollisionPointCollisionEnabled; // Offset: 158
		hkBool enabled; // Offset: 159

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() override { return "hclCollidable"; };
		inline std::string GetTranscriptId() override { return "hclCollidable"; };
		inline uint32_t GethkClassHash() override { return 93767303; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() override {
			return {
				{ "transform", "hkTransform" },
				{ "linearVelocity", "hkVector4" },
				{ "angularVelocity", "hkVector4" },
				{ "userData", "hkUint64" },
				{ "shape", "T*<hclShape>" },
				{ "name", "hkStringPtr" },
				{ "pinchDetectionRadius", "hkReal" },
				{ "pinchDetectionPriority", "hkInt8" },
				{ "pinchDetectionEnabled", "hkBool" },
				{ "virtualCollisionPointCollisionEnabled", "hkBool" },
				{ "enabled", "hkBool" },
			};
		};
		inline std::vector<std::pair<std::string, std::string>> GetTemplateArgs();
	};

	// hclConvexGeometryShape
	/*
	* TODO
	class hkAabb {
		public:
			hkVector4 min;	// Offset: 0 Unk: 0
			hkVector4 max;	// Offset: 16 Unk: 0

			// Extra
			bool FromInstance(const hkreflex::hkClassInstance* instance) override;
			bool ToInstance(hkreflex::hkClassInstance* instance) override;
			inline std::string GethkClassName() override { return "hclCollidable"; };
			inline std::string GetTranscriptId() override { return "hclCollidable"; };
			inline uint32_t GethkClassHash() override { return 93767303; };
			inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() override {
				return {
					{ "min", "hkVector4" },
					{ "max", "hkVector4" },
				};
			};
			inline std::vector<std::pair<std::string, std::string>> GetTemplateArgs();
	};
	*/

	class hclConvexGeometryShape : public hkReferencedObject {
	public:
		using BaseType = hkReferencedObject;
		hkArray tetrahedraGrid;	// Offset: 32 Unk: 0
		hkArray gridCells;	// Offset: 48 Unk: 0
		hkArray tetrahedraEquations;	// Offset: 64 Unk: 0
		hkTransform localFromWorld;	// Offset: 80 Unk: 0
		hkTransform worldFromLocal;	// Offset: 144 Unk: 0
		hkAabb objAabb;	// Offset: 208 Unk: 4
		hkVector4 geomCentroid;	// Offset: 240 Unk: 0
		hkVector4 invCellSize;	// Offset: 256 Unk: 0
		hkUint16 gridRes;	// Offset: 272 Unk: 0

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() override { return "hclConvexGeometryShape"; };
		inline std::string GetTranscriptId() override { return "hclConvexGeometryShape"; };
		inline uint32_t GethkClassHash() override { return 93767303; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() override {
			return {
				{ "tetrahedraGrid", "hkArray" },
				{ "gridCells", "hkArray" },
				{ "tetrahedraEquations", "hkArray" },
				{ "localFromWorld", "hkTransform" },
				{ "worldFromLocal", "hkTransform" },
				{ "objAabb", "hkAabb" },
				{ "geomCentroid", "hkVector4" },
				{ "invCellSize", "hkVector4" },
				{ "gridRes", "hkUint16" },
			};
		};
		inline std::vector<std::pair<std::string, std::string>> GetTemplateArgs();
	};



	//


}
