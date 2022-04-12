#pragma once
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream>
#include "Book.h"

static class FileProvider : public JsonConverter
{
public:
	static void SaveToFile(vector<Book> books, string filePath);
	static vector<Book> GetListFromFile(string filePath);
};

