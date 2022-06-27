#include <string>
#pragma once
class Book
{
public:
	std::string name;
	std::string author;
	std::string description;
	std::string ISBN;
	int pages;
	int year;
	Book() :
		name("new book name"),
		author("book author"),
		description("book description"),
		ISBN("0"),
		pages(0),
		year(0) {};
	Book& operator=(const Book& obj) {
		name = obj.name;
		author = obj.author;
		ISBN = obj.ISBN;
		description = obj.description;
		pages = obj.pages;
		year = obj.year;
		return *this;
	}
	bool operator==(const Book& obj1) const
	{
		return (name == obj1.name &&
			author == obj1.author &&
			ISBN == obj1.ISBN &&
			description == obj1.description &&
			pages == pages &&
			year == obj1.year);
	}
};