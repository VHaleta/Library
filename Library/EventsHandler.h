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
protected:
	static string filePath;
	static vector<Book> books;
public:
	EventsHandler() {}
	DataGridView^ OpenFile(OpenFileDialog^ openFileDialog, DataGridView^ dataGridView1);
	void SaveFile(SaveFileDialog^ saveFileDialog);
	void SaveFile();
	~EventsHandler() {
//		throw "destroy";
	}
};