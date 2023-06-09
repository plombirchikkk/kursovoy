#pragma once

namespace SportSchool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� HasRankForm
	/// </summary>
	public ref class HasRankForm : public System::Windows::Forms::Form
	{
	public:
		HasRankForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~HasRankForm()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rank;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Section = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YearOfStudying = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rank = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Number,
					this->Section, this->Name, this->Age, this->YearOfStudying, this->Rank
			});
			this->dataGridView1->Location = System::Drawing::Point(3, -2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(841, 434);
			this->dataGridView1->TabIndex = 0;
			// 
			// Number
			// 
			this->Number->HeaderText = L"�����";
			this->Number->MinimumWidth = 6;
			this->Number->Name = L"Number";
			this->Number->ReadOnly = true;
			this->Number->Width = 125;
			// 
			// Section
			// 
			this->Section->HeaderText = L"������";
			this->Section->MinimumWidth = 6;
			this->Section->Name = L"Section";
			this->Section->ReadOnly = true;
			this->Section->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"�.�.�";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 125;
			// 
			// Age
			// 
			this->Age->HeaderText = L"�������";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			this->Age->ReadOnly = true;
			this->Age->Width = 125;
			// 
			// YearOfStudying
			// 
			this->YearOfStudying->HeaderText = L"��� ��������";
			this->YearOfStudying->MinimumWidth = 6;
			this->YearOfStudying->Name = L"YearOfStudying";
			this->YearOfStudying->ReadOnly = true;
			this->YearOfStudying->Width = 125;
			// 
			// Rank
			// 
			this->Rank->HeaderText = L"������";
			this->Rank->MinimumWidth = 6;
			this->Rank->Name = L"Rank";
			this->Rank->ReadOnly = true;
			this->Rank->Width = 125;
			// 
			// HasRankForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 434);
			this->Controls->Add(this->dataGridView1);
			this->Text = L"HasRankForm";
			this->Load += gcnew System::EventHandler(this, &HasRankForm::HasRankForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void HasRankForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
			public:
				void AddRowToDataGridView(array<Object^>^ values)
				{
					dataGridView1->Rows->Add(values);
				}
};
}
