#include "pch.h"
#include "EventsHandler.h"


void EventsHandler::LoadFile(string fileName, DataGridView^ dataGridView)
{
	Clear();
	this->fileName = fileName;
	books = FileProvider::GetListFromFile(fileName);


	for (int i = 0; i < books.size(); i++)
	{
		dataGridView->Rows->Add();
		dataGridView->Rows[i]->Cells[0]->Value = StrConvert(books[i].name);
		dataGridView->Rows[i]->Cells[1]->Value = StrConvert(books[i].author);
	}

	opened = true;
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

void EventsHandler::Clear()
{
	fileName == "default";
	books.clear();
	opened = false;
}
