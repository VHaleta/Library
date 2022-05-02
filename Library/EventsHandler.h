#pragma once
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "Book.h"
#include "FileProvider.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

class EventsHandler
{
private:
	static string fileName;
	static vector<Book> books;
public:
	static bool opened;
public:
	void LoadFile(string fileName);
	void LoadDataGridView(DataGridView^ dataGridView);
	void SaveFile();
	void SaveFile(string fileName);
	void Clear();
	void LoadBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear);
	void SaveBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear);
	void DeleteBook(int index);
private:
	string StrConvert(String^ str) {
		return msclr::interop::marshal_as<string>(str);
	}
	String^ StrConvert(string str) {
		return msclr::interop::marshal_as<String^>(str);
	}
};
