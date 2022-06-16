﻿#pragma once
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
			dataGridViewLibrary->Columns[0]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			dataGridViewLibrary->Columns[1]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			buttonNew->Enabled = false;
			groupBoxBook->Enabled = false;
			groupBoxSort->Visible = false;
			comboBoxSort1->Items->Add(L"Назва");
			comboBoxSort1->Items->Add(L"Автор");
			comboBoxSort1->Items->Add(L"Видавництво");
			comboBoxSort1->Items->Add(L"К-сть сторінок");
			comboBoxSort1->Items->Add(L"Рік випуску");
			comboBoxSort2->Enabled = false;
			comboBoxSort3->Enabled = false;
			comboBoxSort4->Enabled = false;
			comboBoxSort5->Enabled = false;
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
	private: System::Windows::Forms::ToolStripMenuItem^ mmiCreateNew;

	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonNew;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiClose;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiSort;
	private: System::Windows::Forms::GroupBox^ groupBoxSort;
	private: System::Windows::Forms::ComboBox^ comboBoxSort5;
	private: System::Windows::Forms::ComboBox^ comboBoxSort4;
	private: System::Windows::Forms::ComboBox^ comboBoxSort3;
	private: System::Windows::Forms::ComboBox^ comboBoxSort2;
	private: System::Windows::Forms::ComboBox^ comboBoxSort1;
	private: System::Windows::Forms::Button^ buttonSortClear;

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
			this->mmiCreateNew = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiClose = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mmiSort = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxSort = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSortClear = (gcnew System::Windows::Forms::Button());
			this->comboBoxSort5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewLibrary))->BeginInit();
			this->menuMain->SuspendLayout();
			this->groupBoxBook->SuspendLayout();
			this->groupBoxSort->SuspendLayout();
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
			this->menuMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->mmiFile, this->mmiSort });
			this->menuMain->Location = System::Drawing::Point(0, 0);
			this->menuMain->Name = L"menuMain";
			this->menuMain->Size = System::Drawing::Size(1283, 29);
			this->menuMain->TabIndex = 1;
			this->menuMain->Text = L"menuStrip1";
			// 
			// mmiFile
			// 
			this->mmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->mmiOpen, this->mmiSave,
					this->mmiSaveAs, this->mmiCreateNew, this->mmiClose
			});
			this->mmiFile->Name = L"mmiFile";
			this->mmiFile->Size = System::Drawing::Size(59, 25);
			this->mmiFile->Text = L"Файл";
			// 
			// mmiOpen
			// 
			this->mmiOpen->Name = L"mmiOpen";
			this->mmiOpen->Size = System::Drawing::Size(196, 26);
			this->mmiOpen->Text = L"Відкрити";
			this->mmiOpen->Click += gcnew System::EventHandler(this, &MainForm::mmiOpen_Click);
			// 
			// mmiSave
			// 
			this->mmiSave->Name = L"mmiSave";
			this->mmiSave->Size = System::Drawing::Size(196, 26);
			this->mmiSave->Text = L"Зберегти";
			this->mmiSave->Click += gcnew System::EventHandler(this, &MainForm::mmiSave_Click);
			// 
			// mmiSaveAs
			// 
			this->mmiSaveAs->Name = L"mmiSaveAs";
			this->mmiSaveAs->Size = System::Drawing::Size(196, 26);
			this->mmiSaveAs->Text = L"Зберегти як...";
			this->mmiSaveAs->Click += gcnew System::EventHandler(this, &MainForm::mmiSaveAs_Click);
			// 
			// mmiCreateNew
			// 
			this->mmiCreateNew->Enabled = false;
			this->mmiCreateNew->Name = L"mmiCreateNew";
			this->mmiCreateNew->Size = System::Drawing::Size(196, 26);
			this->mmiCreateNew->Text = L"Створити новий";
			this->mmiCreateNew->Click += gcnew System::EventHandler(this, &MainForm::mmiCreateNew_Click);
			// 
			// mmiClose
			// 
			this->mmiClose->Name = L"mmiClose";
			this->mmiClose->Size = System::Drawing::Size(196, 26);
			this->mmiClose->Text = L"Закрити";
			this->mmiClose->Click += gcnew System::EventHandler(this, &MainForm::mmiClose_Click);
			// 
			// mmiSort
			// 
			this->mmiSort->Name = L"mmiSort";
			this->mmiSort->Size = System::Drawing::Size(107, 25);
			this->mmiSort->Text = L"Сортування";
			this->mmiSort->Click += gcnew System::EventHandler(this, &MainForm::mmiSort_Click);
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
			this->label1->Size = System::Drawing::Size(52, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Назва";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(150, 33);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(261, 29);
			this->textBoxName->TabIndex = 3;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxName_TextChanged);
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Location = System::Drawing::Point(150, 73);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(261, 29);
			this->textBoxAuthor->TabIndex = 5;
			this->textBoxAuthor->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxAuthor_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Автор";
			// 
			// textBoxPubl
			// 
			this->textBoxPubl->Location = System::Drawing::Point(150, 113);
			this->textBoxPubl->Name = L"textBoxPubl";
			this->textBoxPubl->Size = System::Drawing::Size(261, 29);
			this->textBoxPubl->TabIndex = 7;
			this->textBoxPubl->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxPubl_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 21);
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
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MainForm::buttonDelete_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(228, 404);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(172, 51);
			this->buttonSave->TabIndex = 13;
			this->buttonSave->Text = L"Зберегти зміни";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &MainForm::buttonSave_Click);
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
			this->textBoxYear->Size = System::Drawing::Size(183, 29);
			this->textBoxYear->TabIndex = 11;
			this->textBoxYear->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxYear_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(105, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 21);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Рік випуску";
			// 
			// textBoxPages
			// 
			this->textBoxPages->Location = System::Drawing::Point(228, 158);
			this->textBoxPages->Name = L"textBoxPages";
			this->textBoxPages->Size = System::Drawing::Size(183, 29);
			this->textBoxPages->TabIndex = 9;
			this->textBoxPages->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxPages_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 21);
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
			this->buttonNew->Click += gcnew System::EventHandler(this, &MainForm::buttonNew_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(424, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(366, 29);
			this->textBox1->TabIndex = 10;
			// 
			// groupBoxSort
			// 
			this->groupBoxSort->Controls->Add(this->buttonSortClear);
			this->groupBoxSort->Controls->Add(this->comboBoxSort5);
			this->groupBoxSort->Controls->Add(this->comboBoxSort4);
			this->groupBoxSort->Controls->Add(this->comboBoxSort3);
			this->groupBoxSort->Controls->Add(this->comboBoxSort2);
			this->groupBoxSort->Controls->Add(this->comboBoxSort1);
			this->groupBoxSort->Location = System::Drawing::Point(69, 32);
			this->groupBoxSort->Name = L"groupBoxSort";
			this->groupBoxSort->Size = System::Drawing::Size(227, 254);
			this->groupBoxSort->TabIndex = 11;
			this->groupBoxSort->TabStop = false;
			this->groupBoxSort->Text = L"Сортування";
			// 
			// buttonSortClear
			// 
			this->buttonSortClear->Location = System::Drawing::Point(29, 206);
			this->buttonSortClear->Name = L"buttonSortClear";
			this->buttonSortClear->Size = System::Drawing::Size(168, 36);
			this->buttonSortClear->TabIndex = 2;
			this->buttonSortClear->Text = L"Скинути";
			this->buttonSortClear->UseVisualStyleBackColor = true;
			this->buttonSortClear->Click += gcnew System::EventHandler(this, &MainForm::buttonSortClear_Click);
			// 
			// comboBoxSort5
			// 
			this->comboBoxSort5->FormattingEnabled = true;
			this->comboBoxSort5->Location = System::Drawing::Point(29, 169);
			this->comboBoxSort5->Name = L"comboBoxSort5";
			this->comboBoxSort5->Size = System::Drawing::Size(168, 29);
			this->comboBoxSort5->TabIndex = 1;
			this->comboBoxSort5->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxSort5_SelectedIndexChanged);
			// 
			// comboBoxSort4
			// 
			this->comboBoxSort4->FormattingEnabled = true;
			this->comboBoxSort4->Location = System::Drawing::Point(29, 134);
			this->comboBoxSort4->Name = L"comboBoxSort4";
			this->comboBoxSort4->Size = System::Drawing::Size(168, 29);
			this->comboBoxSort4->TabIndex = 1;
			this->comboBoxSort4->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxSort4_SelectedIndexChanged);
			// 
			// comboBoxSort3
			// 
			this->comboBoxSort3->FormattingEnabled = true;
			this->comboBoxSort3->Location = System::Drawing::Point(29, 98);
			this->comboBoxSort3->Name = L"comboBoxSort3";
			this->comboBoxSort3->Size = System::Drawing::Size(168, 29);
			this->comboBoxSort3->TabIndex = 1;
			this->comboBoxSort3->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxSort3_SelectedIndexChanged);
			// 
			// comboBoxSort2
			// 
			this->comboBoxSort2->FormattingEnabled = true;
			this->comboBoxSort2->Location = System::Drawing::Point(29, 63);
			this->comboBoxSort2->Name = L"comboBoxSort2";
			this->comboBoxSort2->Size = System::Drawing::Size(168, 29);
			this->comboBoxSort2->TabIndex = 1;
			this->comboBoxSort2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxSort2_SelectedIndexChanged);
			// 
			// comboBoxSort1
			// 
			this->comboBoxSort1->FormattingEnabled = true;
			this->comboBoxSort1->Location = System::Drawing::Point(29, 28);
			this->comboBoxSort1->Name = L"comboBoxSort1";
			this->comboBoxSort1->Size = System::Drawing::Size(168, 29);
			this->comboBoxSort1->TabIndex = 0;
			this->comboBoxSort1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxSort1_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1283, 613);
			this->Controls->Add(this->groupBoxSort);
			this->Controls->Add(this->textBox1);
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
			this->groupBoxSort->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma region MenuEvents
	private: System::Void mmiOpen_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		ev.Clear();
		if (System::Windows::Forms::DialogResult::OK != openFileDialogLibrary->ShowDialog()) return;

		String^ fileName = openFileDialogLibrary->FileName;
		Text = L"Бібліотека" + L" (файл:" + fileName + ")";
		ev.LoadFile(msclr::interop::marshal_as<std::string>(fileName));
		UpdateDataGridView(0);
	}
	private: System::Void mmiSave_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler().SaveFile();
	}
	private: System::Void mmiSaveAs_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (System::Windows::Forms::DialogResult::OK != saveFileDialogLibrary->ShowDialog()) return;

		String^ fileName = saveFileDialogLibrary->FileName;
		Text = L"Бібліотека" + L" (файл:" + fileName + ")";
		EventsHandler().SaveFile(msclr::interop::marshal_as<std::string>(fileName));
	}
	private: System::Void mmiClose_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		ev.Clear();
		TextBoxClear();
		dataGridViewLibrary->Rows->Clear();
		buttonNew->Enabled = false;
		groupBoxBook->Enabled = false;
	}
	private: System::Void mmiCreateNew_Click(System::Object^ sender, System::EventArgs^ e)
	{

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
		buttonSave->Enabled = false;
	}
	private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSave->Enabled = true;
	}
	private: System::Void textBoxAuthor_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSave->Enabled = true;
	}
	private: System::Void textBoxPubl_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSave->Enabled = true;
	}
	private: System::Void textBoxPages_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSave->Enabled = true;
	}
	private: System::Void textBoxYear_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSave->Enabled = true;
	}
	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		int index = dataGridViewLibrary->SelectedCells[0]->RowIndex;
		ev.SaveBook(index, textBoxName, textBoxAuthor, textBoxPubl, textBoxPages, textBoxYear);
		UpdateDataGridView(index);
	}
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		ev.DeleteBook(dataGridViewLibrary->SelectedCells[0]->RowIndex);
		UpdateDataGridView(0);
	}
	private: System::Void buttonNew_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		ev.CreateBook();
		UpdateDataGridView(dataGridViewLibrary->RowCount);
	}
	private: System::Void TextBoxClear()
	{
		textBoxName->Text = "";
		textBoxAuthor->Text = "";
		textBoxPubl->Text = "";
		textBoxPages->Text = "";
		textBoxYear->Text = "";
	}
	private: System::Void UpdateDataGridView(int selectionIndex)
	{
		dataGridViewLibrary->Rows->Clear();
		EventsHandler().LoadDataGridView(dataGridViewLibrary);
		dataGridViewLibrary->ClearSelection();
		dataGridViewLibrary->Rows[selectionIndex]->Selected = true;
		buttonSave->Enabled = false;
		buttonNew->Enabled = true;
	}
	private: System::Void mmiSort_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBoxSort->Visible = !groupBoxSort->Visible;
	}
	private: System::Void comboBoxSort1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort2->Enabled = true;
		comboBoxSort3->Enabled = false;
		comboBoxSort4->Enabled = false;
		comboBoxSort5->Enabled = false;
		comboBoxSort2->Items->Clear();
		comboBoxSort3->Items->Clear();
		comboBoxSort4->Items->Clear();
		comboBoxSort5->Items->Clear();
		comboBoxSort2->ResetText();
		comboBoxSort3->ResetText();
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(1);
	}
	private: System::Void UpdateComboBoxSave(int c)
	{
		List<String^>^ l = gcnew List<String^>();
		Dictionary<String^, bool> add;
		const int n = 5;
		l->Add(L"Назва");
		l->Add(L"Автор");
		l->Add(L"Видавництво");
		l->Add(L"К-сть сторінок");
		l->Add(L"Рік випуску");

		add.Add(l[0], true);
		add.Add(l[1], true);
		add.Add(l[2], true);
		add.Add(l[3], true);
		add.Add(l[4], true);
		add.Add("", false);


		switch (c)
		{
		case 1:
			add[comboBoxSort1->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (add[l[i]]) comboBoxSort2->Items->Add(l[i]);
			break;
		case 2:
			add[comboBoxSort1->SelectedItem->ToString()] = false;
			add[comboBoxSort2->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (add[l[i]]) comboBoxSort3->Items->Add(l[i]);
			break;
		case 3:
			add[comboBoxSort1->SelectedItem->ToString()] = false;
			add[comboBoxSort2->SelectedItem->ToString()] = false;
			add[comboBoxSort3->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (add[l[i]]) comboBoxSort4->Items->Add(l[i]);
			break;
		case 4:
			add[comboBoxSort1->SelectedItem->ToString()] = false;
			add[comboBoxSort2->SelectedItem->ToString()] = false;
			add[comboBoxSort3->SelectedItem->ToString()] = false;
			add[comboBoxSort4->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (add[l[i]]) comboBoxSort5->Items->Add(l[i]);
			break;
		default:
			break;
		}


	}
	private: System::Void comboBoxSort2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort3->Enabled = true;
		comboBoxSort4->Enabled = false;
		comboBoxSort5->Enabled = false;
		comboBoxSort3->Items->Clear();
		comboBoxSort4->Items->Clear();
		comboBoxSort5->Items->Clear();
		comboBoxSort3->ResetText();
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(2);
	}
	private: System::Void comboBoxSort3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort4->Enabled = true;
		comboBoxSort5->Enabled = false;
		comboBoxSort4->Items->Clear();
		comboBoxSort5->Items->Clear();
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(3);
	}
	private: System::Void comboBoxSort4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort5->Enabled = true;
		comboBoxSort5->Items->Clear();
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(4);
	}
	private: System::Void comboBoxSort5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void buttonSortClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort2->Enabled = false;
		comboBoxSort3->Enabled = false;
		comboBoxSort4->Enabled = false;
		comboBoxSort5->Enabled = false;
		comboBoxSort2->Items->Clear();
		comboBoxSort3->Items->Clear();
		comboBoxSort4->Items->Clear();
		comboBoxSort5->Items->Clear();
		comboBoxSort1->ResetText();
		comboBoxSort2->ResetText();
		comboBoxSort3->ResetText();
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
	}
};
}
