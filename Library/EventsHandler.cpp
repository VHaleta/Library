#include "pch.h"
#include "EventsHandler.h"

DataGridView^ EventsHandler::OpenFile(OpenFileDialog^ openFileDialog, DataGridView^ dataGridView1)
{
	openFileDialog = gcnew OpenFileDialog();
	DataGridView^ result;
	if (System::Windows::Forms::DialogResult::OK != openFileDialog->ShowDialog()) dataGridView1;

	char temp[100];
	sprintf(temp, "%s", openFileDialog->FileName);
	filePath = string(temp);
	vector<Book> books = FileProvider::GetListFromFile(filePath);

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
	FileProvider::SaveToFile(books, msclr::interop::marshal_as<std::string>(saveFileDialog->FileName));
}