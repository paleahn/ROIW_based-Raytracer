#pragma once
#include "Triangle.h"
#include <vector>
#include <unordered_map>
#include <string>


class ModelLoader
{
public:

	static std::vector<Triangle> &loadModel(const char *filePath, Material *material);

private:
	static std::unordered_map<std::string, std::vector<Triangle>> models;
	ModelLoader() = delete;
};

