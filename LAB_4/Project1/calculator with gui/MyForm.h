#pragma once

namespace calculator {

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

	private: System::Windows::Forms::TextBox^ textbox1;
	protected:


	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnclear;



	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;




	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnmin;





	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btnequal;


	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnmul;
	private: System::Windows::Forms::Button^ btndiv;



	private: System::Windows::Forms::Button^ btnplus;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnPow;






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
			this->textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnmin = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnmul = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textbox1
			// 
			this->textbox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textbox1->Location = System::Drawing::Point(15, 12);
			this->textbox1->Multiline = true;
			this->textbox1->Name = L"textbox1";
			this->textbox1->Size = System::Drawing::Size(495, 50);
			this->textbox1->TabIndex = 1;
			this->textbox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textbox1_TextChanged);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(138, 68);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(120, 77);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(264, 69);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(120, 77);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnclear->Location = System::Drawing::Point(390, 69);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(120, 77);
			this->btnclear->TabIndex = 4;
			this->btnclear->Text = L"Clear";
			this->btnclear->UseVisualStyleBackColor = false;
			this->btnclear->Click += gcnew System::EventHandler(this, &MyForm::btnclear_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(12, 151);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(120, 77);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(138, 151);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(120, 77);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(264, 152);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(120, 77);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(138, 234);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(120, 77);
			this->btn2->TabIndex = 10;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(264, 234);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(120, 77);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btnmin
			// 
			this->btnmin->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnmin->Location = System::Drawing::Point(390, 191);
			this->btnmin->Name = L"btnmin";
			this->btnmin->Size = System::Drawing::Size(120, 37);
			this->btnmin->TabIndex = 12;
			this->btnmin->Text = L"-";
			this->btnmin->UseVisualStyleBackColor = false;
			this->btnmin->Click += gcnew System::EventHandler(this, &MyForm::btnmin_Click);
			// 
			// btndot
			// 
			this->btndot->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btndot->Location = System::Drawing::Point(138, 317);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(120, 77);
			this->btndot->TabIndex = 13;
			this->btndot->Text = L".";
			this->btndot->UseVisualStyleBackColor = false;
			this->btndot->Click += gcnew System::EventHandler(this, &MyForm::btndot_Click);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnequal->Location = System::Drawing::Point(264, 317);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(120, 77);
			this->btnequal->TabIndex = 14;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnequal_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(12, 317);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(120, 77);
			this->btn0->TabIndex = 15;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btnmul
			// 
			this->btnmul->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnmul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnmul->Location = System::Drawing::Point(390, 234);
			this->btnmul->Name = L"btnmul";
			this->btnmul->Size = System::Drawing::Size(120, 37);
			this->btnmul->TabIndex = 16;
			this->btnmul->Text = L"*";
			this->btnmul->UseVisualStyleBackColor = false;
			this->btnmul->Click += gcnew System::EventHandler(this, &MyForm::btnmul_Click);
			// 
			// btndiv
			// 
			this->btndiv->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btndiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btndiv->Location = System::Drawing::Point(390, 274);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(120, 37);
			this->btndiv->TabIndex = 17;
			this->btndiv->Text = L"/";
			this->btndiv->UseVisualStyleBackColor = false;
			this->btndiv->Click += gcnew System::EventHandler(this, &MyForm::btndiv_Click);
			// 
			// btnplus
			// 
			this->btnplus->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnplus->Location = System::Drawing::Point(390, 152);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(120, 37);
			this->btnplus->TabIndex = 18;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = false;
			this->btnplus->Click += gcnew System::EventHandler(this, &MyForm::btnplus_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(12, 234);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(120, 76);
			this->btn1->TabIndex = 19;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(12, 69);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(120, 76);
			this->btn7->TabIndex = 20;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btnPow
			// 
			this->btnPow->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPow->Location = System::Drawing::Point(390, 317);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(120, 37);
			this->btnPow->TabIndex = 21;
			this->btnPow->Text = L"^";
			this->btnPow->UseVisualStyleBackColor = false;
			this->btnPow->Click += gcnew System::EventHandler(this, &MyForm::btnPow_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(519, 407);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->btnmul);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btnmin);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->textbox1);
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: double firstNumber, secondNumber, result;
private: char Operator;

private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (textbox1->Text == "0")
		textbox1->Text = Numbers->Text;
	else
		textbox1->Text = textbox1->Text + Numbers->Text;
}
private: System::Void btnPow_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Double::Parse(textbox1->Text);
	textbox1->Text = "0";
	Operator = '^';
}
//добавляете кнопку новой операции в форму
//private: System::Void 'btn_name'_Click(System::Object ^ sender, System::EventArgs ^ e) {
//	firstNumber = Double::Parse(textbox1->Text);
//	textbox1->Text = "0";
//	Operator = 'new_operation';
//}
private: System::Void btndot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textbox1->Text->Contains("."))
		textbox1->Text = textbox1->Text + ".";
}

private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Double::Parse(textbox1->Text);
	textbox1->Text = "0";
	Operator = '+';
}

private: System::Void btnmin_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Double::Parse(textbox1->Text);
	textbox1->Text = "0";
	Operator = '-';
}

private: System::Void btnmul_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Double::Parse(textbox1->Text);
	textbox1->Text = "0";
	Operator = '*';
}

private: System::Void btndiv_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Double::Parse(textbox1->Text);
	textbox1->Text = "0";
	Operator = '/';
}

private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
	secondNumber = Double::Parse(textbox1->Text);
	switch (Operator)
	{
	case '+':
		result = firstNumber + secondNumber;
		textbox1->Text = System::Convert::ToString(result);
		break;
	case '-':
		result = firstNumber - secondNumber;
		textbox1->Text = System::Convert::ToString(result);
		break;
	case '*':
		result = firstNumber * secondNumber;
		textbox1->Text = System::Convert::ToString(result);
		break;
	case '/':
		// division by 0
		if (secondNumber == 0)
			textbox1->Text = "Error";
		else {
			result = firstNumber / secondNumber;
			textbox1->Text = System::Convert::ToString(result);
		}
		break;
	case '^':
		result = Math::Pow(firstNumber, secondNumber);
		textbox1->Text = System::Convert::ToString(result);
		break;
	//Вот вам возможность добавлять операции
	//case 'operation':
	//	...
	//	result = ...;
	//	textbox1->Text = System::Convert::ToString(result);
	//	break;
	}
}

private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = "0";
	firstNumber = 0;
	secondNumber = 0;
}

private: System::Void textbox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
