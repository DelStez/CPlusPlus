
#pragma once
namespace unions {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 177);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddForm";
			this->Text = L"AddForm";
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//MainForm^ df = (MainForm^)Owner;
	//Owner->Enabled = true;
	//if (radioButton1->Checked) {
	//	DateTime dateTime = AddForm::dateTimePicker1->Value;
	//	String^ s2 = dateTime.ToShortDateString();
	//	df->MyFunc(textBox1->Text, s2 , Convert::ToString(comboBox1->SelectedItem));//Стунденты
	//}
	//else {
	//	Void MyFunc1();//Дерево
	//	}

}
};
}
