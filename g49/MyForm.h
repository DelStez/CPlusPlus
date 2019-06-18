#include <cmath>
#include <vector>
#pragma once

namespace Nfigure {

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
			aPen = gcnew System::Drawing::Pen(Color::Black, 1);
			MyBrush = gcnew SolidBrush(Color::Aqua);
			textBox3->BackColor = Drawing::Color::Black;
			textBox4->BackColor = Drawing::Color::Aqua;
			
			
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;



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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(12, 14);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 400);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::PictureBox1_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(418, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(231, 399);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры Многоугольника";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::DarkRed;
			this->label6->Location = System::Drawing::Point(6, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"  ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(173, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 21);
			this->button2->TabIndex = 6;
			this->button2->Text = L"...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(119, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label5->Location = System::Drawing::Point(6, 208);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"№4.9 Построить правильный\r\n n-угольник со стороной a.";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(9, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(216, 49);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Готово";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 21);
			this->button1->TabIndex = 5;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Location = System::Drawing::Point(119, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Цвет контура:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Цвет Заливки:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(119, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Сторона a:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Колличество углов:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 423);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Drawing::Pen^ aPen;
		System::Drawing::SolidBrush^ MyBrush;
		array <Brush^>^ hBrsh;
		array <Drawing::Color>^ Clr;
		int n, a;
		double z = 0;
		int i = 0;
		bool t;
		int R;
		bool Active = false;
		array<Point>^ Koord;
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')|| (e->KeyChar <= '\b'))
			return;
		e->Handled = true; 
		//if ( (textBox2->TextLength > 0)) button3->Enabled = true;
		//else button3->Enabled = false;
		if (e->KeyChar == (char)Keys::Enter) textBox2->Focus();
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{	
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar <= '\b'))
			return;
		e->Handled = true;
		if (e->KeyChar == (char)Keys::Enter) button1->Focus();
	}
	
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->TextLength > 0) && (textBox2->TextLength > 0))
		{
			if (Convert::ToInt32(textBox1->Text) != 1 &&
				Convert::ToInt32(textBox2->Text) != 0) {button3->Enabled = true;}
			button3->Enabled = true;
			
		}
		else button3->Enabled = false;
	}
	private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->TextLength > 0) && (textBox2->TextLength > 0))
		{
			if (Convert::ToInt32(textBox1->Text) != 1 &&
				Convert::ToInt32(textBox2->Text) != 0)
			button3->Enabled = true;
		}
		else button3->Enabled = false;
	}
	//цвет контура
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->Color = textBox3->BackColor;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			aPen->Color = colorDialog1->Color;
			textBox3->BackColor = colorDialog1->Color;
		}
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->Color = textBox4->BackColor;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MyBrush->Color = colorDialog1->Color;
			textBox4->BackColor = colorDialog1->Color;
		}
	}
//Рисования Фигуры	
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label6->Text = " ";
		n = Convert::ToInt32(textBox1->Text); //n-угольник
		a = Convert::ToInt32(textBox2->Text); // длина стороны
		int angle;
		t = true;
		Koord = gcnew array<Point>(n);
		int R = a / (2 * Math::Sin(Math::PI / n));
		for (int i = 0; i < n; i++)
		{
			Koord[i].X = 200 + (int)((Math::Cos((z * Math::PI) / 180) * R));
			Koord[i].Y = 200 - (int)((Math::Sin((z * Math::PI) / 180) * R));
			z = z + 360 / n;
		}
		pictureBox1->Invalidate();		
	}
private: System::Void PictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	if(t){
		e->Graphics->FillPolygon(MyBrush, Koord);
		e->Graphics->DrawPolygon(aPen, Koord);	
	}
}
};
}
