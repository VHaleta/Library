#include "pch.h"
#include "EventsHandler.h"


void EventsHandler::LoadFile(string fileName, DataGridView^ dataGridView)
{
	this->fileName = fileName;
	books = FileProvider::GetListFromFile(fileName);


	for (int i = 0; i < books.size(); i++)
	{
		dataGridView->Rows->Add();
		dataGridView->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(books[i].name);
		dataGridView->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(books[i].author);
	}

}

void EventsHandler::SaveFile()
{
	if (fileName == "default") return;
	FileProvider::SaveToFile(books, fileName);
}

void EventsHandler::SaveFile(string fileName)
{
	this->fileName = fileName;
	FileProvider::SaveToFile(books, fileName);
}
