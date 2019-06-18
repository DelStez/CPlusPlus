#include "Form1.h"
#include <fstream>
#pragma once

namespace Files {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	value struct userCar
	{
		String^ mark;
		String^ number;
		String^ surname;		
	};
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		List<userCar>^ users = gcnew List<userCar>();
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

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ expToolStripMenuItem;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ informations;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox2;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;







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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->expToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->informations = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(510, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->createToolStripMenuItem,
					this->toolStripMenuItem3, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem1->Text = L"Файл";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->createToolStripMenuItem->Text = L"Создать Новые Сведения";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::CreateToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(212, 22);
			this->toolStripMenuItem3->Text = L"Загрузить Сведения";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItem3_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(212, 22);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->expToolStripMenuItem });
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(65, 20);
			this->toolStripMenuItem2->Text = L"Справка";
			// 
			// expToolStripMenuItem
			// 
			this->expToolStripMenuItem->Name = L"expToolStripMenuItem";
			this->expToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->expToolStripMenuItem->Text = L"О программе...";
			this->expToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExpToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 298);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Поиск Марки";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(490, 69);
			this->listBox1->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(6, 320);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(505, 115);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результат Поиска:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Количество Данной Марки";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(158, 94);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(338, 17);
			this->listBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 295);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(419, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 21);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// informations
			// 
			this->informations->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->informations->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3
			});
			this->informations->Location = System::Drawing::Point(6, 19);
			this->informations->Name = L"informations";
			this->informations->Size = System::Drawing::Size(496, 267);
			this->informations->TabIndex = 7;
			this->informations->UseCompatibleStateImageBehavior = false;
			this->informations->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Марка";
			this->columnHeader1->Width = 195;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Номер";
			this->columnHeader2->Width = 125;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Владелец";
			this->columnHeader3->Width = 174;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->informations);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(0, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(510, 440);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(292, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L" ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 467);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"№7.28";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private:
	System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->TextLength > 0))button1->Enabled = true;
		else button1->Enabled = false;}
	System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {this->Close();}
private: 
	System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int kolMarks = 0;
	listBox1->Items->Clear();
	listBox2->Items->Clear();
	String^ searchtext = textBox1->Text;
	bool p = false;
	for each (userCar var in users) {
		String^ StructMarks = Convert::ToString(var.mark);
		if (StructMarks->ToLower() == searchtext->ToLower() || StructMarks == searchtext) {
			String^ h = ("{0}\n", var.surname) + " " + ("{0}\n", var.number) + "\n";
			listBox1->Items->Add(h);
			p = true;
			kolMarks++;
		}
	}
	if (!p) {
		String^ h = "Ничего не найдено";
		listBox1->Items->Add(h);
		listBox2->Text = "0";
	}
	else listBox2->Items->Add(kolMarks);
}
private: System::Void ExpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("7.28 Сведения об автомобиле состоят из его марки, номера и фамилии владельца. Дан файл f, содержащий сведения о нескольких автомобилях. Найти: "
		"а) фамилии владельцев и номера автомобилей данной марки;"
	"б) количество автомобилей данной марки.");
}
private: System::Void ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	informations->Items->Clear();
	listBox1->Items->Clear();
	listBox2->Items->Clear();
	StreamReader^ file_f = File::OpenText("f.txt");
	if (file_f->Peek() != EOF)
	{
		userCar^ marks = gcnew userCar;
		label3->Text = "";
		groupBox2->Enabled = true;
		while (!file_f->EndOfStream)
		{
			String^ line = file_f->ReadLine();
			auto arr = line->Split();
			marks->mark = arr[0];
			marks->number = arr[1];
			marks->surname = arr[2];
			users->Add(*marks);
			ListViewItem^ itemOnList = gcnew ListViewItem(arr[0]);
			itemOnList->SubItems->Add(arr[1]);
			itemOnList->SubItems->Add(arr[2]);
			informations->Items->Add(itemOnList);

		}
		file_f->Close();

	}
	else { label3->Text = "*Файл пуст!"; file_f->Close(); }
}
};
}