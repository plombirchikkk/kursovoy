#pragma once

namespace SportSchool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TwoAndMore
	/// </summary>
	public ref class TwoAndMore : public System::Windows::Forms::Form
	{
	public:
		TwoAndMore(void)
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
		~TwoAndMore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Section;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ YearOfStudying;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rank;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Section = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YearOfStudying = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rank = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Number,
					this->Section, this->Name, this->Age, this->YearOfStudying, this->rank
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(803, 401);
			this->dataGridView1->TabIndex = 0;
			// 
			// Number
			// 
			this->Number->HeaderText = L"Номер";
			this->Number->MinimumWidth = 6;
			this->Number->Name = L"Number";
			this->Number->Width = 125;
			// 
			// Section
			// 
			this->Section->HeaderText = L"Секция";
			this->Section->MinimumWidth = 6;
			this->Section->Name = L"Section";
			this->Section->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Ф.И.О";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// Age
			// 
			this->Age->HeaderText = L"Возраст";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			this->Age->Width = 125;
			// 
			// YearOfStudying
			// 
			this->YearOfStudying->HeaderText = L"Год обучения";
			this->YearOfStudying->MinimumWidth = 6;
			this->YearOfStudying->Name = L"YearOfStudying";
			this->YearOfStudying->Width = 125;
			// 
			// rank
			// 
			this->rank->HeaderText = L"Звание";
			this->rank->MinimumWidth = 6;
			this->rank->Name = L"rank";
			this->rank->Width = 125;
			// 
			// TwoAndMore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 425);
			this->Controls->Add(this->dataGridView1);
			this->Text = L"TwoAndMore";
			this->Load += gcnew System::EventHandler(this, &TwoAndMore::TwoAndMore_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TwoAndMore_Load(System::Object^ sender, System::EventArgs^ e) {
	}
					public:
						void AddRowToDataGridView(array<Object^>^ values)
						{
							dataGridView1->Rows->Add(values);
						}
};
}
