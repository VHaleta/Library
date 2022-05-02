#include "pch.h"
#include "EventsHandler.h"


void EventsHandler::LoadFile(string fileName)
{
	Clear();
	this->fileName = fileName;
	books = FileProvider::GetListFromFile(fileName);
	opened = true;
}

void EventsHandler::LoadDataGridView(DataGridView^ dataGridView)
{
	for (int i = 0; i < books.size(); i++)
	{
		dataGridView->Rows->Add();
		dataGridView->Rows[i]->Cells[0]->Value = StrConvert(books[i].name);
		dataGridView->Rows[i]->Cells[1]->Value = StrConvert(books[i].author);
	}
}

void EventsHandler::SaveFile()
{
	if (!opened) return;
	FileProvider::SaveToFile(books, fileName);
}

void EventsHandler::SaveFile(string fileName)
{
	this->fileName = fileName;
	FileProvider::SaveToFile(books, fileName);
}

void EventsHandler::LoadBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear)
{
	Book b = books[index];
	textBoxName->Text = StrConvert(b.name);
	textBoxAuthor->Text = StrConvert(b.author);
	textBoxPubl->Text = StrConvert(b.publishingHouse);
	textBoxPages->Text = StrConvert(to_string(b.pages));
	textBoxYear->Text = StrConvert(to_string(b.year));
}

void EventsHandler::SaveBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear)
{
	Book* b = &books[index];
	b->name = StrConvert(textBoxName->Text);
	b->author = StrConvert(textBoxAuthor->Text);
	b->publishingHouse = StrConvert(textBoxPubl->Text);
	b->pages = atoi(StrConvert(textBoxPages->Text).c_str());
	b->year = atoi(StrConvert(textBoxYear->Text).c_str());
}

void EventsHandler::DeleteBook(int index)
{
	books.erase(books.begin() + index);
}

void EventsHandler::CreateBook()
{
	Book b;
	books.push_back(b);
}

void EventsHandler::Clear()
{
	fileName == "default";
	books.clear();
	opened = false;
}
