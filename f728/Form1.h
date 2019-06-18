#include <fstream>
#include <io.h>

namespace Files {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(13, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(250, 201);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сведения о Владельце";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 23);
			this->button1->TabIndex = 4;
			this->button1->Enabled = false;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Location = System::Drawing::Point(7, 95);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(232, 55);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Фамилия";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(7, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 20);
			this->textBox3->TabIndex = 0;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox3_KeyPress);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Location = System::Drawing::Point(126, 34);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(113, 55);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Номер";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox2_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(7, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(113, 55);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Марка";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox1_KeyPress);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->listView1);
			this->groupBox6->Location = System::Drawing::Point(270, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(328, 201);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Предосмотр";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(7, 19);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(315, 175);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Марка";
			this->columnHeader1->Width = 102;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Номер";
			this->columnHeader2->Width = 90;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Фамилия";
			this->columnHeader3->Width = 119;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 219);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Заполнение Файла";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			//this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ text;
		bool p = false;
	private:
		System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if ((textBox1->TextLength > 0) && (textBox2->TextLength > 0)&&
				(textBox3->TextLength > 0))button1->Enabled = true;
			else button1->Enabled = false;
		}
		System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (e->KeyChar == (char)Keys::Enter) textBox2->Focus();}
		System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if ((textBox1->TextLength > 0) && (textBox2->TextLength > 0) &&
				(textBox3->TextLength > 0))button1->Enabled = true;
			else button1->Enabled = false;
		}
		System::Void TextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar <= '\b'))
				return;
			e->Handled = true;
			if (e->KeyChar == (char)Keys::Enter) textBox3->Focus();}
		System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if ((textBox1->TextLength > 0) && (textBox2->TextLength > 0) &&
				(textBox3->TextLength > 0))button1->Enabled = true;
			else button1->Enabled = false;
		}
		System::Void TextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (e->KeyChar == (char)Keys::Enter) button1->Focus();}
		System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		




};
}
