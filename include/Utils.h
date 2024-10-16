#pragma once
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <map>
#include <functional>

namespace utils {
	template<typename T>
	concept _base_type_t = std::is_same_v<T, uint8_t> || std::is_same_v<T, uint16_t> || std::is_same_v<T, uint32_t> || std::is_same_v<T, uint64_t> || std::is_same_v<T, int8_t> || std::is_same_v<T, int16_t> || std::is_same_v<T, int32_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, float> || std::is_same_v<T, double>;

	template<typename T>
	concept _signed_integer_t = std::is_same_v<T, int8_t> || std::is_same_v<T, int16_t> || std::is_same_v<T, int32_t> || std::is_same_v<T, int64_t>;

	template<typename T>
	concept _unsigned_integer_t = std::is_same_v<T, uint8_t> || std::is_same_v<T, uint16_t> || std::is_same_v<T, uint32_t> || std::is_same_v<T, uint64_t>;

	template<typename T>
	concept _is_integer_t = _signed_integer_t<T> || _unsigned_integer_t<T>;

	template<typename T>
	concept _is_float_t = std::is_same_v<T, float> || std::is_same_v<T, double>;

	template<typename T>
	concept _is_bool_t = std::is_same_v<T, bool>;

	template<typename T>
	concept _is_string_t = std::is_same_v<T, std::string>;

	template<typename T, typename Elem_T = std::remove_reference_t<T>::value_type>
	concept _is_vector_t = std::is_same_v<T, std::vector<Elem_T>> && (_is_integer_t<Elem_T> || _is_float_t<Elem_T> || _is_bool_t<Elem_T> || _is_string_t<Elem_T>);

	template<typename T, typename Elem_T = std::remove_reference_t<T>::value_type>
	concept _is_array_t = std::is_array_v<T> && (_is_integer_t<Elem_T> || _is_float_t<Elem_T> || _is_bool_t<Elem_T> || _is_string_t<Elem_T>);

	template<class _Ty, size_t _Size>
	std::array<_Ty, _Size> make_array(_Ty(&cArray)[_Size]) {
		std::array<_Ty, _Size> stdArray;
		std::copy(std::begin(cArray), std::end(cArray), stdArray.begin());
		return stdArray;
	}

	template<class _base_t, class _elem_t>
	std::vector<_base_t> cast_vector(const std::vector<_elem_t>& vec) {
		std::vector<_base_t> result;
		result.reserve(vec.size());
		for (const _elem_t& elem : vec) {
			result.push_back(static_cast<_base_t>(elem));
		}
		return result;
	}

	template<class _base_t, class _elem_t>
	requires std::is_pointer_v<_base_t> && (!std::is_pointer_v<_elem_t>) && std::is_base_of<std::remove_pointer_t<_base_t>, _elem_t>::value
	std::vector<_base_t> make_references(const std::vector<_elem_t>& vec) {
		std::vector<_base_t> result;
		result.reserve(vec.size());
		for (const _elem_t& elem : vec) {
			result.push_back((_base_t)&elem);
		}
		return result;
	}

	template<class _elem_t>
	void stack_elems(std::vector<_elem_t>& from, std::vector<_elem_t>& to, size_t num_elems) {
		if (num_elems > from.size()) {
			std::copy(from.begin(), from.end(), std::back_inserter(to));
			from.clear();
		}
		else {
			std::copy(from.begin(), from.begin() + num_elems, std::back_inserter(to));
			from.erase(from.begin(), from.begin() + num_elems);
		}
	}

	template<class _elem_t>
	void stack_elems_const(const std::vector<_elem_t>& from, std::vector<_elem_t>& to, size_t num_elems) {
		if (num_elems > from.size()) {
			std::copy(from.begin(), from.end(), std::back_inserter(to));
		}
		else {
			std::copy(from.begin(), from.begin() + num_elems, std::back_inserter(to));
		}
	}

	template<class _elem_t>
	std::vector<std::vector<_elem_t>> split_vector(const std::vector<_elem_t>& vec, size_t num_elems) {
		std::vector<std::vector<_elem_t>> result;
		std::vector<_elem_t> _vec = vec;
		result.reserve(_vec.size() / num_elems);
		while (!_vec.empty()) {
			result.push_back(std::vector<_elem_t>());
			stack_elems(_vec, result.back(), num_elems);
		}
		return result;
	}


	template<class _elem_t>
	void _combinations_helper(const std::vector<_elem_t>& vec, size_t num_elems, size_t start, std::vector<_elem_t>& current_combination, std::vector<std::vector<_elem_t>>& result) {
		if (num_elems == 0) {
			result.push_back(current_combination);
			return;
		}

		for (size_t i = start; i <= vec.size() - num_elems; ++i) {
			current_combination.push_back(vec[i]);
			_combinations_helper(vec, num_elems - 1, i + 1, current_combination, result);
			current_combination.pop_back();
		}
	}

	template<class _elem_t>
	std::vector<std::vector<_elem_t>> combinations(const std::vector<_elem_t>& vec, size_t num_elems) {
		std::vector<std::vector<_elem_t>> result;
		std::vector<_elem_t> current_combination;

		_combinations_helper(vec, num_elems, 0, current_combination, result);

		return result;
	}

	template<class _result_t, class _elem_t>
	std::vector<_result_t> group_and_calc(const std::vector<_elem_t>& vec, std::function<bool(const _elem_t&, const _elem_t&)> group_func, std::function<_result_t(const std::vector<_elem_t>&)> calc_func) {
		std::vector<_result_t> result;
		size_t num_elems = vec.size();
		int* group_ids = new int[num_elems];
		std::memset(group_ids, -1, num_elems * sizeof(int));
		for (size_t i = 0; i < num_elems; ++i) {
			if (group_ids[i] == -1) {
				std::vector<_elem_t> group_elems;
				group_elems.push_back(vec[i]);
				group_ids[i] = result.size();
				for (size_t j = i; j < num_elems; ++j) {
					if (group_func(vec[i], vec[j])) {
						group_ids[j] = group_ids[i];
						group_elems.push_back(vec[j]);
					}
				}
				result.push_back(calc_func(group_elems));
			}
		}
		return result;
	}

	const wchar_t* charToWchar(const char* c);

	size_t getFilePaths(std::string _dir, std::vector<std::string>& _output, std::string extension);

	template<typename T>
	inline T switchEndian(const T& value) {
		T result = value;
		char* src = reinterpret_cast<char*>(&const_cast<T&>(value));
		char* dst = reinterpret_cast<char*>(&result) + sizeof(T) - 1;
		for (size_t i = 0; i < sizeof(T); ++i) {
			*dst-- = *src++;
		}
		return result;
	}

	const char* make_copy(std::string str);

	// Credit goes to fo76utils. Original code: https://pastebin.com/e3TL3Q2m
	uint32_t encodeCRC32(const std::string& str);

	std::vector<float> decodeDEC3N_CHECK(uint32_t n, uint8_t _check_w);

	std::vector<float> decodeDEC3N(uint32_t n);

	std::vector<float> decodeDEC3N_w(uint32_t n, float& w);

	std::uint32_t encodeDEC3N(const std::vector<float>& values, float w);

	std::uint32_t encodeDEC3N(const std::vector<float>& values, float w);

	std::uint16_t encodeRGB565(uint8_t r, uint8_t g, uint8_t b);

	void decodeRGB565(uint16_t rgb565, uint8_t& r, uint8_t& g, uint8_t& b);

	float halfToFloat(uint16_t halfFloat);

	uint16_t floatToHalf(float fullFloat);

	std::vector<double> snorm_to_double(const std::vector<int16_t>& v, double s);

	double snorm_to_double(const int16_t p, double s);

	int16_t double_to_snorm(double value, double max_border);

	template<typename T>
	void writeAsHex(std::ostream& file, T&& (value), bool big_endian = false) {
		T _v = value;
		if (big_endian) {
			_v = switchEndian(value);
		}
		file.write(reinterpret_cast<const char*>(&_v), sizeof(value));
	}

	template<typename T>
	void writeToBuffer(uint8_t* buffer, size_t& offset, T value, bool big_endian = false) {
		T _v = value;
		if (big_endian) {
			_v = switchEndian(value);
		}
		std::memcpy(buffer + offset, &_v, sizeof(value));
		offset += sizeof(value);
	}

	void writeStringToBuffer(uint8_t* buffer, size_t& offset, const std::string& value);

	template<_base_type_t T>
	std::vector<T> read(std::istream& file, int counts = 1, bool big_endian = false) {
		std::vector<T> result;
		result.reserve(counts);
		for (int i = 0; i < counts; ++i) {
			T value;
			file.read(reinterpret_cast<char*>(&value), sizeof(T));
			if (big_endian) {
				value = switchEndian(value);
			}
			result.push_back(value);
		}
		return result;
	}

	std::vector<float> readHalfAsFull(std::istream& file, int counts = 1, bool big_endian = false);

	std::string readString(std::istream& file, int counts = 1);

	uint8_t* readBytes(std::istream& file, size_t bytes);

	template<_base_type_t T>
	T readFromBuffer(const uint8_t* buffer, size_t& offset, bool big_endian = false) {
		T value;
		std::memcpy(&value, buffer + offset, sizeof(T));
		if (big_endian) {
			value = switchEndian(value);
		}
		offset += sizeof(T);
		return value;
	}

	float readHalfAsFullFromBuffer(const uint8_t* buffer, size_t& offset, bool big_endian = false);

	std::string readStringFromBuffer(const uint8_t* buffer, size_t& offset, size_t length);

	void writeString(std::ostream& file, const std::string& value);

	template<typename T>
	void writeStream(std::ostream& file, const T* buffer, const size_t bytes) {
		file.write(reinterpret_cast<const char*>(buffer), bytes);
	}

	uint32_t binary_count(uint32_t n);

	uint32_t binary_count(uint32_t* n, uint32_t length);

	std::vector<uint32_t> binary_positions(uint32_t n);

	std::vector<uint32_t> binary_positions(uint32_t* n, uint32_t length);

	uint32_t* positions_to_binary(std::vector<uint32_t> pos);

	uint32_t* fill_binary(uint32_t n);

	template<class T>
	static T _fast_inv_sqrt(T sum) {
		T x2 = sum * 0.5f;
		T y = sum;
		long i = *(long*)&y;
		i = 0x5f3759df - (i >> 1);
		y = *(T*)&i;
		y = y * (1.5f - (x2 * y * y));
		return y;
	}

	template<class T>
	static T* _vector_subtract_noalloc(T* a, T* b, size_t length) {
		for (int i = 0; i < length; i++) {
			a[i] = a[i] - b[i];
		}
		return a;
	}

	template<class T>
	static T* _vector_subtract(T* a, T* b, size_t length) {
		T* result = new T[length];
		for (int i = 0; i < length; i++) {
			result[i] = a[i] - b[i];
		}
		return result;
	}

	template<class T>
	static void _vector_addition_noalloc(T* a, T* b, size_t length) {
		for (int i = 0; i < length; i++) {
			a[i] = a[i] + b[i];
		}
		return;
	}

	template<class T>
	static T _vector_norm(T* a, size_t length) {
		T sum = 0;
		for (int i = 0; i < length; i++) {
			sum += a[i] * a[i];
		}
		return sqrt(sum);
	}

	template<class T>
	static T* _vector_normalize(T* a, size_t length) {
		T* result = new T[length];
		T sum = 0;
		for (int i = 0; i < length; i++) {
			sum += a[i] * a[i];
		}
		T inv_sum = _fast_inv_sqrt(sum);
		for (int i = 0; i < length; i++) {
			result[i] = a[i] * inv_sum;
		}
		return result;
	}

	template<class T>
	static void _vector_normalize_noalloc(T* a, size_t length) {
		T sum = 0;
		for (int i = 0; i < length; i++) {
			sum += a[i] * a[i];
		}
		T inv_sum = _fast_inv_sqrt(sum);
		for (int i = 0; i < length; i++) {
			a[i] = a[i] * inv_sum;
		}
		return;
	}

	template<class T>
	static T _vector_dotproduct(T* a, T* b, size_t length) {
		T sum = 0;
		for (int i = 0; i < length; i++) {
			sum += a[i] * b[i];
		}
		return sum;
	}

	template<class T>
	static void _vector_multiply_noalloc(T* a, T b, size_t length) {
		for (int i = 0; i < length; i++) {
			a[i] = a[i] * b;
		}
		return;
	}

	template<class T>
	static T* _vector_multiply(T* a, T b, size_t length) {
		T* result = new T[length];
		for (int i = 0; i < length; i++) {
			result[i] = a[i] * b;
		}
		return result;
	}

	template<class T>
	static T* _vector_crossproduct(T* a, T* b) {
		T* result = new T[3];
		result[0] = a[1] * b[2] - a[2] * b[1];
		result[1] = a[2] * b[0] - a[0] * b[2];
		result[2] = a[0] * b[1] - a[1] * b[0];
		return result;
	}

	void ComputeTangentFrameImpl(uint32_t vertex_count, uint32_t tri_count, uint16_t* indices, float* positions, float* UV, float* normals, float* tan, float* bit);

	template<class _elem_T, class _key_T>
	std::map<_key_T, size_t>count_element(const std::vector<_elem_T>& vec, std::function<_key_T(const _elem_T&)> key_func) {
		std::map<_key_T, size_t> result;
		for (const _elem_T& elem : vec) {
			_key_T key = key_func(elem);
			if (result.find(key) == result.end()) {
				result[key] = 1;
			}
			else {
				result[key]++;
			}
		}
		return result;
	}

	class ClassProperty {
	public:
		template<typename T>
		[[nodiscard]] static inline ClassProperty parse() {
			return ClassProperty(typeid(T));
		}

		template<typename T>
		[[nodiscard]] static inline ClassProperty parse(const T& instance) {
			return ClassProperty(typeid(T));
		}

		inline std::string getDeclarationType() const {
			return declarationType;
		}

		inline std::string getBaseName() const {
			return baseName;
		}

		inline const std::vector<ClassProperty>& getTemplateArgs() const {
			return templateArgs;
		}

		inline std::string getCxxIdentifier() const {
			return cxxIdentifier;
		}

		std::string dump() const;

		inline bool is_valid() const {
			return !cxxIdentifier.empty();
		}

		operator std::string() const {
			return cxxIdentifier;
		}

		bool operator ==(const ClassProperty& other) const {
			return cxxIdentifier == other.cxxIdentifier;
		}

		struct Hash {
			std::size_t operator()(const ClassProperty& _property) const {
				std::hash<std::string> stringHasher;
				return stringHasher(_property.getCxxIdentifier());
			}
		};

	protected:
		ClassProperty(const std::type_info& typeInfo) {
			parseTypeName(typeInfo.name());
		}

		ClassProperty(const std::string& typeInfoName) {
			parseTypeName(typeInfoName);
		}

		void parseTypeName(std::string typeName);

		std::vector<ClassProperty> splitTemplateArgs(const std::string& argsString) const;

		std::string concatenateTemplateArgs() const;

		bool isPointer = false;
		std::string declarationType;
		std::string baseName;
		std::vector<std::string> namespaces;
		std::string pureName;
		std::string cxxIdentifier;
		std::vector<ClassProperty> templateArgs;
	};

	template<class _elem_T>
	requires utils::_is_integer_t<_elem_T> && (!std::is_same_v<_elem_T, uint64_t>)
	class CommutativePair {
	public:
		_elem_T upper;
		_elem_T lower;
		CommutativePair(const _elem_T& a, const _elem_T& b) {
			if (a > b) {
				upper = a;
				lower = b;
			}
			else {
				upper = b;
				lower = a;
			}
		}

		bool operator==(const CommutativePair& other) const {
			return upper == other.upper && lower == other.lower;
		}

		struct Hash {
			std::size_t operator()(const CommutativePair& _pair) const {
				return size_t(_pair.lower) << 32 | size_t(_pair.upper);
			}
		};
	};
}

namespace std {
	template<class _elem_T>
	struct hash<utils::CommutativePair<_elem_T>> {
		std::size_t operator()(const utils::CommutativePair<_elem_T>& _pair) const {
			return size_t(_pair.lower) << 32 | size_t(_pair.upper);
		}
	};
}