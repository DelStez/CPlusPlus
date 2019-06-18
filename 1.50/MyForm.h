#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label4;

	protected:

	protected:

	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Determination_Frisk (Rus, Eng)", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(15, 68);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 24);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите номер сверхпростого числа:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(157, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 14);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Свехпростое число:";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Determination_Frisk (Rus, Eng)", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(195, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 24);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Click Me";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(208, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 14);
			this->label3->TabIndex = 5;
			this->label3->Text = L"    ";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(15, 157);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(118, 60);
			this->listBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 14);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Простые числа:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(317, 235);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Determination_Frisk (Rus, Eng)", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"1.50";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		for (int t = 2; t < 50; t++) {
			bool primes_list = true;
			for (int l = 2; l*l <= t; l++) {
				if (t % l == 0) { primes_list = false; break;}
			}
			if (primes_list) listBox1->Items->Add(t);
		}
	}
	private: System::Void Click(System::Object^  sender, System::EventArgs^  e) {
		int k;
		int super_index;
		int count_super_n = 0;								//Простым числом будем называть натуральное число, большее единицы и делящееся 
		int count_pi = 0;									//только на единицу и на само себя.Выпишем все простые числа в порядке возрастания и i - е 
		extern int simple[];
		k = System::Convert::ToInt32(textBox1 -> Text);		//в этом порядке число обозначим pi(число 2 при этом будет иметь номер 1).
		if (k == 0) label3->Text = "Индекс не должен быть равен нулю!";			//Так, например, p1 = 2, p2 = 3, p3 = 5, p52 = 239.
		else {																	//Скажем, что число pi является сверхпростым, если i = pk для некоторого k.
		for (int n = 2; ; n++) {												//Иными словами, сверхпростое число — это простое число, 
		bool prime = true;									//номер которого в списке простых чисел, упорядоченном по возрастанию, является простым числом.
		for (int j = 2; j*j <= n; j++) {					//Дано натуральное число k.Упорядочим все сверхпростые числа по возрастанию.
			if (n % j == 0) prime = false;					//Найдите k - е сверхпростое число в этом порядке.
				}
		if (prime) { count_pi++; super_index = n;}
				if (count_pi == k) break;
			}

			for (super_index; ; super_index++) {
				bool prime = true;
				for (int j = 2; j*j <= super_index; j++) {
					if (super_index % j == 0) prime = false;
				}
				if (prime) count_super_n++;
				if (count_super_n == k) break;
			}
			label3 ->Text = super_index.ToString();
			
}

}



};
}
