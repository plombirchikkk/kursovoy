#pragma once

namespace SportSchool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddMemberForm
	/// </summary>
	public ref class AddMemberForm : public System::Windows::Forms::Form
	{
	public:
		AddMemberForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddMemberForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		property array<System::String^>^ InputValues {
			array<System::String^>^ get() {
				array<System::String^>^ values = gcnew array<System::String^>(6);
				values[1] = textBoxSection->Text;
				values[2] = textBoxName->Text;
				values[3] = textBoxAge->Text;
				values[4] = dateTimePicker1->Text;
				values[5] = comboBox1->Text;
				return values;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxSection;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxAge;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxSection = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAge = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(26, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Секция";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ф.И.О";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Возраст";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Год учебы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(26, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Звание";
			// 
			// textBoxSection
			// 
			this->textBoxSection->Location = System::Drawing::Point(114, 19);
			this->textBoxSection->Name = L"textBoxSection";
			this->textBoxSection->Size = System::Drawing::Size(110, 22);
			this->textBoxSection->TabIndex = 5;
			this->textBoxSection->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddMemberForm::textBoxSection_TextChanged);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(114, 55);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(110, 22);
			this->textBoxName->TabIndex = 6;
			this->textBoxName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddMemberForm::textBoxName_TextChanged);
			// 
			// textBoxAge
			// 
			this->textBoxAge->Location = System::Drawing::Point(114, 93);
			this->textBoxAge->Name = L"textBoxAge";
			this->textBoxAge->Size = System::Drawing::Size(110, 22);
			this->textBoxAge->TabIndex = 7;
			this->textBoxAge->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddMemberForm::textBoxAge_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(114, 129);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(110, 22);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Отсутствует", L"К.М.С", L"М.С" });
			this->comboBox1->Location = System::Drawing::Point(114, 161);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(110, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(191, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddMemberForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 35);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddMemberForm::button2_Click);
			// 
			// AddMemberForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(365, 339);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxSection);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddMemberForm";
			this->Text = L"AddMemberForm";
			this->Load += gcnew System::EventHandler(this, &AddMemberForm::AddMemberForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Обработчик нажатия кнопки "OK"
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Section = this->textBoxSection->Text;
	String^ Name = this->textBoxName->Text;
	String^ age = this->textBoxAge->Text;
	String^ year = this->dateTimePicker1->Text;
	String^ rank = this->comboBox1->Text;

	// Проверка заполнения всех полей
	if (Section->Length == 0 || Name->Length == 0 || age->Length == 0 || year->Length == 0 || rank->Length == 0) {
		MessageBox::Show("Заполните все поля", "Нужно заполнить все поля!", MessageBoxButtons::OK);
	}
	else {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
}

// Обработчик нажатия кнопки "Закрыть"
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

// Обработчик изменения текста в поле textBoxSection
private: System::Void textBoxSection_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Заглавная буква в начале слова
	if (textBoxSection->Text->Length > 0) {
		textBoxSection->Text = textBoxSection->Text->Substring(0, 1)->ToUpper() + textBoxSection->Text->Substring(1);
		textBoxSection->SelectionStart = textBoxSection->Text->Length;
	}

	// Ограничение на ввод символов
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}

	// Переход на следующее поле при нажатии Enter
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxName->Focus();
		e->Handled = true;
	}
}

// Обработчик изменения текста в поле textBoxName
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Заглавная буква в начале слова
	if (textBoxName->Text->Length > 0) {
		textBoxName->Text = textBoxName->Text->Substring(0, 1)->ToUpper() + textBoxName->Text->Substring(1);
		textBoxName->SelectionStart = textBoxName->Text->Length;
	}

	// Ограничение на ввод символов
	if (!Char::IsLetter(e->KeyChar) && !Char::IsControl(e->KeyChar) && !Char::IsWhiteSpace(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}

	// Переход на следующее поле при нажатии Enter
	if (e->KeyChar == (char)Keys::Enter) {
		textBoxAge->Focus();
		e->Handled = true;
	}
}

// Обработчик изменения текста в поле textBoxAge
private: System::Void textBoxAge_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Ограничение на ввод символов
	if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar) && e->KeyChar != '.') {
		e->Handled = true;
	}

	// Переход на следующее поле при нажатии Enter
	if (e->KeyChar == (char)Keys::Enter) {
		dateTimePicker1->Focus();
		e->Handled = true;
	}
}

private: System::Void AddMemberForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
