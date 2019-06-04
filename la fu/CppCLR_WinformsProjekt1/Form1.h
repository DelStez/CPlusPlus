#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить в файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите числа(по одному), \r\nсодержащиеся в файле f:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox1_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Location = System::Drawing::Point(263, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(514, 269);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Location = System::Drawing::Point(258, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(250, 241);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Файл H";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 19);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(239, 216);
			this->textBox3->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Location = System::Drawing::Point(6, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(250, 241);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Файл G";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 19);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(239, 216);
			this->textBox2->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Распределить по h и g";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(5, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(259, 273);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(251, 247);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавление";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(251, 247);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"О программе";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(229, 144);
			this->label2->TabIndex = 0;
			this->label2->Text = L" Дан файл f, компоненты\r\n которого являются\r\n целыми числами.\r\n Записать в файл g"
				L" все четные \r\nчисла из файла f,\r\n а в файл h – все нечетные.\r\n Порядок следовани"
				L"я \r\nчисел сохранить.";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 282);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::MyForm_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			ofstream filef;
			filef.open("f.txt", ofstream::trunc);
			filef.close();
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button2->Enabled = true;
		auto MyWriter = gcnew IO::StreamWriter("f.txt", true);
		int a = System::Int32::Parse(textBox1->Text);
		string q = to_string(a);
		
		MyWriter->Write(a);
		textBox1->Clear();
		MyWriter->Close();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (!String::IsNullOrWhiteSpace(textBox1->Text))
	{
		button1->Enabled = true;
	}
	else
	{
		button1->Enabled = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->TextLength != 0 || textBox3->TextLength != 0) { textBox2->Clear(); textBox3->Clear();}
	ofstream fileG("g.txt");
	ofstream fileH("h.txt");
	fileG.clear();
	fileH.clear();
	fileG.close();
	fileH.close();
	StreamReader^ filef = gcnew StreamReader("f.txt");
	auto MyWriter1 = gcnew IO::StreamWriter("g.txt", true);
	auto MyWriter2 = gcnew IO::StreamWriter("h.txt", true);
	int q;

	while (!filef->EndOfStream)
	{
		q = filef->Read();
		if (q % 2 == 0) MyWriter1->Write(q);
		else MyWriter2->Write(q);
	}
	filef->Close();
	MyWriter1->Close();
	MyWriter2->Close();
	StreamReader^ fileg = gcnew StreamReader("g.txt");
	String^ g = fileg->ReadToEnd();
	textBox2->Text = g;
	fileg->Close();
	StreamReader^ fileh = gcnew StreamReader("h.txt");
	String^ h = fileh->ReadToEnd();
	textBox3->Text = h;
	fileh->Close();
}
private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar <= '\b')) return;
	else e->Handled = true;
}
};
}
