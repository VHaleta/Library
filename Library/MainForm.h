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
			dataGridViewLibrary->Columns[0]->Width = 400;
			dataGridViewLibrary->Columns[1]->Width = 400;
			buttonNew->Enabled = false;
			groupBoxBook->Enabled = false;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxAuthor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxPubl;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBoxBook;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxYear;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxPages;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ створитиНовийToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonNew;
	private: System::Windows::Forms::ToolStripMenuItem^ закритиToolStripMenuItem;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridViewLibrary = (gcnew System::Windows::Forms::DataGridView());
			this->menuMain = (gcnew System::Windows::Forms::MenuStrip());
			this->mmiFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiOpen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->створитиНовийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiFilter = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialogLibrary = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialogLibrary = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPubl = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxBook = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxPages = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonNew = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewLibrary))->BeginInit();
			this->menuMain->SuspendLayout();
			this->groupBoxBook->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewLibrary
			// 
			this->dataGridViewLibrary->AllowUserToAddRows = false;
			this->dataGridViewLibrary->AllowUserToDeleteRows = false;
			this->dataGridViewLibrary->AllowUserToResizeColumns = false;
			this->dataGridViewLibrary->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->NullValue = L"d";
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewLibrary->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewLibrary->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewLibrary->Location = System::Drawing::Point(11, 59);
			this->dataGridViewLibrary->MultiSelect = false;
			this->dataGridViewLibrary->Name = L"dataGridViewLibrary";
			this->dataGridViewLibrary->ReadOnly = true;
			this->dataGridViewLibrary->RowHeadersWidth = 51;
			this->dataGridViewLibrary->RowTemplate->Height = 24;
			this->dataGridViewLibrary->Size = System::Drawing::Size(817, 539);
			this->dataGridViewLibrary->TabIndex = 0;
			this->dataGridViewLibrary->SelectionChanged += gcnew System::EventHandler(this, &MainForm::dataGridViewLibrary_SelectionChanged);
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
			this->menuMain->Size = System::Drawing::Size(1283, 36);
			this->menuMain->TabIndex = 1;
			this->menuMain->Text = L"menuStrip1";
			// 
			// mmiFile
			// 
			this->mmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mmiOpen, this->mmiSave,
					this->mmiSaveAs, this->створитиНовийToolStripMenuItem, this->закритиToolStripMenuItem
			});
			this->mmiFile->Name = L"mmiFile";
			this->mmiFile->Size = System::Drawing::Size(74, 32);
			this->mmiFile->Text = L"Файл";
			// 
			// mmiOpen
			// 
			this->mmiOpen->Name = L"mmiOpen";
			this->mmiOpen->Size = System::Drawing::Size(249, 32);
			this->mmiOpen->Text = L"Відкрити";
			this->mmiOpen->Click += gcnew System::EventHandler(this, &MainForm::відкритиToolStripMenuItem_Click);
			// 
			// mmiSave
			// 
			this->mmiSave->Name = L"mmiSave";
			this->mmiSave->Size = System::Drawing::Size(249, 32);
			this->mmiSave->Text = L"Зберегти";
			this->mmiSave->Click += gcnew System::EventHandler(this, &MainForm::зберегтиToolStripMenuItem_Click);
			// 
			// mmiSaveAs
			// 
			this->mmiSaveAs->Name = L"mmiSaveAs";
			this->mmiSaveAs->Size = System::Drawing::Size(249, 32);
			this->mmiSaveAs->Text = L"Зберегти як...";
			this->mmiSaveAs->Click += gcnew System::EventHandler(this, &MainForm::зберегтиЯкToolStripMenuItem_Click);
			// 
			// створитиНовийToolStripMenuItem
			// 
			this->створитиНовийToolStripMenuItem->Name = L"створитиНовийToolStripMenuItem";
			this->створитиНовийToolStripMenuItem->Size = System::Drawing::Size(249, 32);
			this->створитиНовийToolStripMenuItem->Text = L"Створити новий";
			// 
			// закритиToolStripMenuItem
			// 
			this->закритиToolStripMenuItem->Name = L"закритиToolStripMenuItem";
			this->закритиToolStripMenuItem->Size = System::Drawing::Size(249, 32);
			this->закритиToolStripMenuItem->Text = L"Закрити";
			this->закритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::закритиToolStripMenuItem_Click);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Назва";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(150, 33);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(261, 34);
			this->textBoxName->TabIndex = 3;
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Location = System::Drawing::Point(150, 73);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(261, 34);
			this->textBoxAuthor->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Автор";
			// 
			// textBoxPubl
			// 
			this->textBoxPubl->Location = System::Drawing::Point(150, 113);
			this->textBoxPubl->Name = L"textBoxPubl";
			this->textBoxPubl->Size = System::Drawing::Size(261, 34);
			this->textBoxPubl->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 28);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Видавництво";
			// 
			// groupBoxBook
			// 
			this->groupBoxBook->Controls->Add(this->buttonDelete);
			this->groupBoxBook->Controls->Add(this->buttonSave);
			this->groupBoxBook->Controls->Add(this->richTextBox1);
			this->groupBoxBook->Controls->Add(this->textBoxYear);
			this->groupBoxBook->Controls->Add(this->label5);
			this->groupBoxBook->Controls->Add(this->textBoxPages);
			this->groupBoxBook->Controls->Add(this->label4);
			this->groupBoxBook->Controls->Add(this->label1);
			this->groupBoxBook->Controls->Add(this->textBoxPubl);
			this->groupBoxBook->Controls->Add(this->textBoxName);
			this->groupBoxBook->Controls->Add(this->label3);
			this->groupBoxBook->Controls->Add(this->label2);
			this->groupBoxBook->Controls->Add(this->textBoxAuthor);
			this->groupBoxBook->Location = System::Drawing::Point(842, 130);
			this->groupBoxBook->Name = L"groupBoxBook";
			this->groupBoxBook->Size = System::Drawing::Size(429, 468);
			this->groupBoxBook->TabIndex = 8;
			this->groupBoxBook->TabStop = false;
			this->groupBoxBook->Text = L"Книга";
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(15, 404);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(172, 51);
			this->buttonDelete->TabIndex = 14;
			this->buttonDelete->Text = L"Видалити книгу";
			this->buttonDelete->UseVisualStyleBackColor = true;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(228, 404);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(172, 51);
			this->buttonSave->TabIndex = 13;
			this->buttonSave->Text = L"Зберегти зміни";
			this->buttonSave->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(6, 252);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(405, 146);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(228, 198);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(183, 34);
			this->textBoxYear->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(105, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 28);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Рік випуску";
			// 
			// textBoxPages
			// 
			this->textBoxPages->Location = System::Drawing::Point(228, 158);
			this->textBoxPages->Name = L"textBoxPages";
			this->textBoxPages->Size = System::Drawing::Size(183, 34);
			this->textBoxPages->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 28);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Кількість сторінок";
			// 
			// buttonNew
			// 
			this->buttonNew->Location = System::Drawing::Point(848, 81);
			this->buttonNew->Name = L"buttonNew";
			this->buttonNew->Size = System::Drawing::Size(199, 43);
			this->buttonNew->TabIndex = 9;
			this->buttonNew->Text = L"Створити книгу";
			this->buttonNew->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1283, 613);
			this->Controls->Add(this->buttonNew);
			this->Controls->Add(this->groupBoxBook);
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
			this->groupBoxBook->ResumeLayout(false);
			this->groupBoxBook->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma region MenuEvents
	private: System::Void відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		dataGridViewLibrary->Rows->Clear();
		ev.Clear();
		if (System::Windows::Forms::DialogResult::OK != openFileDialogLibrary->ShowDialog()) return;

		String^ fileName = openFileDialogLibrary->FileName;
		Text = L"Бібліотека" + L" (файл:" + fileName + ")";
		ev.LoadFile(msclr::interop::marshal_as<std::string>(fileName), dataGridViewLibrary);
		buttonNew->Enabled = true;
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
	private: System::Void закритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		ev.Clear();
		dataGridViewLibrary->Rows->Clear();
		buttonNew->Enabled = false;
		groupBoxBook->Enabled = false;
	}
#pragma endregion

	private: System::Void dataGridViewLibrary_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
	{
		int index = 0;
		if (dataGridViewLibrary->SelectedCells->Count < 1) return;
		index = dataGridViewLibrary->SelectedCells[0]->RowIndex;
		dataGridViewLibrary->Rows[index]->Selected = true;
		EventsHandler().LoadBook(index, textBoxName, textBoxAuthor, textBoxPubl, textBoxPages, textBoxYear);
		groupBoxBook->Enabled = true;
	}
	};
}
