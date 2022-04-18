#include "pch.h"
#include "EventsHandler.h"

DataGridView^ EventsHandler::OpenFile(OpenFileDialog^ openFileDialog, DataGridView^ dataGridView1)
{
	openFileDialog = gcnew OpenFileDialog();
	DataGridView^ result;
	if (System::Windows::Forms::DialogResult::OK != openFileDialog->ShowDialog()) dataGridView1;

	filePath = msclr::interop::marshal_as<string>(openFileDialog->FileName);
	books = FileProvider::GetListFromFile(filePath);

	for (int i = 0; i < books.size(); i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(books[i].name);
		dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(books[i].author);
	}
	return dataGridView1;
}

void EventsHandler::SaveFile(SaveFileDialog^ saveFileDialog)
{
	saveFileDialog = gcnew SaveFileDialog();
	if (System::Windows::Forms::DialogResult::OK != saveFileDialog->ShowDialog()) return;
	FileProvider::SaveToFile(books, msclr::interop::marshal_as<string>(saveFileDialog->FileName));
}

void EventsHandler::SaveFile()
{
	if (filePath == "default") return;
	FileProvider::SaveToFile(books, filePath);
}