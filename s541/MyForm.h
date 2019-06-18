#include <ctype.h>
#include <stdio.h>
#include <windows.h>
#pragma once


namespace telephoneBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace std;
	
	value struct usersTelephone
	{
		String^ surname;
		String^ number;
	};



	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		List<usersTelephone>^ users = gcnew List<usersTelephone>();
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::ListView^ ListUsers;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	



	private: System::Windows::Forms::ListBox^ ListSearch;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label3;


	private: System::ComponentModel::IContainer^ components;








	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ListUsers = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ListSearch = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 78);
			this->label1->TabIndex = 2;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(155, 17);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 20);
			this->button3->TabIndex = 19;
			this->button3->TabStop = false;
			this->button3->Text = L"Найти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::SearchClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 18;
			this->textBox1->TabStop = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// ListUsers
			// 
			this->ListUsers->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ListUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->ListUsers->GridLines = true;
			this->ListUsers->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->ListUsers->Location = System::Drawing::Point(231, 22);
			this->ListUsers->Name = L"ListUsers";
			this->ListUsers->Size = System::Drawing::Size(250, 240);
			this->ListUsers->TabIndex = 15;
			this->ListUsers->TabStop = false;
			this->ListUsers->UseCompatibleStateImageBehavior = false;
			this->ListUsers->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Фамилия";
			this->columnHeader1->Width = 142;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Номер";
			this->columnHeader2->Width = 104;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(204, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 113);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(204, 20);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox3_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Фамилия";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(9, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Номер";
			// 
			// ListSearch
			// 
			this->ListSearch->FormattingEnabled = true;
			this->ListSearch->Location = System::Drawing::Point(6, 43);
			this->ListSearch->Name = L"ListSearch";
			this->ListSearch->Size = System::Drawing::Size(207, 186);
			this->ListSearch->TabIndex = 0;
			this->ListSearch->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(4, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(223, 263);
			this->tabControl1->TabIndex = 23;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(215, 237);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавление Контактов";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->ListSearch);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(215, 237);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Поиск";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(228, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Контакты";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(487, 358);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ListUsers);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"5.41";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->TextLength > 0) button3->Enabled = true;
		else button3->Enabled = false;
	}
	
	private: System::Void TextBox2_KeyPress(System::Object ^ sender, System::Windows::Forms::KeyPressEventArgs ^ e) {
	if (e->KeyChar == (char)Keys::Enter) textBox3->Focus();
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox2->TextLength > 0) && (textBox3->TextLength > 0))button2->Enabled = true;
		else button2->Enabled = false;
	
	}
	private: System::Void TextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar <= '\b'))	return;
		e->Handled = true;
		if (e->KeyChar == (char)Keys::Enter) button2->Focus();
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox2->TextLength > 0) && (textBox3->TextLength > 0))button2->Enabled = true;
		else button2->Enabled = false;

	
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		usersTelephone^ user = gcnew usersTelephone;

		user->surname = textBox2->Text;
		user->number = textBox3->Text;
		users->Add(*user);
		ListViewItem^ itemOnList = gcnew ListViewItem(user->surname);
		itemOnList->SubItems->Add(user->number);
		ListUsers->Items->Add(itemOnList);
		textBox2->Clear();
		textBox3->Clear();

	}

	private: System::Void SearchClick(System::Object^ sender, System::EventArgs^ e) {
		ListSearch->Items->Clear();
		String^ t = textBox1->Text;
		bool itsNumber = false;
		bool itsSurname = false;
		if (isdigit((unsigned char)t[0])) itsNumber = true;
		else itsSurname = true;
		int y = textBox1->Text->Length;
		for each (usersTelephone var in users) {
			bool p = false;
			if (itsSurname) {
				for (int u = 0; u < y; u++) {
					String^ SymbolStruct = Convert::ToString(var.surname[u]);
					String^ SymbolSearch = Convert::ToString(t[u]);
					if (SymbolStruct->ToLower() == SymbolSearch->ToLower() || SymbolStruct == SymbolSearch) p = true;
					else { p = false; break; }
				}
				if (p) {
					String^ h = ("{0}\n", var.surname) + " " + ("{0}\n", var.number) + "\n";
					ListSearch->Items->Add(h);
				}
			}
			if (itsNumber) {
				for (int u = 0; u < y; u++) {
					if (var.number[u] == t[u]) p = true;
					else { p = false; break; }
				}
				if (p) {
					String^ h = ("{0}\n", var.surname) + " " + "\n";
					ListSearch->Items->Add(h);
				}

			}  
		}
		if (ListSearch->Items->Count == 0){
				String ^ h = "Ничего не найдено";
				ListSearch->Items->Add(h);
		}
}

private: System::Void ClearClick(System::Object^ sender, System::EventArgs^ e) {
	users->Clear();
	ListUsers->Items->Clear();
	ListSearch->Items->Clear();
}

};
}
