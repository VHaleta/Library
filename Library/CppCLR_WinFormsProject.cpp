#include "pch.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

string EventsHandler::fileName = "default";
vector<Book> EventsHandler::books = vector<Book>{};

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinFormsProject::MainForm());
	return 0;
}