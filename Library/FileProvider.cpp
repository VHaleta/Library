#include "pch.h"
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream>
#include "Book.h"
#include "FileProvider.h"
#include "JsonConverter.h"

using namespace std;

static class FileProvider : public JsonConverter
{
public:
	static void SaveToFile(vector<Book> books, string filePath)
	{
		string str = VectorToString(books);
		ofstream ostr(filePath);
		ostr << str;
		ostr.close();
	}
	static vector<Book> GetListFromFile(string filePath)
	{
		ifstream istr(filePath);
		if (!istr.is_open()) return vector<Book>{};
		return StringToVector(string((std::istreambuf_iterator<char>(istr)), std::istreambuf_iterator<char>()));
	}
};
