#include <string>
#pragma once
class Book 
{
public:
	std::string name;
	std::string author;
	std::string description;
	std::string publishingHouse;
	int pages;
	int year;
	Book() :
		name("book name"),
		author("book author"),
		description("book description"),
		publishingHouse("publishing house"),
		pages(0),
		year(0) {};
};