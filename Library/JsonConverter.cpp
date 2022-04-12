#include "Book.h"
#include <nlohmann/json.hpp>
#include <vector>
#include <fstream>
#include "JsonConverter.h"

using nlohmann::json;
using namespace std;

class TempData {
public:
	vector<Book> books;
};

void to_json(json& j, const TempData& temp) {
	json sj;
	for (int i = 0; i < temp.books.size(); i++)
	{
		sj += json{ {"name", temp.books[i].Name},
		{"author", temp.books[i].Author} };
	}

	j["books"] = sj;
}

void from_json(const json& j, Book& b) {
	b.Name = j.at("name");
	b.Author = j.at("author");
}

void from_json(const json& j, TempData& t) {
	const json& sj = j.at("books");
	t.books.resize(sj.size());
	std::copy(sj.begin(), sj.end(), t.books.begin());
}


static class JsonConverter
{
protected:
	static string VectorToString(vector<Book> books)
	{
		TempData t;
		t.books = books;
		json j = t;
		return string(j.dump());
	}
	static vector<Book> StringToVector(string str)
	{
		json j = json::parse(str);
		TempData t = j;
		return t.books;
	}
};