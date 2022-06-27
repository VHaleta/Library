#include "pch.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

string EventsHandler::fileName = "default";
vector<Book> EventsHandler::allBooks = vector<Book>{};
vector<Book> EventsHandler::books = vector<Book>{};
vector<wstring> EventsHandler::parameters = vector<wstring>{L"Name", L"Author", L"ISBN", L"Pages", L"Year" };
vector<string> EventsHandler::sortKeys = vector<string>{};
bool EventsHandler::opened = false;
int EventsHandler::currentBook = 0;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinFormsProject::MainForm());
	return 0;
}