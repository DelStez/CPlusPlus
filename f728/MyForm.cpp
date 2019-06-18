#include "MyForm.h"
#include "fstream"
#include "iostream"
#include "string"

using namespace Files; //name of your project
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;

[STAThreadAttribute]
void Main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

}

Void Files::Form1::Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	text += Files::Form1::textBox1->Text + " " + Files::Form1::textBox2->Text + " " + Files::Form1::textBox3->Text + "\n";
	ListViewItem^ itemOnList = gcnew ListViewItem(textBox1->Text);
	itemOnList->SubItems->Add(Files::Form1::textBox2->Text);
	itemOnList->SubItems->Add(Files::Form1::textBox3->Text);
	listView1->Items->Add(itemOnList);
	Files::Form1::textBox1->Clear();
	Files::Form1::textBox2->Clear();
	Files::Form1::textBox3->Clear();
	
}
Void Files::MyForm::CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	informations->Items->Clear();
	users->Clear();
	label3->Text = "";
	Form1^ newForm = gcnew Form1();
	newForm->ShowDialog();
}
Void Files::Form1::Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Сохранить файл?", "", MessageBoxButtons::YesNo) == ::DialogResult::Yes) {
		StreamWriter^ file_f = gcnew StreamWriter("f.txt");
		file_f->Write(text);
		file_f->Close();
	}
}
