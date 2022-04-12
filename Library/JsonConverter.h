#pragma once
static class JsonConverter
{
protected:
	static string VectorToString(vector<Book> books);
	static vector<Book> StringToVector(string str);
};