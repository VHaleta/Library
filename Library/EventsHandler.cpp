#include "pch.h"
#include "EventsHandler.h"

vector<Book>* EventsHandler::LoadFile(String^ fileName, DataGridView^ dataGridView)
{
	vector<Book> books = FileProvider::GetListFromFile(msclr::interop::marshal_as<string>(fileName));

	for (int i = 0; i < books.size(); i++)
	{
		dataGridView->Rows->Add();
		dataGridView->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(books[i].name);
		dataGridView->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(books[i].author);
	}
	return &books;
}

void EventsHandler::SaveFile(vector<Book>* books, SaveFileDialog^ saveFileDialog)
{
	if (System::Windows::Forms::DialogResult::OK != saveFileDialog->ShowDialog()) return;
	FileProvider::SaveToFile(*books, msclr::interop::marshal_as<string>(saveFileDialog->FileName));
}

void EventsHandler::SaveFile(vector<Book>* books, String^ fileName)
{
	if (fileName == "default") return;
	FileProvider::SaveToFile(*books, msclr::interop::marshal_as<std::string>(fileName));
}