#include "MainForm.h"
#include <algorithm>
#include "vector"
#include "string"
#include "msclr\marshal.h"

using namespace unions; //name of your project
using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;
using namespace System::Runtime::InteropServices;

[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());

}

union individualInfo {
	int Numerlous;
	const char* birthdate;
};

struct sCatalog
{
	const char* FamilyOrName;
	const char* poll;
	int ageday;
	individualInfo data;

};
std::vector<sCatalog> arrStundtree;
struct is_large_functor //"функциолнальный объект" для сортировки вектора
{
	bool operator()(const sCatalog& a, const sCatalog& b)
	{	
		return a.data.Numerlous < b.data.Numerlous;
	}
};
System::Void MainForm::RadioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	if (radioButton1->Checked) {
		label1->Text = "Фамилия  И.О.";
		label2->Text = "Дата рождения";
		textBox2->Visible = false;
		dateTimePicker1->Visible = true;
		comboBox1->Visible = true;
		label3->Visible = true;
	}
	else {
		label1->Text = "Название";
		textBox2->Visible = true;
		dateTimePicker1->Visible = false;
		label2->Text = "Количество";
		comboBox1->Visible = false;
		label3->Visible = false;
	}
}
System::Void MainForm::Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		DateTime dateNow = DateTime::Today;
		DateTime dateTime = dateTimePicker1->Value;
		System::TimeSpan diff1 = dateNow.Subtract(dateTime);
		int ageday = diff1.Days;
		String^ s2 = dateTime.ToShortDateString();
		individualInfo un;
		const char* FamilyAndName = (const char*)(Marshal::StringToHGlobalAnsi(textBox1->Text->ToString()).ToPointer());
		const char* poll = (const char*)(Marshal::StringToHGlobalAnsi(comboBox1->SelectedItem->ToString()).ToPointer());
		const char* birthdate = (const char*)(Marshal::StringToHGlobalAnsi(s2).ToPointer());
		un.birthdate = birthdate;
		arrStundtree.push_back({ FamilyAndName, poll,ageday, un });
		String^ h = "Стундент: " + " "+ textBox1->Text + ";  " + "Пол: " + comboBox1->SelectedItem->ToString()  + "; " +
			"Дата Рождения: " + s2 + ";";
		listBox1->Items->Add(h);
		textBox1->Clear();
		comboBox1->SelectedIndex = 0;
		dateTimePicker1->Value = dateTimePicker1->MaxDate;
	}
	else {
		individualInfo un;
		const char* FamilyAndName = (const char*)(Marshal::StringToHGlobalAnsi(textBox1->Text->ToString()).ToPointer());
		int Numerlous = (Convert::ToInt32(textBox2->Text));
		un.Numerlous = Numerlous;
		const char* poll = NULL;
		int ageday = NULL;
		arrStundtree.push_back({ FamilyAndName, poll, ageday, un });
		String^ h = "Дерево: " + " " + textBox1->Text + "; " + "Количество: " + textBox2->Text +";";
		listBox1->Items->Add(h);
		textBox1->Clear();
		textBox2->Clear();
	}
}
System::Void MainForm::Button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox1->Items->Count > 0 || !arrStundtree.empty()) {
		bool bfindsMan = false;
		bool bfindsWM = false;
		unsigned int t = 0;
		unsigned int z = 0;
		for (unsigned int i = 0; i < size(arrStundtree); i++) {
			if (gcnew String(arrStundtree[i].poll) == "М") { t = i; bfindsMan = true; break; }
		}
		for (unsigned int i = 0; i < size(arrStundtree); i++) {
			if (gcnew String(arrStundtree[i].poll) == "Ж") { z = i; bfindsWM = true; break; }
		}
		if (bfindsWM && bfindsMan) {
			listBox1->Items->Clear();
			unsigned int  min = (arrStundtree[t].ageday);
			//Минимальны возвраст для М
			for (unsigned int i = 0; i < size(arrStundtree); i++) {
				if (gcnew String(arrStundtree[i].poll) == "М") {
					if (min > arrStundtree[i].ageday) { min = arrStundtree[i].ageday; t = i; }
				}
			}

			//Нахождение одинаковых Значений
			for (unsigned int j = 0; j < size(arrStundtree); j++) {
				if (gcnew String(arrStundtree[j].poll) != "Ж") {
					if (min == arrStundtree[j].ageday) {
						String^ Surname1 = gcnew String(arrStundtree[j].FamilyOrName);
						String^ polls2 = gcnew String(arrStundtree[j].poll);
						String^ date3 = gcnew String(arrStundtree[j].data.birthdate);
						String^ date2 = gcnew String(arrStundtree[j].data.birthdate);
						String^ h4 = "Стундент: " + " " + Surname1 + ";  " + "Пол: " + polls2 + "; " +
							"Дата Рождения: " + date3 + ";";
						listBox1->Items->Add(h4);
					}
				}
			}
			min = (arrStundtree[t].ageday);
			//Минимальны возвраст для Ж
			for (unsigned int i = 0; i < size(arrStundtree); i++) {
				if (gcnew String(arrStundtree[i].poll) == "М") {
					if (min > arrStundtree[i].ageday) {
						min = arrStundtree[i].ageday;
						bfindsWM = true;
					}
				}
			}
			//Нахождение одинаковых Значений
			for (unsigned int i = 0; i < size(arrStundtree); i++) {
				if (gcnew String(arrStundtree[i].poll) != "М") {
					if (min == arrStundtree[i].ageday) {
						String^ Surname1 = gcnew String(arrStundtree[i].FamilyOrName);
						String^ polls2 = gcnew String(arrStundtree[i].poll);
						String^ date3 = gcnew String(arrStundtree[i].data.birthdate);
						String^ h4 = "Стундент: " + " " + Surname1 + ";  " + "Пол: " + polls2 + "; " +
							"Дата Рождения: " + date3 + ";";
						listBox1->Items->Add(h4);
					}
				}
			}
		}
		else MessageBox::Show("Список разнополых стундентов не удалось создать!");
	}
	else { MessageBox::Show("Список Пуст!"); }
}


System::Void MainForm::Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count > 0 || !arrStundtree.empty()) {
		bool findtree = false;
		std::sort(arrStundtree.begin(), arrStundtree.end(), is_large_functor());
		for (unsigned int y = 0; y < size(arrStundtree); y++)
		{
			if (arrStundtree[y].poll == NULL)
			{
				listBox1->Items->Clear();
				findtree = true;
				String^ NameOfTree = gcnew String(arrStundtree[y].FamilyOrName);
				int NumberlousTree = arrStundtree[y].data.Numerlous;
				String^ g = "Дерево: " + NameOfTree + "; " + "Кол.-во: " + Convert::ToString(NumberlousTree) + ";";
				listBox1->Items->Add(g);
			}
		}
		if (!findtree) MessageBox::Show("Деревьев нет!");
	}
	else { MessageBox::Show("Список Пуст!"); }
}