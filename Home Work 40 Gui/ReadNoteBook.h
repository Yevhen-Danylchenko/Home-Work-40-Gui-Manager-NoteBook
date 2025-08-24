#pragma once

namespace HomeWork40Gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReadNoteBook
	/// </summary>
	public ref class ReadNoteBook : public System::Windows::Forms::Form
	{
	public:
		ReadNoteBook(void)
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
		~ReadNoteBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(410, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Привіт. Це менеджер нотаток.";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(212, 97);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(557, 319);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ReadNoteBook::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(228, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Прочитати нотатки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReadNoteBook::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(531, 440);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Видалити нотатки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ReadNoteBook::button2_Click);
			// 
			// ReadNoteBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 537);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Name = L"ReadNoteBook";
			this->Text = L"ReadNoteBook";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (System::IO::File::Exists("notes.txt")) {
				array<System::String^>^ notes = System::IO::File::ReadAllLines("notes.txt");
				for each (System::String ^ note in notes) {
					checkedListBox1->Items->Add(note);
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Помилка при завантаженні нотаток:\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
		array<System::String^>^ allNotes = System::IO::File::ReadAllLines("notes.txt");
		System::Collections::Generic::List<System::String^>^ updatedNotes = gcnew System::Collections::Generic::List<System::String^>();

		for each (System::String ^ note in allNotes) {
			if (!note->Equals(selectedNote)) {
				updatedNotes->Add(note);
			}
		}

		System::IO::File::WriteAllLines("notes.txt", updatedNotes->ToArray());

		MessageBox::Show("Нотатку успішно видалено з файлу та списку.", "Готово", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Помилка при оновленні файлу:\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
