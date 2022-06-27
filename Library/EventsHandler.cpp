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
		QuickSort(0, books.size() - 1);
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

void EventsHandler::LoadBook(int index, TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear, RichTextBox^ textBoxDescription)
{
	currentBook = index;
	Book b = books[index];
	textBoxName->Text = StrConvert(b.name);
	textBoxAuthor->Text = StrConvert(b.author);
	textBoxPubl->Text = StrConvert(b.ISBN);
	textBoxDescription->Text = StrConvert(b.description);
	textBoxPages->Text = StrConvert(to_string(b.pages));
	textBoxYear->Text = StrConvert(to_string(b.year));
}

void EventsHandler::SaveBook(TextBox^ textBoxName, TextBox^ textBoxAuthor, TextBox^ textBoxPubl, TextBox^ textBoxPages, TextBox^ textBoxYear, RichTextBox^ textBoxDescription)
{
	Book* b = &books[currentBook];
	auto itr = std::find(allBooks.begin(), allBooks.end(), *b);
	if (itr == allBooks.end()) return;
	int bookIndex = distance(allBooks.begin(), itr);

	b->name = StrConvert(textBoxName->Text);
	b->author = StrConvert(textBoxAuthor->Text);
	b->ISBN = StrConvert(textBoxPubl->Text);
	b->pages = atoi(StrConvert(textBoxPages->Text).c_str());
	b->year = atoi(StrConvert(textBoxYear->Text).c_str());
	b->description = StrConvert(textBoxDescription->Text);

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
		result = l.ISBN.compare(r.ISBN);
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

int EventsHandler::Partition(int low, int high)
{
	Book pivot = books[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		for (int l = 0; l < sortKeys.size(); l++)
		{
			int res = Key(sortKeys[l], books[j], pivot);
			if (res < 0) {
				i++;
				swap(books[i], books[j]);
				break;
			}
			if (res > 0)
				break;
		}
	}
	swap(books[i + 1], books[high]);
	return (i + 1);
}

void EventsHandler::QuickSort(int low, int high)
{
	if (low < high)
	{
		int pi = Partition(low, high);
		QuickSort(low, pi - 1);
		QuickSort(pi + 1, high);
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
		temp = books[i].ISBN;
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
