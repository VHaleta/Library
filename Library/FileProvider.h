#pragma once
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream>
#include "Book.h"
#include "JsonConverter.h"

static class FileProvider : public JsonConverter
{
public:
	static void SaveToFile(std::vector<Book> books, std::string filePath);
	static std::vector<Book> GetListFromFile(std::string filePath);
};

