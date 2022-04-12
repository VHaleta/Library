#pragma once
#include <vector>
#include <string>
#include "Book.h"


static class JsonConverter
{
protected:
	static std::string VectorToString(std::vector<Book> books);
	static std::vector<Book> StringToVector(std::string str);
};