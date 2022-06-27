#include "pch.h"
#include "EventsHandler.h"

void EventsHandler::LoadFile(string fileName)
{
	Clear();
	this->fileName = fileName;
	allBooks = FileProvider::GetListFromFile(fileName);
	opened = true;
}

void EventsHandler::LoadDataGridView(DataGridView^ dataGridView, List<ComboBox^>^ comboBoxes, String^ search, List<bool>^ columns)
{
	books.clear();
	copy(allBooks.begin(), allBooks.end(), back_inserter(books));
	sortKeys.clear();
	for (int i = 0; i < comboBoxes->Count; i++)
	{
		if (comboBoxes[i]->SelectedIndex != -1) {
			sortKeys.push_back(StrConvert(comboBoxes[i]->SelectedItem->ToString()));
		}
	}
	if (books.size() > 1)
		SortData();
	Search(StrConvert(search));

	for (int i = 0; i < books.size(); i++)
	{
		int s = 0;
		dataGridView->Rows->Add();
		if (columns[0])
		{
			dataGridView->Rows[i]->Cells[s]->Value = StrConvert(books[i].name);
			s++;
		}
		if (columns[1])
		{
			dataGridView->Rows[i]->Cells[s]->Value = StrConvert(books[i].author);
			s++;
		}
		if (columns[2])
		{
			dataGridView->Rows[i]->Cells[s]->Value = books[i].pages;
			s++;
		}
		if (columns[3])
			dataGridView->Rows[i]->Cells[s]->Value = books[i].year;
	}
}

void EventsHandler::SaveFile()
{
	if (!opened) return;
	FileProvider::SaveToFile(allBooks, fileName);
}

void EventsHandler::SaveFile(string fileName)
{
	this->fileName = fileName;
	FileProvider::SaveToFile(allBooks, fileName);
}

void EventsHandler::LoadBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear)
{
	Book b = books[index];
	textBoxName->Text = StrConvert(b.name);
	textBoxAuthor->Text = StrConvert(b.author);
	textBoxPubl->Text = StrConvert(b.publishingHouse);
	textBoxPages->Text = StrConvert(to_string(b.pages));
	textBoxYear->Text = StrConvert(to_string(b.year));
}

void EventsHandler::SaveBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear)
{
	Book* b = &books[index];
	auto itr = std::find(allBooks.begin(), allBooks.end(), *b);
	if (itr == allBooks.end()) return;
	int bookIndex = distance(allBooks.begin(), itr);

	b->name = StrConvert(textBoxName->Text);
	b->author = StrConvert(textBoxAuthor->Text);
	b->publishingHouse = StrConvert(textBoxPubl->Text);
	b->pages = atoi(StrConvert(textBoxPages->Text).c_str());
	b->year = atoi(StrConvert(textBoxYear->Text).c_str());

	allBooks[bookIndex] = *b;
}

void EventsHandler::DeleteBook(int index)
{
	allBooks.erase(allBooks.begin() + index);
}

void EventsHandler::CreateBook()
{
	Book b;
	allBooks.push_back(b);
}

int EventsHandler::Key(string key, Book l, Book r)
{
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	std::wstring wstr = converter.from_bytes(key);
	vector<wstring>::iterator it = find(parameters.begin(), parameters.end(), wstr);
	if (it == parameters.cend()) return false;
	int result;
	switch (distance(parameters.begin(), it))
	{
	case 0:
		result = l.name.compare(r.name);
		break;
	case 1:
		result = l.author.compare(r.author);
		break;
	case 2:
		result = l.publishingHouse.compare(r.publishingHouse);
		break;
	case 3:
		result = l.pages - r.pages;
		break;
	case 4:
		result = l.year - r.year;
		break;
	default:
		break;
	}
	return result;
}

void EventsHandler::SortData()
{
	for (int i = 0; i < books.size() - 1; i++)
		for (int j = 0; j < books.size() - i - 1; j++)
			for (int l = 0; l < sortKeys.size(); l++)
			{
				int res = Key(sortKeys[l], books[j], books[j + 1]);
				if (res > 0) {
					swap(books[j], books[j + 1]);
					break;
				}
				if (res < 0)
					break;
			}
}

void EventsHandler::Search(string search)
{
	std::transform(search.begin(), search.end(), search.begin(),
		[](unsigned char c) { return std::tolower(c); });
	string temp;
	for (int i = 0; i < books.size(); i++)
	{
		temp = books[i].name;
		std::transform(temp.begin(), temp.end(), temp.begin(),
			[](unsigned char c) { return std::tolower(c); });
		if (temp.find(search) != string::npos)
			continue;
		temp = books[i].author;
		std::transform(temp.begin(), temp.end(), temp.begin(),
			[](unsigned char c) { return std::tolower(c); });
		if (temp.find(search) != string::npos)
			continue;
		temp = to_string(books[i].pages);
		if (temp.find(search) != string::npos)
			continue;
		temp = to_string(books[i].year);
		if (temp.find(search) != string::npos)
			continue;
		books.erase(books.begin() + i);
		i--;
	}
}

void EventsHandler::Clear()
{
	fileName == "default";
	allBooks.clear();
	opened = false;
}
