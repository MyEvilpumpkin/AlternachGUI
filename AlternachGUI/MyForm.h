#pragma once
#include <iostream>
#include "ReverseGoL.h"
#include "MyForm1.h"

Cell* PATTERNS0; // Паттерны не создающие жизнь в центе
int NUM_OF_PATTERNS0; // Количество паттернов, не создающих жизнь в центе
Cell* PATTERNS1; // Паттерны создающие жизнь в центре
int NUM_OF_PATTERNS1; // Количество паттернов, создающих жизнь в центре
int*** FIELDS; // Искомые поля
int NUM_OF_FIELDS; // Количество искомых полей

namespace AlternachGUI {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView1->Location = System::Drawing::Point(13, 49);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(400, 369);
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
			this->dataGridView2->Location = System::Drawing::Point(440, 49);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->Size = System::Drawing::Size(400, 369);
			this->dataGridView2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 12);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(220, 431);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Resize";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(440, 431);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Get result";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(440, 12);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Output";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(13, 432);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(87, 29);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown2->Location = System::Drawing::Point(127, 432);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(87, 29);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(104, 434);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"x";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown3->Location = System::Drawing::Point(593, 432);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(127, 29);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(727, 431);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 31);
			this->label4->TabIndex = 7;
			this->label4->Text = L"of 0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(220, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 30);
			this->button3->TabIndex = 8;
			this->button3->Text = L"View SBE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 475);
			this->Controls->Add(this->button3);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Reverse Game of Life";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
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

	array<array<String^>^>^ BLANK0;
	array<array<String^>^>^ BLANK1;

	private: void CreateBLANKS() {
		BLANK0 = gcnew array<array<String^>^>(NUM_OF_PATTERNS0);
		for (int i = 0; i < NUM_OF_PATTERNS0; i++) {
			BLANK0[i] = gcnew array<String^>(9);
			for (int j = 1; j <= 9; j++) {
				if (MatchCheck(j, PATTERNS0[i].pattern))
					BLANK0[i][j-1] = "x";
				else
					BLANK0[i][j-1] = "¬x";
			}
		}
		BLANK1 = gcnew array<array<String^>^>(NUM_OF_PATTERNS1);
		for (int i = 0; i < NUM_OF_PATTERNS1; i++) {
			BLANK1[i] = gcnew array<String^>(9);
			for (int j = 1; j <= 9; j++) {
				if (MatchCheck(j, PATTERNS1[i].pattern))
					BLANK1[i][j - 1] = "x";
				else
					BLANK1[i][j - 1] = "¬x";
			}
		}
	}

	private: void DeleteBLANKS() {
		for (int i = 0; i < NUM_OF_PATTERNS0; i++)
			delete[] BLANK0[i];
		delete[] BLANK0;
		for (int i = 0; i < NUM_OF_PATTERNS1; i++)
			delete[] BLANK1[i];
		delete[] BLANK1;
	}

	private: void CreateHTML() {
		int** field = GetInputField();
		StreamWriter^ sw = gcnew StreamWriter("SBE.html");
		sw->Write("<html><meta charset=\"utf-8\"><h1>System of Boolean Equations</h1><br><p style = \"word-wrap: break-word\"><em>");
		int maxM = this->dataGridView1->RowCount;
		int maxN = this->dataGridView1->ColumnCount;
		for (int m = 0; m < maxM; m++) {
			for (int n = 0; n < maxN; n++) {
				int nums[9] = {m*(maxN + 2) + n + 1, m*(maxN + 2) + n + 2, m*(maxN + 2) + n + 3, m*(maxN + 2) + n + 1 + (maxN + 2), m*(maxN + 2) + n + 2 + (maxN + 2), m*(maxN + 2) + n + 3 + (maxN + 2), m*(maxN + 2) + n + 1 + (maxN + 2)*2, m*(maxN + 2) + n + 2 + (maxN + 2)*2, m*(maxN + 2) + n + 3 + (maxN + 2)*2};
				if (field[m][n] + 2)
					for (int i = 0; i < NUM_OF_PATTERNS1; i++) {
						sw->Write("(");
						for (int j = 0; j < 9; j++)
							sw->Write(BLANK1[i][j] + "<sub>" + nums[j] + "</sub>");
						sw->Write(")");
						if (i != NUM_OF_PATTERNS1 - 1)
							sw->Write("V");
					}
				else
					for (int i = 0; i < NUM_OF_PATTERNS0; i++) {
						sw->Write("(");
						for (int j = 0; j < 9; j++)
							sw->Write(BLANK0[i][j] + "<sub>" + nums[j] + "</sub>");
						sw->Write(")");
						if (i != NUM_OF_PATTERNS0 - 1)
							sw->Write("V");
					}
			}
		}
		sw->Write("</em></p></html>");
		sw->Close();
	}

	private: void DeleteHTML() {
		String^ path = Directory::GetCurrentDirectory() + "\\SBE.html";
		if (File::Exists(path))
			File::Delete(path);
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		ResizeGrid(3, 3);
		FindAllPatterns();
		CreateBLANKS();
		DeleteHTML();
		NUM_OF_FIELDS = 0;
		FIELDS = nullptr;
	}

	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor == Color::Black ? Color::White : Color::Black;
		this->dataGridView1->ClearSelection();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		FreeFIELDS(this->dataGridView1->RowCount);
		this->dataGridView2->Rows->Clear();
		this->numericUpDown3->Minimum = 0;
		this->numericUpDown3->Value = 0;
		this->numericUpDown3->Maximum = 0;
		this->label4->Text = "of 0";
		ResizeGrid(Decimal::ToInt32(this->numericUpDown1->Value), Decimal::ToInt32(this->numericUpDown2->Value));
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		FreeFIELDS(this->dataGridView1->RowCount);
		int** field = GetInputField();
		FindAllFields(field, this->dataGridView1->RowCount, this->dataGridView1->ColumnCount);
		this->numericUpDown3->Minimum = 1;
		this->numericUpDown3->Maximum = NUM_OF_FIELDS;
		this->label4->Text = "of " + System::Convert::ToString(NUM_OF_FIELDS);
		this->numericUpDown3->Value = 1;
	}

	private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->numericUpDown3->Value != 0) {
			int** reformField = ReformField(FIELDS[Decimal::ToInt32(this->numericUpDown3->Value) - 1], this->dataGridView1->RowCount, this->dataGridView1->ColumnCount);
			SetGrid(this->dataGridView2, reformField, this->dataGridView1->RowCount + 2, this->dataGridView1->ColumnCount + 2);
			FreeField(reformField, this->dataGridView1->RowCount);
		}
	}

	private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		DeleteHTML();
		FreeFIELDS(this->dataGridView1->RowCount);
		DeleteBLANKS();
		FreePatterns();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		DeleteHTML();
		CreateHTML();
		MyForm1^ f1 = gcnew MyForm1();
		f1->Show();
	}
};
}
