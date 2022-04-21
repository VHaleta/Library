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

ref class EventsHandler
{
private:
	static string fileName;
	static vector<Book> books;
public:
	void LoadFile(string fileName, DataGridView^ dataGridView);
	void SaveFile();
	void SaveFile(string fileName);
};