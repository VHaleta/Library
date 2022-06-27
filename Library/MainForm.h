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
			dataGridViewLibrary->Columns[1]->Width = 365;
			dataGridViewLibrary->Columns[0]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			dataGridViewLibrary->Columns[1]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			groupBoxBook->Enabled = false;
			groupBoxSort->Visible = false;
			comboBoxSort1->Items->Add(L"Name");
			comboBoxSort1->Items->Add(L"Author");
			comboBoxSort1->Items->Add(L"Publishing House");
			comboBoxSort1->Items->Add(L"Pages");
			comboBoxSort1->Items->Add(L"Year");
			comboBoxSort2->Enabled = false;
			comboBoxSort3->Enabled = false;
			comboBoxSort4->Enabled = false;
			comboBoxSort5->Enabled = false;
			buttonSearch->BackgroundImage = System::Drawing::Image::FromFile(L"res/search_icon.png");
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
	private: System::Windows::Forms::Button^ buttonDeleteBook;


	private: System::Windows::Forms::Button^ buttonSaveBook;

	private: System::Windows::Forms::Button^ buttonNew;
	private: System::Windows::Forms::ToolStripMenuItem^ mmiClose;
	private: System::Windows::Forms::TextBox^ textBoxSearch;


	private: System::Windows::Forms::ToolStripMenuItem^ mmiOrderBy;

	private: System::Windows::Forms::GroupBox^ groupBoxSort;
	private: System::Windows::Forms::ComboBox^ comboBoxSort5;
	private: System::Windows::Forms::ComboBox^ comboBoxSort4;
	private: System::Windows::Forms::ComboBox^ comboBoxSort3;
	private: System::Windows::Forms::ComboBox^ comboBoxSort2;
	private: System::Windows::Forms::ComboBox^ comboBoxSort1;
	private: System::Windows::Forms::Button^ buttonSortClear;
	private: System::Windows::Forms::Button^ buttonApplySort;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::GroupBox^ groupBoxColumns;
	private: System::Windows::Forms::CheckBox^ checkBoxColYear;
	private: System::Windows::Forms::CheckBox^ checkBoxColPages;
	private: System::Windows::Forms::CheckBox^ checkBoxColAuthor;
	private: System::Windows::Forms::CheckBox^ checkBoxColName;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutPogramToolStripMenuItem;






	private: System::ComponentModel::IContainer^ components;


	private:


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
			this->mmiOrderBy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialogLibrary = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialogLibrary = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPubl = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxBook = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDeleteBook = (gcnew System::Windows::Forms::Button());
			this->buttonSaveBook = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxPages = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonNew = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxSort = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplySort = (gcnew System::Windows::Forms::Button());
			this->buttonSortClear = (gcnew System::Windows::Forms::Button());
			this->comboBoxSort5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSort1 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->groupBoxColumns = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxColYear = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxColPages = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxColAuthor = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxColName = (gcnew System::Windows::Forms::CheckBox());
			this->aboutPogramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewLibrary))->BeginInit();
			this->menuMain->SuspendLayout();
			this->groupBoxBook->SuspendLayout();
			this->groupBoxSort->SuspendLayout();
			this->groupBoxColumns->SuspendLayout();
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
			this->menuMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mmiFile, this->mmiOrderBy,
					this->aboutPogramToolStripMenuItem
			});
			this->menuMain->Location = System::Drawing::Point(0, 0);
			this->menuMain->Name = L"menuMain";
			this->menuMain->Size = System::Drawing::Size(1202, 29);
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
			this->mmiFile->Size = System::Drawing::Size(46, 25);
			this->mmiFile->Text = L"File";
			// 
			// mmiOpen
			// 
			this->mmiOpen->Name = L"mmiOpen";
			this->mmiOpen->Size = System::Drawing::Size(158, 26);
			this->mmiOpen->Text = L"Open...";
			this->mmiOpen->Click += gcnew System::EventHandler(this, &MainForm::mmiOpen_Click);
			// 
			// mmiSave
			// 
			this->mmiSave->Name = L"mmiSave";
			this->mmiSave->Size = System::Drawing::Size(158, 26);
			this->mmiSave->Text = L"Save";
			this->mmiSave->Click += gcnew System::EventHandler(this, &MainForm::mmiSave_Click);
			// 
			// mmiSaveAs
			// 
			this->mmiSaveAs->Name = L"mmiSaveAs";
			this->mmiSaveAs->Size = System::Drawing::Size(158, 26);
			this->mmiSaveAs->Text = L"Save as...";
			this->mmiSaveAs->Click += gcnew System::EventHandler(this, &MainForm::mmiSaveAs_Click);
			// 
			// mmiCreateNew
			// 
			this->mmiCreateNew->Name = L"mmiCreateNew";
			this->mmiCreateNew->Size = System::Drawing::Size(158, 26);
			this->mmiCreateNew->Text = L"Create new";
			this->mmiCreateNew->Click += gcnew System::EventHandler(this, &MainForm::mmiCreateNew_Click);
			// 
			// mmiClose
			// 
			this->mmiClose->Name = L"mmiClose";
			this->mmiClose->Size = System::Drawing::Size(158, 26);
			this->mmiClose->Text = L"Close";
			this->mmiClose->Click += gcnew System::EventHandler(this, &MainForm::mmiClose_Click);
			// 
			// mmiOrderBy
			// 
			this->mmiOrderBy->Name = L"mmiOrderBy";
			this->mmiOrderBy->Size = System::Drawing::Size(80, 25);
			this->mmiOrderBy->Text = L"OrderBy";
			this->mmiOrderBy->Click += gcnew System::EventHandler(this, &MainForm::mmiOrderBy_Click);
			// 
			// openFileDialogLibrary
			// 
			this->openFileDialogLibrary->FileName = L"library.txt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(150, 32);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(181, 29);
			this->textBoxName->TabIndex = 3;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxName_TextChanged);
			// 
			// textBoxAuthor
			// 
			this->textBoxAuthor->Location = System::Drawing::Point(150, 67);
			this->textBoxAuthor->Name = L"textBoxAuthor";
			this->textBoxAuthor->Size = System::Drawing::Size(181, 29);
			this->textBoxAuthor->TabIndex = 5;
			this->textBoxAuthor->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxAuthor_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Author";
			// 
			// textBoxPubl
			// 
			this->textBoxPubl->Location = System::Drawing::Point(150, 102);
			this->textBoxPubl->Name = L"textBoxPubl";
			this->textBoxPubl->Size = System::Drawing::Size(181, 29);
			this->textBoxPubl->TabIndex = 7;
			this->textBoxPubl->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxPubl_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Publishing House";
			// 
			// groupBoxBook
			// 
			this->groupBoxBook->Controls->Add(this->buttonDeleteBook);
			this->groupBoxBook->Controls->Add(this->buttonSaveBook);
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
			this->groupBoxBook->Location = System::Drawing::Point(840, 177);
			this->groupBoxBook->Name = L"groupBoxBook";
			this->groupBoxBook->Size = System::Drawing::Size(351, 421);
			this->groupBoxBook->TabIndex = 8;
			this->groupBoxBook->TabStop = false;
			this->groupBoxBook->Text = L"Book";
			// 
			// buttonDeleteBook
			// 
			this->buttonDeleteBook->Location = System::Drawing::Point(17, 352);
			this->buttonDeleteBook->Name = L"buttonDeleteBook";
			this->buttonDeleteBook->Size = System::Drawing::Size(148, 51);
			this->buttonDeleteBook->TabIndex = 14;
			this->buttonDeleteBook->Text = L"Delete book";
			this->buttonDeleteBook->UseVisualStyleBackColor = true;
			this->buttonDeleteBook->Click += gcnew System::EventHandler(this, &MainForm::buttonDeleteBook_Click);
			// 
			// buttonSaveBook
			// 
			this->buttonSaveBook->Location = System::Drawing::Point(181, 352);
			this->buttonSaveBook->Name = L"buttonSaveBook";
			this->buttonSaveBook->Size = System::Drawing::Size(148, 51);
			this->buttonSaveBook->TabIndex = 13;
			this->buttonSaveBook->Text = L"Save changes";
			this->buttonSaveBook->UseVisualStyleBackColor = true;
			this->buttonSaveBook->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveBook_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(6, 200);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(333, 146);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(217, 146);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(114, 29);
			this->textBoxYear->TabIndex = 11;
			this->textBoxYear->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxYear_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(177, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 21);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Year";
			// 
			// textBoxPages
			// 
			this->textBoxPages->Location = System::Drawing::Point(57, 146);
			this->textBoxPages->Name = L"textBoxPages";
			this->textBoxPages->Size = System::Drawing::Size(114, 29);
			this->textBoxPages->TabIndex = 9;
			this->textBoxPages->TextChanged += gcnew System::EventHandler(this, &MainForm::textBoxPages_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Pages";
			// 
			// buttonNew
			// 
			this->buttonNew->Location = System::Drawing::Point(874, 130);
			this->buttonNew->Name = L"buttonNew";
			this->buttonNew->Size = System::Drawing::Size(199, 41);
			this->buttonNew->TabIndex = 9;
			this->buttonNew->Text = L"Create book";
			this->buttonNew->UseVisualStyleBackColor = true;
			this->buttonNew->Click += gcnew System::EventHandler(this, &MainForm::buttonNew_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(427, 24);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(366, 29);
			this->textBoxSearch->TabIndex = 10;
			// 
			// groupBoxSort
			// 
			this->groupBoxSort->Controls->Add(this->buttonApplySort);
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
			this->groupBoxSort->Text = L"Ordering";
			// 
			// buttonApplySort
			// 
			this->buttonApplySort->Location = System::Drawing::Point(29, 204);
			this->buttonApplySort->Name = L"buttonApplySort";
			this->buttonApplySort->Size = System::Drawing::Size(75, 36);
			this->buttonApplySort->TabIndex = 12;
			this->buttonApplySort->Text = L"Apply";
			this->buttonApplySort->UseVisualStyleBackColor = true;
			this->buttonApplySort->Click += gcnew System::EventHandler(this, &MainForm::buttonApplySort_Click);
			// 
			// buttonSortClear
			// 
			this->buttonSortClear->Location = System::Drawing::Point(122, 204);
			this->buttonSortClear->Name = L"buttonSortClear";
			this->buttonSortClear->Size = System::Drawing::Size(75, 36);
			this->buttonSortClear->TabIndex = 2;
			this->buttonSortClear->Text = L"Clear";
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
			// buttonSearch
			// 
			this->buttonSearch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSearch->Location = System::Drawing::Point(799, 24);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(29, 29);
			this->buttonSearch->TabIndex = 13;
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MainForm::buttonSearch_Click);
			// 
			// groupBoxColumns
			// 
			this->groupBoxColumns->Controls->Add(this->checkBoxColYear);
			this->groupBoxColumns->Controls->Add(this->checkBoxColPages);
			this->groupBoxColumns->Controls->Add(this->checkBoxColAuthor);
			this->groupBoxColumns->Controls->Add(this->checkBoxColName);
			this->groupBoxColumns->Location = System::Drawing::Point(842, 24);
			this->groupBoxColumns->Name = L"groupBoxColumns";
			this->groupBoxColumns->Size = System::Drawing::Size(272, 100);
			this->groupBoxColumns->TabIndex = 14;
			this->groupBoxColumns->TabStop = false;
			this->groupBoxColumns->Text = L"Columns";
			// 
			// checkBoxColYear
			// 
			this->checkBoxColYear->AutoSize = true;
			this->checkBoxColYear->Location = System::Drawing::Point(122, 59);
			this->checkBoxColYear->Name = L"checkBoxColYear";
			this->checkBoxColYear->Size = System::Drawing::Size(59, 25);
			this->checkBoxColYear->TabIndex = 3;
			this->checkBoxColYear->Text = L"Year";
			this->checkBoxColYear->UseVisualStyleBackColor = true;
			this->checkBoxColYear->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxColYear_CheckedChanged);
			// 
			// checkBoxColPages
			// 
			this->checkBoxColPages->AutoSize = true;
			this->checkBoxColPages->Location = System::Drawing::Point(122, 28);
			this->checkBoxColPages->Name = L"checkBoxColPages";
			this->checkBoxColPages->Size = System::Drawing::Size(69, 25);
			this->checkBoxColPages->TabIndex = 2;
			this->checkBoxColPages->Text = L"Pages";
			this->checkBoxColPages->UseVisualStyleBackColor = true;
			this->checkBoxColPages->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxColPages_CheckedChanged);
			// 
			// checkBoxColAuthor
			// 
			this->checkBoxColAuthor->AutoSize = true;
			this->checkBoxColAuthor->Checked = true;
			this->checkBoxColAuthor->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxColAuthor->Location = System::Drawing::Point(15, 59);
			this->checkBoxColAuthor->Name = L"checkBoxColAuthor";
			this->checkBoxColAuthor->Size = System::Drawing::Size(77, 25);
			this->checkBoxColAuthor->TabIndex = 1;
			this->checkBoxColAuthor->Text = L"Author";
			this->checkBoxColAuthor->UseVisualStyleBackColor = true;
			this->checkBoxColAuthor->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxColAuthor_CheckedChanged);
			// 
			// checkBoxColName
			// 
			this->checkBoxColName->AutoSize = true;
			this->checkBoxColName->Checked = true;
			this->checkBoxColName->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxColName->Location = System::Drawing::Point(15, 28);
			this->checkBoxColName->Name = L"checkBoxColName";
			this->checkBoxColName->Size = System::Drawing::Size(71, 25);
			this->checkBoxColName->TabIndex = 0;
			this->checkBoxColName->Text = L"Name";
			this->checkBoxColName->UseVisualStyleBackColor = true;
			this->checkBoxColName->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBoxColName_CheckedChanged);
			// 
			// aboutPogramToolStripMenuItem
			// 
			this->aboutPogramToolStripMenuItem->Name = L"aboutPogramToolStripMenuItem";
			this->aboutPogramToolStripMenuItem->Size = System::Drawing::Size(117, 25);
			this->aboutPogramToolStripMenuItem->Text = L"About Library";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1202, 613);
			this->Controls->Add(this->groupBoxColumns);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->groupBoxSort);
			this->Controls->Add(this->textBoxSearch);
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
			this->Text = L"Library";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewLibrary))->EndInit();
			this->menuMain->ResumeLayout(false);
			this->menuMain->PerformLayout();
			this->groupBoxBook->ResumeLayout(false);
			this->groupBoxBook->PerformLayout();
			this->groupBoxSort->ResumeLayout(false);
			this->groupBoxColumns->ResumeLayout(false);
			this->groupBoxColumns->PerformLayout();
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
		Text = L"Library" + L" (file:" + fileName + ")";
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
		EventsHandler().Clear();
		UpdateDataGridView(0);
	}
	private: System::Void mmiOrderBy_Click(System::Object^ sender, System::EventArgs^ e) {
		if (groupBoxSort->Visible)
			dataGridViewLibrary->Focus();
		groupBoxSort->Visible = !groupBoxSort->Visible;
	}
#pragma endregion

#pragma region BookBox
	private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSaveBook->Enabled = true;
	}
	private: System::Void textBoxAuthor_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSaveBook->Enabled = true;
	}
	private: System::Void textBoxPubl_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSaveBook->Enabled = true;
	}
	private: System::Void textBoxPages_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSaveBook->Enabled = true;
	}
	private: System::Void textBoxYear_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		buttonSaveBook->Enabled = true;
	}
	private: System::Void buttonSaveBook_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		int index = dataGridViewLibrary->SelectedCells[0]->RowIndex;
		ev.SaveBook(index, textBoxName, textBoxAuthor, textBoxPubl, textBoxPages, textBoxYear);
		UpdateDataGridView(index);
	}
	private: System::Void buttonDeleteBook_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EventsHandler ev;
		ev.DeleteBook(dataGridViewLibrary->SelectedCells[0]->RowIndex);
		UpdateDataGridView(0);
	}
#pragma endregion

#pragma region comboBoxEvents
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
		comboBoxSort2->SelectedItem = nullptr;
		comboBoxSort3->SelectedItem = nullptr;
		comboBoxSort4->SelectedItem = nullptr;
		comboBoxSort5->SelectedItem = nullptr;
		comboBoxSort2->ResetText();
		comboBoxSort3->ResetText();
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(1);
	}
	private: System::Void comboBoxSort2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort3->Enabled = true;
		comboBoxSort4->Enabled = false;
		comboBoxSort5->Enabled = false;
		comboBoxSort3->Items->Clear();
		comboBoxSort4->Items->Clear();
		comboBoxSort5->Items->Clear();
		comboBoxSort3->SelectedItem = nullptr;
		comboBoxSort4->SelectedItem = nullptr;
		comboBoxSort5->SelectedItem = nullptr;
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
		comboBoxSort4->SelectedItem = nullptr;
		comboBoxSort5->SelectedItem = nullptr;
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(3);
	}
	private: System::Void comboBoxSort4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort5->Enabled = true;
		comboBoxSort5->Items->Clear();
		comboBoxSort5->SelectedItem = "";
		comboBoxSort5->ResetText();
		UpdateComboBoxSave(4);
	}
	private: System::Void comboBoxSort5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void buttonSortClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		comboBoxSort1->SelectedItem = nullptr;
		comboBoxSort2->SelectedItem = nullptr;
		comboBoxSort3->SelectedItem = nullptr;
		comboBoxSort4->SelectedItem = nullptr;
		comboBoxSort5->SelectedItem = nullptr;
		comboBoxSort1->ResetText();
		comboBoxSort2->ResetText();
		comboBoxSort3->ResetText();
		comboBoxSort4->ResetText();
		comboBoxSort5->ResetText();
		comboBoxSort2->Enabled = false;
		comboBoxSort3->Enabled = false;
		comboBoxSort4->Enabled = false;
		comboBoxSort5->Enabled = false;
		comboBoxSort2->Items->Clear();
		comboBoxSort3->Items->Clear();
		comboBoxSort4->Items->Clear();
		comboBoxSort5->Items->Clear();
		groupBoxSort->Visible = false;
		dataGridViewLibrary->Focus();
		if (dataGridViewLibrary->RowCount == 0)
			return;
		UpdateDataGridView(0);
	}
	private: System::Void buttonApplySort_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBoxSort->Visible = false;
		dataGridViewLibrary->Focus();
		if (dataGridViewLibrary->RowCount == 0)
			return;
		UpdateDataGridView(0);
	}
	private: System::Void UpdateComboBoxSave(int c)
	{
		List<String^>^ l = gcnew List<String^>();
		Dictionary<String^, bool> parameters;
		const int n = 5;
		l->Add(L"Name");
		l->Add(L"Author");
		l->Add(L"Publishing House");
		l->Add(L"Pages");
		l->Add(L"Year");

		parameters.Add(l[0], true);
		parameters.Add(l[1], true);
		parameters.Add(l[2], true);
		parameters.Add(l[3], true);
		parameters.Add(l[4], true);
		parameters.Add("", false);


		switch (c)
		{
		case 1:
			if (comboBoxSort1->SelectedItem == nullptr) return;
			parameters[comboBoxSort1->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (parameters[l[i]]) comboBoxSort2->Items->Add(l[i]);
			break;
		case 2:
			if (comboBoxSort2->SelectedItem == nullptr) return;
			parameters[comboBoxSort1->SelectedItem->ToString()] = false;
			parameters[comboBoxSort2->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (parameters[l[i]]) comboBoxSort3->Items->Add(l[i]);
			break;
		case 3:
			if (comboBoxSort3->SelectedItem == nullptr) return;
			parameters[comboBoxSort1->SelectedItem->ToString()] = false;
			parameters[comboBoxSort2->SelectedItem->ToString()] = false;
			parameters[comboBoxSort3->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (parameters[l[i]]) comboBoxSort4->Items->Add(l[i]);
			break;
		case 4:
			if (comboBoxSort4->SelectedItem == nullptr) return;
			parameters[comboBoxSort1->SelectedItem->ToString()] = false;
			parameters[comboBoxSort2->SelectedItem->ToString()] = false;
			parameters[comboBoxSort3->SelectedItem->ToString()] = false;
			parameters[comboBoxSort4->SelectedItem->ToString()] = false;
			for (int i = 0; i < n; i++)
				if (parameters[l[i]]) comboBoxSort5->Items->Add(l[i]);
			break;
		default:
			break;
		}
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
		buttonSaveBook->Enabled = false;
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
		List<ComboBox^>^ sort = gcnew List<ComboBox^>();
		sort->Add(comboBoxSort1);
		sort->Add(comboBoxSort2);
		sort->Add(comboBoxSort3);
		sort->Add(comboBoxSort4);
		sort->Add(comboBoxSort5);
		EventsHandler().LoadDataGridView(dataGridViewLibrary, sort, textBoxSearch->Text, LoadColumns());
		dataGridViewLibrary->ClearSelection();
		if (dataGridViewLibrary->RowCount > 1)
			dataGridViewLibrary->Rows[selectionIndex]->Selected = true;
		buttonSaveBook->Enabled = false;
		buttonNew->Enabled = true;
	}

	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataGridView(0);
		dataGridViewLibrary->Focus();
	}
	private: System::Void checkBoxColName_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataGridView(0);
		dataGridViewLibrary->Focus();
	}
	private: List<bool>^ LoadColumns()
	{
		int size = 765;
		List<bool>^ result = gcnew List<bool>();
		dataGridViewLibrary->Columns->Clear();

		result->Add(checkBoxColName->Checked);
		result->Add(checkBoxColAuthor->Checked);
		result->Add(checkBoxColPages->Checked);
		result->Add(checkBoxColYear->Checked);

		if (checkBoxColName->Checked)
			dataGridViewLibrary->Columns->Add("Name", "Name");
		if (checkBoxColAuthor->Checked)
			dataGridViewLibrary->Columns->Add("Author", "Author");
		if (checkBoxColPages->Checked)
			dataGridViewLibrary->Columns->Add("Pages", "Pages");
		if (checkBoxColYear->Checked)
			dataGridViewLibrary->Columns->Add("Year", "Year");

		for (int i = 0; i < dataGridViewLibrary->ColumnCount; i++)
		{
			dataGridViewLibrary->Columns[i]->Width = size / dataGridViewLibrary->ColumnCount;
			dataGridViewLibrary->Columns[i]->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		}
		return result;
	}
	private: System::Void checkBoxColAuthor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataGridView(0);
		dataGridViewLibrary->Focus();
	}
	private: System::Void checkBoxColPages_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataGridView(0);
		dataGridViewLibrary->Focus();
	}
	private: System::Void checkBoxColYear_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataGridView(0);
		dataGridViewLibrary->Focus();
	}
	};
}