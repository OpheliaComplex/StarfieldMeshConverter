#include "MorphIO.h"
using namespace morph;

bool MorphIO::Deserialize(const std::string filename)
{
	// Check file extension, return false if extension is not .dat
	std::string extension = filename.substr(filename.find_last_of(".") + 1);
	if (extension != "dat")
	{
		std::cout << "Invalid file extension" << std::endl;
		return false;
	}

	// Open the file
	std::ifstream file;
	file.open(filename, std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return false;
	}

	// Read string of length 4
	auto head = utils::readString(file, 4);

	if (head != "MDAT"){
		std::cout << "Invalid file header" << std::endl;
		return false;
	}

	// Read unknown uint32_t
	this->num_axis = utils::read<uint32_t>(file)[0];

	_ASSERT(num_axis == 3);

	// Read number of vertices
	this->num_vertices = utils::read<uint32_t>(file)[0];

	// Read number of shape keys
	this->num_shape_keys = utils::read<uint32_t>(file)[0];

	for (int i = 0; i < this->num_shape_keys; i++) {
		uint32_t length_of_name = utils::read<uint32_t>(file)[0];
		std::string name = utils::readString(file, length_of_name);
		this->morph_names.push_back(name);
	}

	// Print file pointer position in hex
	//std::cout << std::hex << file.tellg() << std::endl;

	// Read number of rows
	this->num_morph_data = utils::read<uint32_t>(file)[0];
	this->num_offsets = utils::read<uint32_t>(file)[0];

	_ASSERT(num_vertices == num_offsets);

	for (int i = 0; i < this->num_morph_data; i++) {
		morph_data _morph_data;

		auto _data = utils::read<int16_t>(file,8);
		int16_t* data = _data.data();
		_morph_data = *reinterpret_cast<morph_data*>(data);
		this->morph_data_raw.push_back(_morph_data);

#ifdef _EXTENDED_MORPH_DATA
		morph_data_hf _morph_data_hf;

		_morph_data_hf._offset[0] = utils::halfToFloat(reinterpret_cast<uint16_t*>(_morph_data._offset)[0]);
		_morph_data_hf._offset[1] = utils::halfToFloat(reinterpret_cast<uint16_t*>(_morph_data._offset)[1]);
		_morph_data_hf._offset[2] = utils::halfToFloat(reinterpret_cast<uint16_t*>(_morph_data._offset)[2]);

		_morph_data_hf.target_vert_color = _morph_data.target_vert_color / float(uint16_t(-1));
		
#ifdef _DEBUG
		auto n = utils::decodeDEC3N_CHECK(_morph_data.x,1);
#else
		auto n = utils::decodeDEC3N(_morph_data.x);
#endif
		auto t = utils::decodeDEC3N(_morph_data.y);
		_morph_data_hf.nx = n[0];
		_morph_data_hf.ny = n[1];
		_morph_data_hf.nz = n[2];

		_morph_data_hf.tx = t[0];
		_morph_data_hf.ty = t[1];
		_morph_data_hf.tz = t[2];

		this->morph_data_raw_hf.push_back(_morph_data_hf);

#endif
	}

	// Print file pointer position in hex
	//std::cout << std::hex << file.tellg() << std::endl;

	for (int i = 0; i < this->num_offsets; i++) {
		IOffset _offset_data{};
		_offset_data._offset = utils::read<uint32_t>(file)[0];

		for (int j = 0; j < 4; j++) {
			_offset_data._marker[j] = static_cast<morph_key_selection>(utils::read<uint32_t>(file)[0]);
		}

		this->offsets_list.push_back(_offset_data);
	}

	size_t size_morph_data = 0;

	for (int i = 0; i < this->num_vertices; i++) {
		int t = this->offsets_list[i]._offset;
		int size = 0;
		if (i != this->num_vertices - 1)
			size = this->offsets_list[i + 1]._offset - this->offsets_list[i]._offset;
		else
			size = this->num_morph_data - this->offsets_list[i]._offset;

		std::vector<morph_data> _morph_data;

#ifdef _EXTENDED_MORPH_DATA
		std::vector<morph_data_hf> _morph_data_hf;

#endif
		std::vector<uint32_t> _morph_key_indices;

		_morph_key_indices = utils::binary_positions((uint32_t*)this->offsets_list[i]._marker, 4);

		if (_morph_key_indices.size() != 0) {
			_ASSERT(_morph_key_indices.back() < this->num_shape_keys);
		}

		for (int j = 0; j < size; j++) {
			_morph_data.push_back(this->morph_data_raw[t + j]);

#ifdef _EXTENDED_MORPH_DATA
			_morph_data_hf.push_back(this->morph_data_raw_hf[t + j]);

#endif
		}

		this->per_vert_morph_data.push_back(_morph_data);

#ifdef _EXTENDED_MORPH_DATA
		this->per_vert_morph_data_hf.push_back(_morph_data_hf);

#endif
		this->per_vert_morph_key_indices.push_back(_morph_key_indices);


		size_morph_data += _morph_key_indices.size();
	}

	if (this->num_morph_data != 1) {
		_ASSERT(size_morph_data == this->num_morph_data);
	}

	return true;
}

bool MorphIO::Serialize(const std::string filename)
{
	// Check file extension, return false if extension is not .dat
	std::string extension = filename.substr(filename.find_last_of(".") + 1);
	if (extension != "dat") {
		std::cout << "Invalid file extension" << std::endl;
		return false;
	}

	// Open the file
	std::ofstream file;
	file.open(filename, std::ios::binary);
	if (!file.is_open()) {
		std::cout << "Error opening file" << std::endl;
		return false;
	}

	// Write string of length 4
	utils::writeString(file, "MDAT");

	// Write unknown uint32_t
	utils::writeAsHex(file, this->num_axis);

	// Write number of vertices
	utils::writeAsHex(file, this->num_vertices);

	// Write number of shape keys
	utils::writeAsHex(file, this->num_shape_keys);

	for (int i = 0; i < this->num_shape_keys; i++) {
		uint32_t length_of_name = this->morph_names[i].length();
		utils::writeAsHex(file, length_of_name);
		utils::writeString(file, this->morph_names[i]);
	}

	// Print file pointer position in hex
	//std::cout << std::hex << file.tellp() << std::endl;

	// Write number of rows
	utils::writeAsHex(file, this->num_morph_data);
	utils::writeAsHex(file, this->num_offsets);

	// Print file pointer position in hex
	//std::cout << std::hex << file.tellp() << std::endl;

	for (int i = 0; i < this->num_morph_data; i++) {
		auto& data = this->morph_data_raw[i];
		utils::writeAsHex(file, data);
	}

	// Print file pointer position in hex
	//std::cout << std::hex << file.tellp() << std::endl;

	for (int i = 0; i < this->num_offsets; i++) {
		auto& data = this->offsets_list[i];
		utils::writeAsHex(file, data);
	}

	// Print num_morph_data and num_offsets as strings
	std::cout << std::dec << this->num_morph_data << std::endl;
	std::cout << std::dec << this->num_offsets << std::endl;

	return true;

}

using json = nlohmann::json;
bool MorphIO::Load(const std::string jsonMorphFile, const uint32_t options)
{
	this->Clear();

	std::ifstream file(jsonMorphFile);
	if (!file.is_open()) {
		std::cout << "Error: Failed to open JSON file." << std::endl;
		return false;
	}

	std::string json_data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

	return this->LoadFromString(json_data, options);
}

bool morph::MorphIO::LoadFromString(const std::string json_data, const uint32_t options)
{
	this->Clear();

	auto start_time = clock();
	json jsonData = json::parse(json_data);
	auto end_time = clock();

	std::cout << "Morph data JSON parsing in " << (end_time - start_time) << "ms" << std::endl;

	// Read shape key names
	this->num_shape_keys = jsonData["shapeKeys"].size();
	for (auto& shapeKey : jsonData["shapeKeys"]) {
		this->morph_names.push_back(shapeKey);
	}

	// Read morph data
	this->num_morph_data = 0;
	this->num_vertices = jsonData["numVertices"];
	for (int i = 0; i < this->num_vertices; i++) {
		std::vector<morph_data> _morph_data;
		std::vector<uint32_t> _morph_key_selection;
		for (int j = 0; j < this->num_shape_keys; j++) {
			auto& delta_positions = jsonData["deltaPositions"][j][i];
			auto& target_colors = jsonData["targetColors"][j][i];
			auto& delta_normals = jsonData["deltaNormals"][j][i];
			auto& delta_tangents = jsonData["deltaTangents"][j][i];

			if (abs(float(delta_positions[0])) > 1e-4 || abs(float(delta_positions[1])) > 1e-4 || abs(float(delta_positions[2])) > 1e-4) {
				morph_data _data{};
				_morph_key_selection.push_back(j);
				_data._offset[0] = utils::floatToHalf(delta_positions[0]);
				_data._offset[1] = utils::floatToHalf(delta_positions[1]);
				_data._offset[2] = utils::floatToHalf(delta_positions[2]);
				_data.target_vert_color = utils::encodeRGB565(target_colors[0], target_colors[1], target_colors[2]);
				_data.x = utils::encodeDEC3N({ float(delta_normals[0]),float(delta_normals[1]) ,float(delta_normals[2]) }, 1);
				_data.y = utils::encodeDEC3N({ float(delta_tangents[0]),float(delta_tangents[1]) ,float(delta_tangents[2]) }, 1);
				_morph_data.push_back(_data);
				this->morph_data_raw.push_back(_data);
				this->num_morph_data++;
			}

		}
		this->per_vert_morph_data.push_back(_morph_data);
		this->per_vert_morph_key_indices.push_back(_morph_key_selection);
	}

	this->num_offsets = this->num_vertices;
	uint32_t offset = 0;
	for (int i = 0; i < this->num_vertices; i++) {
		IOffset _offset_data{};
		_offset_data._offset = offset;

		//auto binary = utils::fill_binary(this->num_shape_keys);
		auto binary = utils::positions_to_binary(this->per_vert_morph_key_indices[i]);

		_offset_data._marker[0] = static_cast<morph_key_selection>(binary[0]);
		_offset_data._marker[1] = static_cast<morph_key_selection>(binary[1]);
		_offset_data._marker[2] = static_cast<morph_key_selection>(binary[2]);
		_offset_data._marker[3] = static_cast<morph_key_selection>(binary[3]);

		// Free binary memory
		delete[] binary;

		this->offsets_list.push_back(_offset_data);
		offset += this->per_vert_morph_key_indices[i].size();
	}

	auto end_time2 = clock();
	std::cout << "Morph loaded from JSON in " << (end_time2 - start_time) << "ms" << std::endl;

	return this->PostProcess(options);
}

bool morph::MorphIO::LoadFromNumpy(const std::string json_header_data, const float* a_delta_positions, const float* a_target_colors, const float* a_delta_normals, const float* a_delta_tangents, const uint32_t options)
{
	this->Clear();

	auto start_time = clock();
	json jsonData = json::parse(json_header_data);
	auto end_time = clock();

	std::cout << "Morph data JSON parsing in " << (end_time - start_time) << "ms" << std::endl;

	// Read shape key names
	this->num_shape_keys = jsonData["shapeKeys"].size();
	for (auto& shapeKey : jsonData["shapeKeys"]) {
		this->morph_names.push_back(shapeKey);
	}

	// Read morph data
	this->num_morph_data = 0;
	this->num_vertices = jsonData["numVertices"];
	for (int i = 0; i < this->num_vertices; i++) {
		std::vector<morph_data> _morph_data;
		std::vector<uint32_t> _morph_key_selection;
		for (int j = 0; j < this->num_shape_keys; j++) {
			const float* delta_positions = a_delta_positions + (i + j * this->num_vertices) * 3;
			const float* target_colors = a_target_colors + (i + j * this->num_vertices) * 3;
			const float* delta_normals = a_delta_normals + (i + j * this->num_vertices) * 3;
			const float* delta_tangents = a_delta_tangents + (i + j * this->num_vertices) * 3;

			if (abs(float(delta_positions[0])) > 1e-4 || abs(float(delta_positions[1])) > 1e-4 || abs(float(delta_positions[2])) > 1e-4) {
				morph_data _data{};
				_morph_key_selection.push_back(j);
				_data._offset[0] = utils::floatToHalf(delta_positions[0]);
				_data._offset[1] = utils::floatToHalf(delta_positions[1]);
				_data._offset[2] = utils::floatToHalf(delta_positions[2]);
				_data.target_vert_color = utils::encodeRGB565(target_colors[0], target_colors[1], target_colors[2]);
				_data.x = utils::encodeDEC3N({ float(delta_normals[0]),float(delta_normals[1]) ,float(delta_normals[2]) }, 1);
				_data.y = utils::encodeDEC3N({ float(delta_tangents[0]),float(delta_tangents[1]) ,float(delta_tangents[2]) }, 1);
				_morph_data.push_back(_data);
				this->morph_data_raw.push_back(_data);
				this->num_morph_data++;
			}

		}
		this->per_vert_morph_data.push_back(_morph_data);
		this->per_vert_morph_key_indices.push_back(_morph_key_selection);
	}

	this->num_offsets = this->num_vertices;
	uint32_t offset = 0;
	for (int i = 0; i < this->num_vertices; i++) {
		IOffset _offset_data{};
		_offset_data._offset = offset;

		//auto binary = utils::fill_binary(this->num_shape_keys);
		auto binary = utils::positions_to_binary(this->per_vert_morph_key_indices[i]);

		_offset_data._marker[0] = static_cast<morph_key_selection>(binary[0]);
		_offset_data._marker[1] = static_cast<morph_key_selection>(binary[1]);
		_offset_data._marker[2] = static_cast<morph_key_selection>(binary[2]);
		_offset_data._marker[3] = static_cast<morph_key_selection>(binary[3]);

		// Free binary memory
		delete[] binary;

		this->offsets_list.push_back(_offset_data);
		offset += this->per_vert_morph_key_indices[i].size();
	}

	auto end_time2 = clock();
	std::cout << "Morph loaded from JSON in " << (end_time2 - start_time) << "ms" << std::endl;

	return this->PostProcess(options);
}

bool MorphIO::Save(const std::string jsonMorphFile)
{
	std::string jsonData;

	if (!SerializeToJson(jsonData)) {
		std::cout << "Error: Failed to serialize JSON data." << std::endl;
		return false;
	}

	std::ofstream file(jsonMorphFile);
	if (!file.is_open()) {
		std::cout << "Error: Failed to open JSON file." << std::endl;
		return false;
	}

	file << jsonData;

	return true;
}

bool morph::MorphIO::SerializeToJson(std::string& json_data)
{
	json jsonData;
	// Save vertex count
	jsonData["numVertices"] = this->num_vertices;

	// Save shape key names
	jsonData["shapeKeys"] = json::array();
	for (auto& shapeKey : this->morph_names) {
		jsonData["shapeKeys"].push_back(shapeKey);
	}

	// Save morph data
	jsonData["morphData"] = json::array();
	for (int i = 0; i < this->num_shape_keys; i++) {
		jsonData["morphData"].push_back(json::array());
		for (int j = 0; j < this->num_vertices; j++) {
			jsonData["morphData"][i].push_back(json::array({ 0.f, 0.f, 0.f, json::array({255,255,255}), json::array({0.f,0.f,0.f}), json::array({0.f,0.f,0.f}) }));
		}
	}

	for (int i = 0; i < this->num_vertices; i++) {
		auto& indices = this->per_vert_morph_key_indices[i];
		for (int j = 0; j < indices.size(); ++j) {
			auto& id = indices[j];
			auto& data = this->per_vert_morph_data[i][j];
			jsonData["morphData"][id][i][0] = utils::halfToFloat(data._offset[0]);
			jsonData["morphData"][id][i][1] = utils::halfToFloat(data._offset[1]);
			jsonData["morphData"][id][i][2] = utils::halfToFloat(data._offset[2]);

			uint8_t r, g, b;
			utils::decodeRGB565(data.target_vert_color, r, g, b);

			jsonData["morphData"][id][i][3] = json::array({ r, g, b });

			auto delta_norm = utils::decodeDEC3N(data.x);
			jsonData["morphData"][id][i][4] = json::array({ delta_norm[0], delta_norm[1], delta_norm[2] });

			auto delta_tan = utils::decodeDEC3N(data.y);
			jsonData["morphData"][id][i][5] = json::array({ delta_tan[0], delta_tan[1], delta_tan[2] });
			//jsonData["morphData"][id][i][10] = w;

			// print w
			//std::cout << std::dec << w << std::endl;
		}
	}

	json_data = jsonData.dump(4);
	return true;
}

bool morph::MorphIO::LoadToNumpy(std::string& json_header_data, float* delta_positions, float* target_colors, float* delta_normals, float* delta_tangents)
{
	json jsonData;
	// Save vertex count
	jsonData["numVertices"] = this->num_vertices;

	// Save shape key names
	jsonData["shapeKeys"] = json::array();
	for (auto& shapeKey : this->morph_names) {
		jsonData["shapeKeys"].push_back(shapeKey);
	}

	json_header_data = jsonData.dump();

	// Memset (needs pre-allocated ptrs from numpy)
	std::memset(delta_positions, 0, this->num_vertices * this->num_shape_keys * 3 * sizeof(float));
	//std::memset(target_colors, 0, this->num_vertices * this->num_shape_keys * 3 * sizeof(float));
	std::memset(delta_normals, 0, this->num_vertices * this->num_shape_keys * 3 * sizeof(float));
	std::memset(delta_tangents, 0, this->num_vertices * this->num_shape_keys * 3 * sizeof(float));

	for (int i = 0; i < this->num_vertices; i++) {
		auto& indices = this->per_vert_morph_key_indices[i];
		for (int j = 0; j < indices.size(); ++j) {
			auto& id = indices[j];
			auto& data = this->per_vert_morph_data[i][j];

			size_t _entry_id = id * this->num_vertices * 3 + i * 3;

			delta_positions[_entry_id + 0] = utils::halfToFloat(data._offset[0]);
			delta_positions[_entry_id + 1] = utils::halfToFloat(data._offset[1]);
			delta_positions[_entry_id + 2] = utils::halfToFloat(data._offset[2]);

			uint8_t r, g, b;
			utils::decodeRGB565(data.target_vert_color, r, g, b);

			target_colors[_entry_id + 0] = r;
			target_colors[_entry_id + 1] = g;
			target_colors[_entry_id + 2] = b;

			auto delta_norm = utils::decodeDEC3N(data.x);
			std::memcpy(delta_normals + _entry_id, delta_norm.data(), 3 * sizeof(float));


			auto delta_tan = utils::decodeDEC3N(data.y);
			std::memcpy(delta_tangents + _entry_id, delta_tan.data(), 3 * sizeof(float));
		}
	}

	return true;
}

bool MorphIO::PostProcess(const uint32_t options)
{


	return true;
}

void MorphIO::Clear()
{
	this->num_axis = 3;
	this->num_vertices = 0;
	this->num_shape_keys = 0;
	this->num_morph_data = 0;
	this->num_offsets = 0;


	this->morph_names.clear();
	this->morph_data_raw.clear();
	this->offsets_list.clear();
	this->per_vert_morph_data.clear();
	this->per_vert_morph_key_indices.clear();
}

void MorphIO::FakeEmpty(const uint32_t n_verts, const uint8_t n_morphs)
{
	this->Clear();
	this->num_axis = 3;
	this->num_morph_data = n_morphs;

	if (n_morphs == 3) {
		this->morph_names.push_back("Overweight");
		this->morph_names.push_back("Thin");
		this->morph_names.push_back("Strong");
	}
	else {
		for (int i = 0; i < n_morphs; i++) {
			this->morph_names.push_back("Morph_" + std::to_string(i));
		}
	}
	this->num_offsets = n_verts;
	this->num_vertices = n_verts;
	this->num_morph_data = 1;
	this->morph_data_raw.push_back(morph_data());
	for (int i = 0; i < n_verts; i++) {
		IOffset _offset_data{};
		_offset_data._offset = 0;
		std::memset(_offset_data._marker, 0, 4 * sizeof(uint32_t));
		this->offsets_list.push_back(_offset_data);
	}

}

bool morph::MorphIO::read_header(const std::string filename, std::string& header_str)
{
	std::string extension = filename.substr(filename.find_last_of(".") + 1);
	if (extension != "dat")
	{
		std::cout << "Invalid file extension" << std::endl;
		return false;
	}

	// Open the file
	std::ifstream file;
	file.open(filename, std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return false;
	}

	// Read string of length 4
	auto head = utils::readString(file, 4);

	if (head != "MDAT") {
		std::cout << "Invalid file header" << std::endl;
		return false;
	}

	// Read unknown uint32_t
	auto num_axis = utils::read<uint32_t>(file)[0];

	_ASSERT(num_axis == 3);

	// Read number of vertices
	auto num_vertices = utils::read<uint32_t>(file)[0];

	// Read number of shape keys
	auto num_shape_keys = utils::read<uint32_t>(file)[0];


	std::vector<std::string> morph_names;

	for (int i = 0; i < num_shape_keys; i++) {
		uint32_t length_of_name = utils::read<uint32_t>(file)[0];
		std::string name = utils::readString(file, length_of_name);
		morph_names.push_back(name);
	}

	json jsonData;
	// Save vertex count
	jsonData["numVertices"] = num_vertices;

	// Save shape key names
	jsonData["shapeKeys"] = json::array();
	for (auto& shapeKey : morph_names) {
		jsonData["shapeKeys"].push_back(shapeKey);
	}

	header_str = jsonData.dump();

	return true;
}
