#pragma once

namespace SportSchool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RedactForm
	/// </summary>
	public ref class RedactForm : public System::Windows::Forms::Form
	{
	public:
		RedactForm(void)
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
		~RedactForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBoxSection;
	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ textBoxAge;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->textBoxSection = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxAge = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBoxSection
			// 
			this->textBoxSection->Location = System::Drawing::Point(123, 51);
			this->textBoxSection->Name = L"textBoxSection";
			this->textBoxSection->Size = System::Drawing::Size(110, 22);
			this->textBoxSection->TabIndex = 1;
			this->textBoxSection->TextChanged += gcnew System::EventHandler(this, &RedactForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(228, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RedactForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(12, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 32);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Редактировать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RedactForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(28, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Секция";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(24, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ф.И.О";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(123, 99);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(110, 22);
			this->textBoxName->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(24, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Возраст";
			// 
			// textBoxAge
			// 
			this->textBoxAge->Location = System::Drawing::Point(123, 138);
			this->textBoxAge->Name = L"textBoxAge";
			this->textBoxAge->Size = System::Drawing::Size(110, 22);
			this->textBoxAge->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(123, 185);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(110, 22);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(24, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Год учебы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(24, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Звание";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Отсутствует", L"К.М.С", L"М.С" });
			this->comboBox1->Location = System::Drawing::Point(123, 230);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(110, 24);
			this->comboBox1->TabIndex = 13;
			// 
			// RedactForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(371, 391);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxSection);
			this->Name = L"RedactForm";
			this->Text = L"RedactForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Section = this->textBoxSection->Text;
		String^ Name = this->textBoxName->Text;
		String^ age = this->textBoxAge->Text;
		String^ year = this->dateTimePicker1->Text;
		String^ rank = this->comboBox1->Text;
		if (Section->Length == 0 || Name->Length == 0 || age->Length == 0 || year->Length == 0 || rank->Length == 0) {
			MessageBox::Show("Заполните все поля", "Нужно заполнить все поля!", MessageBoxButtons::OK);
		}
		else {
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	public:
		String^ GetNewValue() {
			return textBoxSection->Text;
		}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
