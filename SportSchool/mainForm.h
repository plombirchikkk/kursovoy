#pragma once
#include "AddMemberForm.h"
#include "RedactForm.h"
#include "HasRankForm.h"
#include "TwoAndMore.h"
namespace SportSchool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// ������ ��� mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			dataGridView1->ContextMenuStrip = contextMenuStrip1;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::ToolStripMenuItem^ OpenFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutProgrammToolStripMenuItem1;





	private: System::Windows::Forms::ToolStripMenuItem^ guideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ taskToolStripMenuItem;

	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonRedact;

	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonSearcH;
	private: System::Windows::Forms::Button^ buttonYoungestPerson;
	private: System::Windows::Forms::Button^ buttonTwoAndMore;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Section;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ YearOfStudying;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ rank;
	private: System::Windows::Forms::TextBox^ textBoxSearch;
	private: System::Windows::Forms::Button^ buttonSrch;
	private: System::Windows::Forms::ToolStripMenuItem^ sortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NumberAscendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NumberDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ NameAcsendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nameDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AgeAscendingToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ AgeDescendingToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ yearAscendingToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yearDescending���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rankAscendingToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rankDescendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SectionAscendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SectionDescendingToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonHasRank;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inputToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redactToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NumberAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NumberDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SectionAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SectionDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NameAcsendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nameDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AgeAscendingToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AgeDescendingToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yearAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yearDescending���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rankAscendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rankDescendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgrammToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->taskToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Section = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YearOfStudying = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rank = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonRedact = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonSearcH = (gcnew System::Windows::Forms::Button());
			this->buttonYoungestPerson = (gcnew System::Windows::Forms::Button());
			this->buttonTwoAndMore = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSrch = (gcnew System::Windows::Forms::Button());
			this->buttonHasRank = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inputToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redactToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->sortToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1246, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->OpenFileToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// OpenFileToolStripMenuItem
			// 
			this->OpenFileToolStripMenuItem->Name = L"OpenFileToolStripMenuItem";
			this->OpenFileToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->OpenFileToolStripMenuItem->Text = L"�������";
			this->OpenFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::OpenFileToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Enabled = false;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->saveToolStripMenuItem->Text = L"���������";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Enabled = false;
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->saveAsToolStripMenuItem->Text = L"��������� ���";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::saveAsToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->closeToolStripMenuItem->Text = L"�������";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::closeToolStripMenuItem_Click);
			// 
			// sortToolStripMenuItem
			// 
			this->sortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�����ToolStripMenuItem, this->����������ToolStripMenuItem, this->yearAscendingToolStripMenuItem,
					this->rankAscendingToolStripMenuItem
			});
			this->sortToolStripMenuItem->Enabled = false;
			this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
			this->sortToolStripMenuItem->Size = System::Drawing::Size(113, 24);
			this->sortToolStripMenuItem->Text = L"�����������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->NumberAscendingToolStripMenuItem,
					this->NumberDescendingToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->��������ToolStripMenuItem->Text = L"�� ������";
			// 
			// NumberAscendingToolStripMenuItem
			// 
			this->NumberAscendingToolStripMenuItem->Name = L"NumberAscendingToolStripMenuItem";
			this->NumberAscendingToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			this->NumberAscendingToolStripMenuItem->Text = L"�� �����������";
			this->NumberAscendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::NumberAscendingToolStripMenuItem_Click);
			// 
			// NumberDescendingToolStripMenuItem
			// 
			this->NumberDescendingToolStripMenuItem->Name = L"NumberDescendingToolStripMenuItem";
			this->NumberDescendingToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			this->NumberDescendingToolStripMenuItem->Text = L"�� ��������";
			this->NumberDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::NumberDescendingToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->SectionAscendingToolStripMenuItem,
					this->SectionDescendingToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->��������ToolStripMenuItem->Text = L"�� ������";
			// 
			// SectionAscendingToolStripMenuItem
			// 
			this->SectionAscendingToolStripMenuItem->Name = L"SectionAscendingToolStripMenuItem";
			this->SectionAscendingToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->SectionAscendingToolStripMenuItem->Text = L"����������";
			this->SectionAscendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::SectionAscendingToolStripMenuItem_Click);
			// 
			// SectionDescendingToolStripMenuItem
			// 
			this->SectionDescendingToolStripMenuItem->Name = L"SectionDescendingToolStripMenuItem";
			this->SectionDescendingToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->SectionDescendingToolStripMenuItem->Text = L"�������� �����������";
			this->SectionDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::SectionDescendingToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->NameAcsendingToolStripMenuItem,
					this->nameDescendingToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->�����ToolStripMenuItem->Text = L"�� �.�.�";
			// 
			// NameAcsendingToolStripMenuItem
			// 
			this->NameAcsendingToolStripMenuItem->Name = L"NameAcsendingToolStripMenuItem";
			this->NameAcsendingToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->NameAcsendingToolStripMenuItem->Text = L"����������";
			this->NameAcsendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::NameAcsendingToolStripMenuItem_Click);
			// 
			// nameDescendingToolStripMenuItem
			// 
			this->nameDescendingToolStripMenuItem->Name = L"nameDescendingToolStripMenuItem";
			this->nameDescendingToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->nameDescendingToolStripMenuItem->Text = L"�������� �����������";
			this->nameDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::nameDescendingToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->AgeAscendingToolStripMenuItem1,
					this->AgeDescendingToolStripMenuItem1
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->����������ToolStripMenuItem->Text = L"�� ��������";
			// 
			// AgeAscendingToolStripMenuItem1
			// 
			this->AgeAscendingToolStripMenuItem1->Name = L"AgeAscendingToolStripMenuItem1";
			this->AgeAscendingToolStripMenuItem1->Size = System::Drawing::Size(208, 26);
			this->AgeAscendingToolStripMenuItem1->Text = L"�� �����������";
			this->AgeAscendingToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::AgeAscendingToolStripMenuItem1_Click);
			// 
			// AgeDescendingToolStripMenuItem1
			// 
			this->AgeDescendingToolStripMenuItem1->Name = L"AgeDescendingToolStripMenuItem1";
			this->AgeDescendingToolStripMenuItem1->Size = System::Drawing::Size(208, 26);
			this->AgeDescendingToolStripMenuItem1->Text = L"�� ��������";
			this->AgeDescendingToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::AgeDescendingToolStripMenuItem1_Click);
			// 
			// yearAscendingToolStripMenuItem
			// 
			this->yearAscendingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������������ToolStripMenuItem,
					this->yearDescending���������������ToolStripMenuItem
			});
			this->yearAscendingToolStripMenuItem->Name = L"yearAscendingToolStripMenuItem";
			this->yearAscendingToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->yearAscendingToolStripMenuItem->Text = L"��� �����";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(287, 26);
			this->���������������ToolStripMenuItem->Text = L"���������������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::���������������ToolStripMenuItem_Click);
			// 
			// yearDescending���������������ToolStripMenuItem
			// 
			this->yearDescending���������������ToolStripMenuItem->Name = L"yearDescending���������������ToolStripMenuItem";
			this->yearDescending���������������ToolStripMenuItem->Size = System::Drawing::Size(287, 26);
			this->yearDescending���������������ToolStripMenuItem->Text = L"�������� ���������������";
			this->yearDescending���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::yearDescending���������������ToolStripMenuItem_Click);
			// 
			// rankAscendingToolStripMenuItem
			// 
			this->rankAscendingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem,
					this->rankDescendingToolStripMenuItem
			});
			this->rankAscendingToolStripMenuItem->Name = L"rankAscendingToolStripMenuItem";
			this->rankAscendingToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->rankAscendingToolStripMenuItem->Text = L"������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(248, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::rankAscendingToolStripMenuItem_Click);
			// 
			// rankDescendingToolStripMenuItem
			// 
			this->rankDescendingToolStripMenuItem->Name = L"rankDescendingToolStripMenuItem";
			this->rankDescendingToolStripMenuItem->Size = System::Drawing::Size(248, 26);
			this->rankDescendingToolStripMenuItem->Text = L"�������� ����������";
			this->rankDescendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::rankDescendingToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aboutProgrammToolStripMenuItem1,
					this->guideToolStripMenuItem, this->taskToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// aboutProgrammToolStripMenuItem1
			// 
			this->aboutProgrammToolStripMenuItem1->Name = L"aboutProgrammToolStripMenuItem1";
			this->aboutProgrammToolStripMenuItem1->Size = System::Drawing::Size(278, 26);
			this->aboutProgrammToolStripMenuItem1->Text = L"� ���������";
			this->aboutProgrammToolStripMenuItem1->Click += gcnew System::EventHandler(this, &mainForm::aboutProgrammToolStripMenuItem1_Click);
			// 
			// guideToolStripMenuItem
			// 
			this->guideToolStripMenuItem->Name = L"guideToolStripMenuItem";
			this->guideToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->guideToolStripMenuItem->Text = L"����������� ������������";
			// 
			// taskToolStripMenuItem
			// 
			this->taskToolStripMenuItem->Name = L"taskToolStripMenuItem";
			this->taskToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->taskToolStripMenuItem->Text = L"�������";
			this->taskToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::taskToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Number,
					this->Section, this->Name, this->Age, this->YearOfStudying, this->rank
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1246, 444);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainForm::dataGridView1_CellValueChanged);
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &mainForm::dataGridView1_RowsAdded);
			// 
			// Number
			// 
			this->Number->HeaderText = L"�����";
			this->Number->MinimumWidth = 6;
			this->Number->Name = L"Number";
			this->Number->Width = 125;
			// 
			// Section
			// 
			this->Section->HeaderText = L"������";
			this->Section->MinimumWidth = 6;
			this->Section->Name = L"Section";
			this->Section->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"�.�.�";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// Age
			// 
			this->Age->HeaderText = L"�������";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			this->Age->Width = 125;
			// 
			// YearOfStudying
			// 
			this->YearOfStudying->HeaderText = L"��� �����";
			this->YearOfStudying->MinimumWidth = 6;
			this->YearOfStudying->Name = L"YearOfStudying";
			this->YearOfStudying->Width = 125;
			// 
			// rank
			// 
			this->rank->HeaderText = L"������";
			this->rank->MinimumWidth = 6;
			this->rank->Name = L"rank";
			this->rank->Width = 125;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(24, 509);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(91, 23);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"��������";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &mainForm::buttonAdd_Click);
			// 
			// buttonRedact
			// 
			this->buttonRedact->Enabled = false;
			this->buttonRedact->Location = System::Drawing::Point(136, 509);
			this->buttonRedact->Name = L"buttonRedact";
			this->buttonRedact->Size = System::Drawing::Size(128, 23);
			this->buttonRedact->TabIndex = 3;
			this->buttonRedact->Text = L"�������������";
			this->buttonRedact->UseVisualStyleBackColor = true;
			this->buttonRedact->Click += gcnew System::EventHandler(this, &mainForm::buttonRedact_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Cursor = System::Windows::Forms::Cursors::Default;
			this->buttonDelete->Enabled = false;
			this->buttonDelete->Location = System::Drawing::Point(285, 509);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(91, 23);
			this->buttonDelete->TabIndex = 4;
			this->buttonDelete->Text = L"�������";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &mainForm::buttonDelete_Click);
			// 
			// buttonSearcH
			// 
			this->buttonSearcH->Enabled = false;
			this->buttonSearcH->Location = System::Drawing::Point(552, 509);
			this->buttonSearcH->Name = L"buttonSearcH";
			this->buttonSearcH->Size = System::Drawing::Size(91, 23);
			this->buttonSearcH->TabIndex = 5;
			this->buttonSearcH->Text = L"�����";
			this->buttonSearcH->UseVisualStyleBackColor = true;
			this->buttonSearcH->Click += gcnew System::EventHandler(this, &mainForm::buttonSearcH_Click);
			// 
			// buttonYoungestPerson
			// 
			this->buttonYoungestPerson->Enabled = false;
			this->buttonYoungestPerson->Location = System::Drawing::Point(800, 509);
			this->buttonYoungestPerson->Name = L"buttonYoungestPerson";
			this->buttonYoungestPerson->Size = System::Drawing::Size(222, 23);
			this->buttonYoungestPerson->TabIndex = 6;
			this->buttonYoungestPerson->Text = L"����� ������� ��������";
			this->buttonYoungestPerson->UseVisualStyleBackColor = true;
			this->buttonYoungestPerson->Click += gcnew System::EventHandler(this, &mainForm::buttonYoungestPerson_Click);
			// 
			// buttonTwoAndMore
			// 
			this->buttonTwoAndMore->Enabled = false;
			this->buttonTwoAndMore->Location = System::Drawing::Point(1028, 509);
			this->buttonTwoAndMore->Name = L"buttonTwoAndMore";
			this->buttonTwoAndMore->Size = System::Drawing::Size(188, 23);
			this->buttonTwoAndMore->TabIndex = 7;
			this->buttonTwoAndMore->Text = L"�������� 2+ ������";
			this->buttonTwoAndMore->UseVisualStyleBackColor = true;
			this->buttonTwoAndMore->Click += gcnew System::EventHandler(this, &mainForm::buttonTwoAndMore_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(1095, 44);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(139, 22);
			this->textBoxSearch->TabIndex = 8;
			this->textBoxSearch->Visible = false;
			// 
			// buttonSrch
			// 
			this->buttonSrch->Location = System::Drawing::Point(1159, 72);
			this->buttonSrch->Name = L"buttonSrch";
			this->buttonSrch->Size = System::Drawing::Size(75, 23);
			this->buttonSrch->TabIndex = 9;
			this->buttonSrch->Text = L"������";
			this->buttonSrch->UseVisualStyleBackColor = true;
			this->buttonSrch->Visible = false;
			this->buttonSrch->Click += gcnew System::EventHandler(this, &mainForm::buttonSrch_Click);
			// 
			// buttonHasRank
			// 
			this->buttonHasRank->Location = System::Drawing::Point(649, 509);
			this->buttonHasRank->Name = L"buttonHasRank";
			this->buttonHasRank->Size = System::Drawing::Size(145, 23);
			this->buttonHasRank->TabIndex = 10;
			this->buttonHasRank->Text = L"����� ������";
			this->buttonHasRank->UseVisualStyleBackColor = true;
			this->buttonHasRank->Click += gcnew System::EventHandler(this, &mainForm::buttonHasRank_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->copyToolStripMenuItem,
					this->inputToolStripMenuItem, this->redactToolStripMenuItem, this->deleteToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(211, 132);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &mainForm::contextMenuStrip1_Opening);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->copyToolStripMenuItem->Text = L"����������";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::copyToolStripMenuItem_Click);
			// 
			// inputToolStripMenuItem
			// 
			this->inputToolStripMenuItem->Name = L"inputToolStripMenuItem";
			this->inputToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->inputToolStripMenuItem->Text = L"��������";
			this->inputToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::inputToolStripMenuItem_Click);
			// 
			// redactToolStripMenuItem
			// 
			this->redactToolStripMenuItem->Name = L"redactToolStripMenuItem";
			this->redactToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->redactToolStripMenuItem->Text = L"�������������";
			this->redactToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::redactToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(210, 24);
			this->deleteToolStripMenuItem->Text = L"�������";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::deleteToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1246, 553);
			this->Controls->Add(this->buttonHasRank);
			this->Controls->Add(this->buttonSrch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->buttonTwoAndMore);
			this->Controls->Add(this->buttonYoungestPerson);
			this->Controls->Add(this->buttonSearcH);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonRedact);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Text = L"mainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &mainForm::mainForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ currentFileName;
		// ���������� ������� ����� �� ����� ���� "OpenFileToolStripMenuItem"
	private: System::Void OpenFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� ������� OpenFileDialog ��� ������ �����
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog(); //�������� ���������� ������ 
		openFileDialog->Title = "Open binary file";
		openFileDialog->Filter = "Binary files (*.bin)|*.bin";

		// �������� ���������� �������� ����������� ����
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// ��������� ����� ���������� �����
			String^ fileName = openFileDialog->FileName;
			// ���������� ����� �������� �����
			currentFileName = fileName;
			// �������� ������� FileStream ��� �������� ����� � ������ ������
			FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
			// �������� ������� BinaryReader ��� ������ ������ �� �����
			BinaryReader^ br = gcnew BinaryReader(fs);

			// �������� ������ �� ��������� ����� � DataGridView
			int i = 0;
			// ������ ������ �� ����� �� ���������� ����� �����
			while (br->PeekChar() != -1) {
				// ��� ������������� ���������� ����� ������ � DataGridView
				if (i >= dataGridView1->Rows->Count) {
					dataGridView1->Rows->Add();
				}
				// ������ ������ �� ����� � ��������� �������� ������ � ������� ������ � �������
				for (int j = 0; j < dataGridView1->Columns->Count; j++) {
					String^ value = br->ReadString();
					dataGridView1->Rows[i]->Cells[j]->Value = value;
				}
				// ���������� �������� �����
				i++;
			}

			// �������� BinaryReader � FileStream ��� ������������ ��������
			br->Close();
			fs->Close();
		}
	}

// ���������� ������� ����� �� ����� ���� "saveToolStripMenuItem"
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������, ���� �� ������ ��������
	if (isModified) {
		// ���������� ������ � ����, ��������� ������� ��� �����
		saveDataToFile(currentFileName);
	}
}

// ���������� ������� ����� �� ����� ���� "saveAsToolStripMenuItem"
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ������� ���������� ���� ���������� �����
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Binary files (*.bin)|*.bin";
	saveFileDialog1->Title = "Save data to binary file";

	// �������� ���������� �������� ����������� ����
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// ���������� ����� ���������� �����
		currentFileName = saveFileDialog1->FileName;
		// ���������� ������ � ����, ��������� ������� ��� �����
		saveDataToFile(currentFileName);
	}
}

	   void saveDataToFile(String^ fileName) {
		   // �������� FileStream ��� �������� �����
		   FileStream^ fs = gcnew FileStream(fileName, FileMode::Create);
		   // �������� BinaryWriter ��� ������ ������ � ����
		   BinaryWriter^ bw = gcnew BinaryWriter(fs);

		   // �������� �� ������� DataGridView
		   for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			   // �������� �� �������� DataGridView
			   for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				   // ��������, ��� �������� ������ �� ����� null
				   if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) {
					   // ��������� �������� ������ � ���� ������
					   String^ value = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
					   // ������ �������� � ����
					   bw->Write(value);
					   // ��������� �����, ��� ������ ���������
					   isDataSaved = true;
				   }
			   }
		   }
	   };

private:
	bool isModified = false;
private:
	bool isDataSaved;
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
};

// ���������� ������� ����� �� ������ "buttonAdd"
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ���������� ����� AddMemberForm
	AddMemberForm^ addMember = gcnew AddMemberForm;
	// ����������� �����, �� ������ �� ���������
	addMember->Show();
	addMember->Visible = false;

	// �������� ���������� �������� �����
	if (addMember->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// ���������� �������� �� ����� AddMemberForm � DataGridView
		dataGridView1->Rows->Add(addMember->InputValues);
	}
	else {
		// ���� ���������� ���� AddMemberForm ������� ��� ������� ������ "OK"
		MessageBox::Show("�������� �� ��� ��������", "���������� ���������", MessageBoxButtons::OK);
	}
}
private: System::Void aboutProgrammToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("������ ��������-1.0.\n"
		"���� �������� ��������� ���������-15.05.2023. \n"
		"���������� ������ �������, ����-22-1 \n",
		"� ���������", MessageBoxButtons::OK);
}
private: System::Void taskToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("��������� ��������� ����������� �����, ����������� ���� � �������� ���� : ������, �.�.�., �������, ��� ��������, ������(�.�.�., �.�.)."
		"�� ������ ����������� ������� ���, ��� ����� ������.���������� ������ �������� ��������� � ������������ ������ �����������, ���������� ����� ��� ��������� � ������� ������ �������� ����.", "� �������", MessageBoxButtons::OK);
}
// ���������� ������� ����� �� ������ "buttonDelete"
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������, ��� ���� ���������� ������
	if (dataGridView1->SelectedCells->Count > 0) {
		// ��������� ������� ���������� ������
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;

		// ����������� ����������� ���� ��� ������������� ��������
		if (MessageBox::Show("�� ������������� ������ ������� " + dataGridView1->Rows[rowIndex]->Cells[2]->Value->ToString() + "?", "������������� ��������", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			// �������� ������ �� DataGridView �� �������
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
}

public:
	bool changing = false;
	// ���������� ������� ����� �� ������ "buttonRedact"
private: System::Void buttonRedact_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ���������� ����� RedactForm
	RedactForm^ redakt = gcnew RedactForm;
	redakt->Show();

	// ��������� ������� ���������� ������ � �������
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	// ������� ����� � DataGridView
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (i == rowind)
		{
			// ���������� ����� ����� RedactForm ���������� �� ��������� ������
			redakt->textBoxSection->Text = row->Cells[1]->Value->ToString();
			redakt->textBoxName->Text = row->Cells[2]->Value->ToString();
			redakt->textBoxAge->Text = row->Cells[3]->Value->ToString();
			redakt->dateTimePicker1->Text = row->Cells[4]->Value->ToString();
			redakt->comboBox1->Text = row->Cells[5]->Value->ToString();
		}
		i++;
	}

	redakt->Visible = false;

	// ���� ��������� ����������� ���� RedactForm ����� "OK"
	if (redakt->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// ���������� �������� ��������� ������ � DataGridView
		dataGridView1->Rows[rowind]->Cells[1]->Value = redakt->textBoxSection->Text;
		dataGridView1->Rows[rowind]->Cells[2]->Value = redakt->textBoxName->Text;
		dataGridView1->Rows[rowind]->Cells[3]->Value = redakt->textBoxAge->Text;
		dataGridView1->Rows[rowind]->Cells[4]->Value = redakt->dateTimePicker1->Text;
		dataGridView1->Rows[rowind]->Cells[5]->Value = redakt->comboBox1->Text;
	}

	changing = true;
}

// ���������� ������� ����� �� ������ "buttonSearcH"
private: System::Void buttonSearcH_Click(System::Object^ sender, System::EventArgs^ e) {
	// ������������ ��������� ������ � ���������� ���� ������
	bool isVisible = this->buttonSrch->Visible;
	this->buttonSrch->Visible = !isVisible;
	this->textBoxSearch->Visible = !isVisible;
}

// ���������� ������� ����� �� ������ "buttonSrch"
private: System::Void buttonSrch_Click(System::Object^ sender, System::EventArgs^ e) {
	// ������� ��������� � DataGridView
	this->dataGridView1->ClearSelection();

	// ��������� ������ ��� ������
	String^ searchText = this->textBoxSearch->Text->ToLower();

	// ����� � ��������� �����, ���������� ����� ��� ������
	for each (DataGridViewRow ^ row in this->dataGridView1->Rows) {
		for each (DataGridViewCell ^ cell in row->Cells) {
			if (cell->Value != nullptr && cell->Value->ToString()->ToLower()->Contains(searchText)) {
				cell->Selected = true;
			}
		}
	}
}

// ���������� ������� ���������� ����� � DataGridView
private: System::Void dataGridView1_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
	// ���������� ������� ����� � ������ �������
	for (int i = 0; i < e->RowCount; i++) {
		int rowIndex = e->RowIndex + i;
		this->dataGridView1->Rows[rowIndex]->Cells[0]->Value = (rowIndex + 1).ToString();
	}
}

// ���������� ������� ��������� �������� ������ � DataGridView
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// ��������� ������ isModified � isDataSaved
	isModified = true;
	isDataSaved = false;

	// ��������, ���� �� ������ � DataGridView
	if (dataGridView1->Rows->Count == 0) {
		// ���� ��� �����, ��������� ��������������� �������� ����������
		saveToolStripMenuItem->Enabled = false;
		saveAsToolStripMenuItem->Enabled = false;
		buttonRedact->Enabled = false;
		buttonDelete->Enabled = false;
		buttonSearcH->Enabled = false;
		buttonYoungestPerson->Enabled = false;
		buttonTwoAndMore->Enabled = false;
		sortToolStripMenuItem->Enabled = false;
		buttonHasRank->Enabled = false;
	}
	else {
		// ���� ���� ������, �������� ��������������� �������� ����������
		saveToolStripMenuItem->Enabled = true;
		saveAsToolStripMenuItem->Enabled = true;
		buttonRedact->Enabled = true;
		buttonDelete->Enabled = true;
		buttonSearcH->Enabled = true;
		buttonYoungestPerson->Enabled = true;
		buttonTwoAndMore->Enabled = true;
		sortToolStripMenuItem->Enabled = true;
		buttonHasRank->Enabled = true;
	}
}
// ���������� ������� �������� �����
private: System::Void mainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	// ��������, ���� �� ������� ��������� � �� ���� �� ������ ���������
	if (isModified && !isDataSaved) {
		// ���������� ���������� ���� � �������� � ���������� ���������
		if (MessageBox::Show("�� ������ ��������� ��������� ��������� ����� �������?", "�������� �����", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			// ���� ������������ ������ ��������� ���������, ��������� ���������� ���� ���������� �����
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "Binary files (*.bin)|*.bin";
			saveFileDialog->Title = "Save data to binary file";

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				currentFileName = saveFileDialog->FileName;
				saveDataToFile(currentFileName);
				isDataSaved = true;
			}
		}
		else {
			// ���� ������������ �� ������ ��������� ���������, ��������� ����� ��� ����������
			e->Cancel = false;
			isModified = false;
			isDataSaved = false;
			this->Close();
		}
	}
}

private: System::Void NumberAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Number"], ListSortDirection::Ascending);
}
private: System::Void NumberDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Number"], ListSortDirection::Descending);
}
private: System::Void NameAcsendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Name"], ListSortDirection::Ascending);
}
private: System::Void nameDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Name"], ListSortDirection::Descending);
}
private: System::Void AgeAscendingToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Age"], ListSortDirection::Ascending);
}
private: System::Void AgeDescendingToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Age"], ListSortDirection::Descending);
}
private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["YearOfStudying"], ListSortDirection::Ascending);
}
private: System::Void yearDescending���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["YearOfStudying"], ListSortDirection::Descending);
}
private: System::Void rankAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["rank"], ListSortDirection::Ascending);
}
private: System::Void rankDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["rank"], ListSortDirection::Descending);
}
private: System::Void SectionAscendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Section"], ListSortDirection::Ascending);
}
private: System::Void SectionDescendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Sort(dataGridView1->Columns["Section"], ListSortDirection::Descending);
}
// ���������� ������� ������� ������ "����� ������� ������"
private: System::Void buttonYoungestPerson_Click(System::Object^ sender, System::EventArgs^ e) {
	// ������������� ����������
	int minAge = Int32::MaxValue;
	String^ youngestPatient;

	// ����� ������ �������� �������
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (row->Cells["Age"]->Value != nullptr && Convert::ToInt32(row->Cells["Age"]->Value) < minAge)
		{
			minAge = Convert::ToInt32(row->Cells["Age"]->Value);
			youngestPatient = (String^)row->Cells["Name"]->Value;
		}
	}

	// ����������� ��������� � ����������� � ����� ������� �������
	MessageBox::Show("����� ������� ������: " + youngestPatient);
}

// ���������� ������� ������� ������ "��������� � �������"
private: System::Void buttonHasRank_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ����� ��� ����������� ���������� � �������
	HasRankForm^ rankform = gcnew HasRankForm();
	rankform->Show();

	// ����� � ���������� ���������� � ������� � �����
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		String^ value = dataGridView1->Rows[i]->Cells[5]->Value->ToString();
		if (value != "�����������")
		{
			array<Object^>^ values = gcnew array<Object^>(dataGridView1->Columns->Count);
			for (int j = 0; j < dataGridView1->Columns->Count; j++)
				values[j] = dataGridView1->Rows[i]->Cells[j]->Value;
			rankform->AddRowToDataGridView(values);
		}
	}
}

// ���������� ������� ������� ������ "��� � ����� ������"
private: System::Void buttonTwoAndMore_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ����� ��� ����������� ���������� � ����������� ��������
	TwoAndMore^ twomore = gcnew TwoAndMore();
	twomore->Show();

	// ����� � ���������� ���������� � ����������� �������� � �����
	bool alreadyDisplayed = false;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		String^ value1 = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
		String^ value2 = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
		bool alreadyAdded = false;
		for (int j = 0; j < dataGridView1->Rows->Count; j++) {
			if (dataGridView1->Rows[j]->Cells[2]->Value->ToString() == value2 && dataGridView1->Rows[j]->Cells[1]->Value->ToString() != value1) {
				alreadyAdded = true;
				break;
			}
		}
		if (alreadyAdded && !alreadyDisplayed) {
			array<Object^>^ values = gcnew array<Object^>(dataGridView1->Columns->Count);
			for (int j = 0; j < dataGridView1->Columns->Count; j++)
				values[j] = dataGridView1->Rows[i]->Cells[j]->Value;
			twomore->AddRowToDataGridView(values);
			alreadyDisplayed = true;
		}
	}
}

// ���������� ������� ������� ������ ���� "����������"
private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������, ��� ���� ���������� ������
	if (dataGridView1->SelectedCells->Count > 0) {
		// ����������� �������� ���������� ������ � ����� ������
		Clipboard::SetText(dataGridView1->SelectedCells[0]->Value->ToString());
	}
}

// ���������� ������� ������� ������ ���� "��������"
private: System::Void inputToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������� �������� �� ������ ������
	String^ pasteText = Clipboard::GetText();

	// ��������, ��� ���� ���������� ������
	if (dataGridView1->SelectedCells->Count > 0)
	{
		// ��������� ������� ���������� ������
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
		int colIndex = dataGridView1->SelectedCells[0]->ColumnIndex;

		// ������� �������� � ������
		dataGridView1->Rows[rowIndex]->Cells[colIndex]->Value = pasteText;
	}
}

// ���������� ������� ������� ������ ���� "�������������"
private: System::Void redactToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ����� ��� �������������� ������
	RedactForm^ redakt = gcnew RedactForm;
	redakt->Show();

	// ��������� ������� ���������� ������
	int rowind = dataGridView1->SelectedCells[0]->RowIndex;
	int colind = dataGridView1->SelectedCells[0]->ColumnIndex;

	int i = 0;
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (i == rowind)
		{
			// ���������� ����� ����� ������� �� ���������� ������
			redakt->textBoxSection->Text = row->Cells[1]->Value->ToString();
			redakt->textBoxName->Text = row->Cells[2]->Value->ToString();
			redakt->textBoxAge->Text = row->Cells[3]->Value->ToString();
			redakt->dateTimePicker1->Text = row->Cells[4]->Value->ToString();
			redakt->comboBox1->Text = row->Cells[5]->Value->ToString();
		}
		i++;
	}
	redakt->Visible = false;

	// �������� ���������� ����������� ����� ��������������
	if (redakt->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// ���������� ������ � �������
		dataGridView1->Rows[rowind]->Cells[1]->Value = redakt->textBoxSection->Text;
		dataGridView1->Rows[rowind]->Cells[2]->Value = redakt->textBoxName->Text;
		dataGridView1->Rows[rowind]->Cells[3]->Value = redakt->textBoxAge->Text;
		dataGridView1->Rows[rowind]->Cells[4]->Value = redakt->dateTimePicker1->Text;
		dataGridView1->Rows[rowind]->Cells[5]->Value = redakt->comboBox1->Text;
	}
	changing = true;
}

// ���������� ������� ������� ������ ���� "�������"
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������, ��� ���� ���������� ������
	if (dataGridView1->SelectedCells->Count > 0) {
		// ��������� ������� ���������� ������
		int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;

		// ������������� �������� � �������� ������ �� �������
		if (MessageBox::Show("�� ������������� ������ ������� " + dataGridView1->Rows[rowIndex]->Cells[2]->Value->ToString() + "?", "������������� ��������", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			dataGridView1->Rows->RemoveAt(rowIndex);
		}
	}
}

private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
};
}
