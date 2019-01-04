#pragma once
#include <iostream>
#include "ReverseGoL.h"

namespace AlternachGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label4;

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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(10, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(300, 300);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(330, 40);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->Size = System::Drawing::Size(300, 300);
			this->dataGridView2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(165, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Resize";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(330, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 25);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Get result";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(330, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Output";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(10, 351);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(65, 24);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(95, 351);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(65, 24);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(78, 353);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"x";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown3->Location = System::Drawing::Point(481, 351);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(65, 24);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(552, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"of 0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 386);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Reverse Game of Life";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: void SetGrid(System::Windows::Forms::DataGridView^ grid, int** field, int m, int n) {
		grid->Rows->Clear();
		grid->ColumnCount = n;
		int sumWidth = 0;
		int max = m > n ? m : n;
		float eachWidth = ((float)grid->Width) / max;
		float expected = 0;
		for (int i = 0; i < m; i++) {
			grid->Rows->Add();
			for (int j = 0; j < n; j++) {
				grid->Rows[i]->Cells[j]->Style->BackColor = field[i][j] ? Color::Black : Color::White;
				grid->Rows[i]->Cells[j]->Style->SelectionBackColor = Color::Transparent;
				grid->Rows[i]->Cells[j]->Style->SelectionForeColor = Color::Transparent;
			}
			expected += eachWidth;
			grid->Rows[i]->Height = (int)(expected - sumWidth);
			sumWidth += grid->Rows[i]->Height;
		}
		expected = 0;
		sumWidth = 0;
		for (int j = 0; j < n; j++)
		{
			expected += eachWidth;
			grid->Columns[j]->Width = (int)(expected - sumWidth);
			sumWidth += grid->Columns[j]->Width;
		}
		grid->ClearSelection();
	}

	private: void ResizeGrid(int m, int n) {
		int** field = (int**)malloc(m * sizeof(int*));
		for (int i = 0; i < m; i++) {
			field[i] = (int*)malloc(n * sizeof(int));
			for (int j = 0; j < n; j++)
				field[i][j] = 0;
		}
		SetGrid(this->dataGridView1, field, m, n);
		for (int i = 0; i < m; i++)
			free(field[i]);
		free(field);
	}

	private: int** GetInputField() {
		int** field = (int**)malloc(this->dataGridView1->RowCount * sizeof(int*));
		for (int i = 0; i < this->dataGridView1->RowCount; i++) {
			field[i] = (int*)malloc(this->dataGridView1->ColumnCount * sizeof(int));
			for (int j = 0; j < this->dataGridView1->ColumnCount; j++)
				field[i][j] = (this->dataGridView1->Rows[i]->Cells[j]->Style->BackColor == Color::Black) - 2;
		}
		return field;
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		ResizeGrid(3, 3);
		FindAllPatterns();
		Set_NUM_OF_FIELDS(0);
		Set_FIELDS(nullptr);
	}

	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor == Color::Black ? Color::White : Color::Black;
		this->dataGridView1->ClearSelection();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ResizeGrid(Decimal::ToInt32(this->numericUpDown1->Value), Decimal::ToInt32(this->numericUpDown2->Value));
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int num_of_fields = Get_NUM_OF_FIELDS();
		int*** fields = Get_FIELDS();
		for (int i = 0; i < num_of_fields; i++)
			FreeField(fields[i], this->dataGridView1->RowCount);
		free(fields);
		Set_NUM_OF_FIELDS(0);
		Set_FIELDS(nullptr);
		int** field = GetInputField();
		FindAllFields(field, this->dataGridView1->RowCount, this->dataGridView1->ColumnCount);
		fields = Get_FIELDS();
		this->numericUpDown3->Minimum = 1;
		this->numericUpDown3->Maximum = Get_NUM_OF_FIELDS();
		this->label4->Text = "of " + System::Convert::ToString(Get_NUM_OF_FIELDS());
		int** reformField = ReformField(fields[0], this->dataGridView1->RowCount, this->dataGridView1->ColumnCount);
		SetGrid(this->dataGridView2, reformField, this->dataGridView1->RowCount + 2, this->dataGridView1->ColumnCount + 2);
		FreeField(reformField, this->dataGridView1->RowCount);
	}

	private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int*** fields = Get_FIELDS();
		int** reformField = ReformField(fields[Decimal::ToInt32(this->numericUpDown3->Value) - 1], this->dataGridView1->RowCount, this->dataGridView1->ColumnCount);
		SetGrid(this->dataGridView2, reformField, this->dataGridView1->RowCount + 2, this->dataGridView1->ColumnCount + 2);
		FreeField(reformField, this->dataGridView1->RowCount);
	}

	};
}
