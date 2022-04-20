#pragma once
#include "EventsHandler.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			dataGridViewLibrary->Columns->Add("name", "Name");
			dataGridViewLibrary->Columns->Add("author", "Author");
		}
	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewLibrary;
	private: System::Windows::Forms::MenuStrip^ menuMain;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiFile;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiFilter;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiOpen;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiSave;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiSaveAs;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialogLibrary;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialogLibrary;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewLibrary = (gcnew System::Windows::Forms::DataGridView());
			this->menuMain = (gcnew System::Windows::Forms::MenuStrip());
			this->mmiFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiFilter = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialogLibrary = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialogLibrary = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewLibrary))->BeginInit();
			this->menuMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewLibrary
			// 
			this->dataGridViewLibrary->AllowUserToAddRows = false;
			this->dataGridViewLibrary->AllowUserToDeleteRows = false;
			this->dataGridViewLibrary->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewLibrary->Location = System::Drawing::Point(11, 59);
			this->dataGridViewLibrary->Name = L"dataGridViewLibrary";
			this->dataGridViewLibrary->ReadOnly = true;
			this->dataGridViewLibrary->RowHeadersWidth = 51;
			this->dataGridViewLibrary->RowTemplate->Height = 24;
			this->dataGridViewLibrary->Size = System::Drawing::Size(605, 539);
			this->dataGridViewLibrary->TabIndex = 0;
			// 
			// menuMain
			// 
			this->menuMain->BackColor = System::Drawing::SystemColors::Control;
			this->menuMain->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuMain->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mmiFile, this->mmiFilter });
			this->menuMain->Location = System::Drawing::Point(0, 0);
			this->menuMain->Name = L"menuMain";
			this->menuMain->Size = System::Drawing::Size(1243, 36);
			this->menuMain->TabIndex = 1;
			this->menuMain->Text = L"menuStrip1";
			// 
			// mmiFile
			// 
			this->mmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mmiOpen, this->mmiSave,
					this->mmiSaveAs
			});
			this->mmiFile->Name = L"mmiFile";
			this->mmiFile->Size = System::Drawing::Size(74, 32);
			this->mmiFile->Text = L"Файл";
			// 
			// mmiOpen
			// 
			this->mmiOpen->Name = L"mmiOpen";
			this->mmiOpen->Size = System::Drawing::Size(224, 32);
			this->mmiOpen->Text = L"Відкрити";
			this->mmiOpen->Click += gcnew System::EventHandler(this, &MainForm::відкритиToolStripMenuItem_Click);
			// 
			// mmiSave
			// 
			this->mmiSave->Name = L"mmiSave";
			this->mmiSave->Size = System::Drawing::Size(224, 32);
			this->mmiSave->Text = L"Зберегти";
			this->mmiSave->Click += gcnew System::EventHandler(this, &MainForm::зберегтиToolStripMenuItem_Click);
			// 
			// mmiSaveAs
			// 
			this->mmiSaveAs->Name = L"mmiSaveAs";
			this->mmiSaveAs->Size = System::Drawing::Size(224, 32);
			this->mmiSaveAs->Text = L"Зберегти як...";
			this->mmiSaveAs->Click += gcnew System::EventHandler(this, &MainForm::зберегтиЯкToolStripMenuItem_Click);
			// 
			// mmiFilter
			// 
			this->mmiFilter->Name = L"mmiFilter";
			this->mmiFilter->Size = System::Drawing::Size(268, 32);
			this->mmiFilter->Text = L"Сортування/фільтрування";
			// 
			// openFileDialogLibrary
			// 
			this->openFileDialogLibrary->FileName = L"library.txt";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1243, 613);
			this->Controls->Add(this->dataGridViewLibrary);
			this->Controls->Add(this->menuMain);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuMain;
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"MainForm";
			this->Text = L"Бібліотека";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewLibrary))->EndInit();
			this->menuMain->ResumeLayout(false);
			this->menuMain->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridViewLibrary->Rows->Clear();
		if (System::Windows::Forms::DialogResult::OK != openFileDialogLibrary->ShowDialog()) return;

		String^ fileName = openFileDialogLibrary->FileName;
		Text = L"Бібліотека" + L" (файл:" + fileName + ")";
		EventsHandler().LoadFile(msclr::interop::marshal_as<std::string>(fileName), dataGridViewLibrary);
	}
	private: System::Void зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler().SaveFile();
	}
	private: System::Void зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (System::Windows::Forms::DialogResult::OK != saveFileDialogLibrary->ShowDialog()) return;

		String^ fileName = saveFileDialogLibrary->FileName;
		Text = L"Бібліотека" + L" (файл:" + fileName + ")";
		EventsHandler().SaveFile(msclr::interop::marshal_as<std::string>(fileName));
	}
	};
}
