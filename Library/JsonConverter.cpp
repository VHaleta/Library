#include "Book.h"
#include <nlohmann/json.hpp>
#include <vector>

using nlohmann::json;
using namespace std;

void to_json(json& j, const Book& book) {
	j = json{ {"Name",book.Name},
		{"Author",book.Author},
		{"PublishingHouse",book.PublishingHouse},
		{"Year",book.Year},
		{"Pages",book.Pages},
		{"Description",book.Description} };
}

static class JsonConverter
{
protected:
	static string VectorToString(vector<Book> arr)
	{
		json j;
		for (int i = 0; i < arr.size(); i++)
			j.push_back(arr[i]);

		return string(j.dump());
	}
	static vector<Book> StringToVector(string str)
	{

	}
};