#pragma once
#include "pch.h"
#include <nlohmann/json.hpp>
#include <vector>
#include <fstream>
#include "JsonConverter.h"
#include "Book.h"

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
		sj += json{ {"name", temp.books[i].name},
			{"author", temp.books[i].author},
			{"description", temp.books[i].description},
			{"isbn",temp.books[i].ISBN},
			{"pages", temp.books[i].pages},
			{"year", temp.books[i].year} };
	}

	j["books"] = sj;
}

void from_json(const json& j, Book& b) {
	b.name = j.at("name");
	b.author = j.at("author");
	b.description = j.at("description");
	b.ISBN = j.at("isbn");
	b.pages = j.at("pages");
	b.year = j.at("year");
}

void from_json(const json& j, TempData& t) {
	const json& sj = j.at("books");
	t.books.resize(sj.size());
	std::copy(sj.begin(), sj.end(), t.books.begin());
}

string JsonConverter::VectorToString(vector<Book> books)
{
	TempData t;
	t.books = books;
	json j = t;
	return string(j.dump());
}
vector<Book> JsonConverter::StringToVector(string str)
{
	json j = json::parse(str);
	TempData t = j;
	return t.books;
}