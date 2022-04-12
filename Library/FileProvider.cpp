#include "pch.h"
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream>
#include "Book.h"
#include "FileProvider.h"

using namespace std;

static class FileProvider
{
public:
	static vector<Book> GetBooks(string filePath)
	{
		ifstream istream(filePath);
		string fileText((std::istreambuf_iterator<char>(istream)), std::istreambuf_iterator<char>());
		nlohmann::json j;
	}
	static void SaveToFile(vector<Book> arr, string filePath)
	{
		ofstream ostr(filePath);
		ostr << VectorToString(arr);
		ostr.close();
	}
};
