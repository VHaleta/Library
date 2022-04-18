#pragma once
#include "EventsHandler.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			зберегтиToolStripMenuItem->Enabled = false;
			dataGridView1->Columns->Add("name", "Name");
			dataGridView1->Columns->Add("author", "Author");
		}
	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортуванняфільтруванняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиЯкToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиЯкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортуванняфільтруванняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(605, 539);
			this->dataGridView1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->сортуванняфільтруванняToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1243, 36);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->відкритиToolStripMenuItem,
					this->зберегтиToolStripMenuItem, this->зберегтиЯкToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(74, 32);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(224, 32);
			this->відкритиToolStripMenuItem->Text = L"Відкрити";
			this->відкритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::відкритиToolStripMenuItem_Click);
			// 
			// зберегтиToolStripMenuItem
			// 
			this->зберегтиToolStripMenuItem->Name = L"зберегтиToolStripMenuItem";
			this->зберегтиToolStripMenuItem->Size = System::Drawing::Size(224, 32);
			this->зберегтиToolStripMenuItem->Text = L"Зберегти";
			this->зберегтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::зберегтиToolStripMenuItem_Click);
			// 
			// зберегтиЯкToolStripMenuItem
			// 
			this->зберегтиЯкToolStripMenuItem->Name = L"зберегтиЯкToolStripMenuItem";
			this->зберегтиЯкToolStripMenuItem->Size = System::Drawing::Size(224, 32);
			this->зберегтиЯкToolStripMenuItem->Text = L"Зберегти як...";
			this->зберегтиЯкToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::зберегтиЯкToolStripMenuItem_Click);
			// 
			// сортуванняфільтруванняToolStripMenuItem
			// 
			this->сортуванняфільтруванняToolStripMenuItem->Name = L"сортуванняфільтруванняToolStripMenuItem";
			this->сортуванняфільтруванняToolStripMenuItem->Size = System::Drawing::Size(268, 32);
			this->сортуванняфільтруванняToolStripMenuItem->Text = L"Сортування/фільтрування";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1243, 613);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"MainForm";
			this->Text = L"Бібліотека";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void відкритиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		dataGridView1 = EventsHandler().OpenFile(openFileDialog1, dataGridView1);
	}
	private: System::Void зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void зберегтиЯкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EventsHandler().SaveFile(saveFileDialog1);
}
};
}
