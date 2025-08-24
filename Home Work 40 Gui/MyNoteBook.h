#pragma once

namespace HomeWork40Gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyNoteBook
	/// </summary>
	public ref class MyNoteBook : public System::Windows::Forms::Form
	{
	public:
		MyNoteBook(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyNoteBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox1;
		   /*private: System::Windows::Forms::ListBox^ listBox1;*/

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(359, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Привіт. Це менеджер нотаток.";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(509, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyNoteBook::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Назва нотатки:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(188, 120);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(509, 161);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyNoteBook::richTextBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(88, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Текст нотатки:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(188, 309);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(509, 109);
			this->checkedListBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 309);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Список:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(88, 446);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Пріорітет:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(188, 446);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(509, 20);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyNoteBook::numericUpDown1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Добавити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyNoteBook::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(328, 489);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Видалити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyNoteBook::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(457, 489);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 36);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyNoteBook::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(590, 489);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 36);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Редагувати";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyNoteBook::button4_Click);
			// 
			// MyNoteBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 593);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyNoteBook";
			this->Text = L"MyNoteBook";
			this->Load += gcnew System::EventHandler(this, &MyNoteBook::MyNoteBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	/*private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}*/
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int priority = static_cast<int>(numericUpDown1->Value);
	if (priority < 1 || priority > 5) {
		MessageBox::Show("Пріорітет має бути в межах від 1 до 5.", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		checkedListBox1->Items->Add(textBox1->Text + " | " + richTextBox1->Text + " | " + numericUpDown1->Value);
	}
	System::String^ filePath = "notes.txt";

	try {
		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, true); // false = overwrite, true = append

		for each (System::Object ^ item in checkedListBox1->Items) {
			writer->WriteLine(item->ToString());
		}

		writer->Close();
		MessageBox::Show("Нотатки успішно збережено у файл!", "Готово", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Помилка при записі у файл:\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = checkedListBox1->SelectedIndex;

	if (selectedIndex == -1) {
		MessageBox::Show("Будь ласка, виберіть нотатку для видалення.", "Увага", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	System::String^ selectedNote = checkedListBox1->Items[selectedIndex]->ToString();
	checkedListBox1->Items->RemoveAt(selectedIndex);

	try {
		// Читання всіх нотаток з файлу
		array<System::String^>^ allNotes = System::IO::File::ReadAllLines("notes.txt");

		// Створення нового списку без вибраної нотатки
		System::Collections::Generic::List<System::String^>^ updatedNotes = gcnew System::Collections::Generic::List<System::String^>();

		for each (System::String ^ note in allNotes) {
			if (!note->Equals(selectedNote)) {
				updatedNotes->Add(note);
			}
		}

		// Перезапис файлу
		System::IO::File::WriteAllLines("notes.txt", updatedNotes->ToArray());

		MessageBox::Show("Нотатку успішно видалено з файлу.", "Готово", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Помилка при оновленні файлу:\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();           
	richTextBox1->Clear();      
	numericUpDown1->Value = numericUpDown1->Minimum; 
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	int selectedIndex = checkedListBox1->SelectedIndex;

	if (selectedIndex < 0) {
		MessageBox::Show("Будь ласка, виберіть нотатку для редагування.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	System::String^ updatedNote = textBox1->Text;
	System::String^ updatedText = richTextBox1->Text;
	System::String^ updatedPriority = numericUpDown1->Value.ToString();

	if (String::IsNullOrWhiteSpace(updatedNote)) {
		MessageBox::Show("Поле нотатки порожнє. Введіть текст для оновлення.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	System::String^ newNote = updatedNote + " | " + updatedText + " | " + updatedPriority;
	System::String^ oldNote = checkedListBox1->Items[selectedIndex]->ToString();


	checkedListBox1->Items->RemoveAt(selectedIndex);
	checkedListBox1->Items->Insert(selectedIndex, updatedNote + " | " + updatedText + " | " + updatedPriority);

	// Оновлення у файлі
	try {
		array<System::String^>^ allNotes = System::IO::File::ReadAllLines("notes.txt");
		for (int i = 0; i < allNotes->Length; ++i) {
			if (allNotes[i]->Equals(oldNote)) {
				allNotes[i] = newNote;
				break;
			}
		}
		System::IO::File::WriteAllLines("notes.txt", allNotes);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Помилка при оновленні файлу:\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}


	MessageBox::Show("Нотатку успішно оновлено!", "Готово", MessageBoxButtons::OK, MessageBoxIcon::Information);

	textBox1->Clear();
	richTextBox1->Clear();
	numericUpDown1->Value = numericUpDown1->Minimum;


}
private: System::Void MyNoteBook_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
