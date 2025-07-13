#pragma once
#include "hkInclude.h"
#include "hkTypes.h"

namespace hktypes {
	class hkHolderBase;
	class hkReferencedObject;
	class hkVector4Holder;

	class hclShape : public hkReferencedObject {
	public:
		using BaseType = hkReferencedObject;
		int type;	// Offset: 24 Unk: 0

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() { return "hclShape"; };
		inline std::string GetTranscriptId() { return "hclShape"; };
		inline uint32_t GethkClassHash() { return 0; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() {
			return {
				{ "type", "int" },
			};
		};

		virtual hclBufferedMeshObj ToVisualizeMeshObj() = 0;
	};

	class hclCapsuleShape : public hclShape {
	public:
		using BaseType = hclShape;
		hkVector4Holder start;	// Offset: 32 Unk: 0
		hkVector4Holder end;	// Offset: 48 Unk: 0
		hkVector4Holder dir;	// Offset: 64 Unk: 0 (end - start).normalized()
		float radius;	// Offset: 80 Unk: 0
		float capLenSqrdInv;	// Offset: 84 Unk: 0  1.0f / (end - start).dot(end - start)

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() { return "hclCapsuleShape"; };
		inline std::string GetTranscriptId() { return "hclCapsuleShape"; };
		inline uint32_t GethkClassHash() { return 2819961333; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() {
			return {
				{ "start", "hkVector4" },
				{ "end", "hkVector4" },
				{ "dir", "hkVector4" },
				{ "radius", "hkReal" },
				{ "capLenSqrdInv", "hkReal" },
			};
		};

		hclBufferedMeshObj ToVisualizeMeshObj() override;

		void FromParameters(const std::array<float,3> a_start, const std::array<float,3> a_end, const float a_radius);
	};

	class hclTaperedCapsuleShape : public hclShape {
	public:
		hkVector4Holder m_small; // Offset: 32 // Given
		hkVector4Holder big; // Offset: 48 // Given
		hkVector4Holder coneApex; // Offset: 64 // 0. k * (big - small) + small, k = R_small / (R_small - R_big)
		hkVector4Holder coneAxis; // Offset: 80 // 1. (big - small).normalized()
		hkVector4Holder lVec; // Offset: 96 // 4. [l] * 4
		hkVector4Holder dVec; // Offset: 112 // 5. [d] * 4
		hkVector4Holder tanThetaVecNeg; // Offset: 128 // 10. [-tanTheta] * 4
		float smallRadius; // Offset: 144 // Given
		float bigRadius; // Offset: 148 // Given
		float l; // Offset: 152 // 2. (big - small).norm()
		float d; // Offset: 156 // 3. (coneApex - small).norm()
		float cosTheta; // Offset: 160 // 7. sqrt(1 - sinTheta^2)
		float sinTheta; // Offset: 164 // 6. R_small / d
		float tanTheta; // Offset: 168 // 8. sinTheta / cosTheta
		float tanThetaSqr; // Offset: 172 // 9. tanTheta^2

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() { return "hclTaperedCapsuleShape"; };
		inline std::string GetTranscriptId() { return "hclTaperedCapsuleShape"; };
		inline uint32_t GethkClassHash() { return 4196181205; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() {
			return {
				{ "small", "hkVector4" },
				{ "big", "hkVector4" },
				{ "coneApex", "hkVector4" },
				{ "coneAxis", "hkVector4" },
				{ "lVec", "hkVector4" },
				{ "dVec", "hkVector4" },
				{ "tanThetaVecNeg", "hkVector4" },
				{ "smallRadius", "hkReal" },
				{ "bigRadius", "hkReal" },
				{ "l", "hkReal" },
				{ "d", "hkReal" },
				{ "cosTheta", "hkReal" },
				{ "sinTheta", "hkReal" },
				{ "tanTheta", "hkReal" },
				{ "tanThetaSqr", "hkReal" },
			};
		};

		hclBufferedMeshObj ToVisualizeMeshObj() override;

		void FromParameters(const std::array<float,3> a_small, const std::array<float,3> a_big, const float a_smallRadius, const float a_bigRadius);
	};

	// convexhull

	class hkAabb : public hkReferencedObject {
	public:
		using BaseType = hkReferencedObject; // I still think it's a hkReferencedObject?

		//int type;	// Offset: 24 Unk: 0 need this??

		/// The minimum boundary of the AABB (i.e., the coordinates of the corner with the lowest numerical values).
		hkVector4Holder m_min;

		/// The maximum boundary of the AABB (i.e., the coordinates of the corner with the highest numerical values).
		hkVector4Holder m_max;

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance);// override; hkAabb doesn't inherit from some other class
		bool ToInstance(hkreflex::hkClassInstance* instance);// override;
		inline std::string GethkClassName() { return "hkAabb"; };
		inline std::string GetTranscriptId() { return "hkAabb"; };
		inline uint32_t GethkClassHash() { return 0; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() {
			return {
				{ "min", "hkVector4" },
				{ "max", "hkVector4" },
			};
		};
	};

	class hclConvexGeometryShape : public hclShape {
	public:
		std::vector<uint16_t> m_tetrahedraGrid;	// Offset: 32 Unk: 0
		std::vector<uint8_t> gridCells;	// Offset: 48 Unk: 0
		std::vector<hkMatrix4Holder> tetrahedraEquations;	// Offset: 64 Unk: 0
		hkTransform localFromWorld;	// Offset: 80 Unk: 0
		hkTransform worldFromLocal;	// Offset: 144 Unk: 0
		hkAabb objAabb;	// Offset: 208 Unk: 4
		hkVector4Holder geomCentroid;	// Offset: 240 Unk: 0
		hkVector4Holder invCellSize;	// Offset: 256 Unk: 0
		hkUint16 gridRes;	// Offset: 272 Unk: 0

		// Extra
		bool FromInstance(const hkreflex::hkClassInstance* instance) override;
		bool ToInstance(hkreflex::hkClassInstance* instance) override;
		inline std::string GethkClassName() { return "hclConvexGeometryShape"; };
		inline std::string GetTranscriptId() { return "hclConvexGeometryShape"; };
		inline uint32_t GethkClassHash() { return 4196181205; };
		inline std::vector<std::pair<std::string, std::string>> GethkClassMembers() {
			return {
				{ "tetrahedraGrid", "hkArray<hkUint16, hkContainerHeapAllocator>" },
				{ "gridCells", "hkArray<hkUint8, hkContainerHeapAllocator>" },
				{ "tetrahedraEquations", "hkArray<hkMatrix4, hkContainerHeapAllocator>" },
				{ "localFromWorld", "hkTransform" },
				{ "worldFromLocal", "hkTransform" },
				{ "objAabb", "hkAabb" },
				{ "geomCentroid", "hkVector4" },
				{ "invCellSize", "hkVector4" },
				{ "gridRes", "hkUint16" },
			};
		};

		hclBufferedMeshObj ToVisualizeMeshObj() override;

		//void FromParameters(const std::array<float, 3> a_small, const std::array<float, 3> a_big, const float a_smallRadius, const float a_bigRadius);
	};
}