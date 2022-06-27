#pragma once
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <codecvt>
#include "Book.h"
#include "FileProvider.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace std;

class EventsHandler
{
private:
	static string fileName;
	static vector<Book> allBooks;
	static vector<Book> books;
	static vector<string> sortKeys;
public:
	static vector<wstring> parameters;
	static bool opened;
	static int currentBook;
public:
	void LoadFile(string fileName);
	void LoadDataGridView(DataGridView^ dataGridView, List<ComboBox^>^ sort, String^ search, List<bool>^ columns);
	void SaveFile();
	void SaveFile(string fileName);
	void Clear();
	void LoadBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear, RichTextBox^ textBoxDescription);
	void SaveBook(TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear, RichTextBox^ textBoxDescription);
	void DeleteBook(int index);
	void CreateBook();
private:
	string StrConvert(String^ str) {
		return msclr::interop::marshal_as<string>(str);
	}
	String^ StrConvert(string str) {
		return msclr::interop::marshal_as<String^>(str);
	}
	int Key(string s, Book l, Book r);
	void Search(string search);
	int Partition(int low, int high);
	void QuickSort(int low, int high);
};
