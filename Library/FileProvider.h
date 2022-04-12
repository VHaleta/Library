#pragma once
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream>
#include "Book.h"

static class FileProvider
{
public:
	std::vector<Book> GetBookVector(std::string filePath);
};

