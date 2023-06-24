#pragma once
#include <cmath>
#include <Windows.h>
using namespace std;
namespace svetil
{

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
	private: System::Windows::Forms::Label^ lab_inp_a;
	protected:
	private: System::Windows::Forms::TextBox^ textbox_inp_a;
	private: System::Windows::Forms::TextBox^ textBox_inpB;
	private: System::Windows::Forms::Label^ label_B;



	private: System::Windows::Forms::Button^ button_calc;
	private: System::Windows::Forms::Label^ label_zagez;


	private: System::Windows::Forms::Label^ label_count;


	private: System::Windows::Forms::Label^ label_visot;
	private: System::Windows::Forms::TextBox^ textBox_visot;
		   //private: System::Windows::Forms::Button^ button_pict;
	private: System::Windows::Forms::Label^ label_sves;

	private: System::Windows::Forms::TextBox^ textBox_sves;




	private: System::Windows::Forms::ComboBox^ comboBox1_tip_komnat;
	private: System::Windows::Forms::ComboBox^ comboBox1_tip_svet;
	private: System::Windows::Forms::TextBox^ textBox_tip_komnat;
	private: System::Windows::Forms::TextBox^ textBox_tip_svet;
	private: System::Windows::Forms::TextBox^ textBox_tip_svet_FL;

	private:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lab_inp_a = (gcnew System::Windows::Forms::Label());
			this->textbox_inp_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_inpB = (gcnew System::Windows::Forms::TextBox());
			this->label_B = (gcnew System::Windows::Forms::Label());
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->label_zagez = (gcnew System::Windows::Forms::Label());
			this->label_count = (gcnew System::Windows::Forms::Label());
			this->label_visot = (gcnew System::Windows::Forms::Label());
			this->textBox_visot = (gcnew System::Windows::Forms::TextBox());
			this->label_sves = (gcnew System::Windows::Forms::Label());
			this->textBox_sves = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1_tip_komnat = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1_tip_svet = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_tip_komnat = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tip_svet = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tip_svet_FL = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lab_inp_a
			// 
			this->lab_inp_a->AutoSize = true;
			this->lab_inp_a->Location = System::Drawing::Point(17, 22);
			this->lab_inp_a->Name = L"lab_inp_a";
			this->lab_inp_a->Size = System::Drawing::Size(172, 13);
			this->lab_inp_a->TabIndex = 0;
			this->lab_inp_a->Text = L"Введите значение ширины, м (А)";
			// 
			// textbox_inp_a
			// 
			this->textbox_inp_a->Location = System::Drawing::Point(204, 15);
			this->textbox_inp_a->Name = L"textbox_inp_a";
			this->textbox_inp_a->Size = System::Drawing::Size(56, 20);
			this->textbox_inp_a->TabIndex = 1;
			this->textbox_inp_a->Text = L"0";
			this->textbox_inp_a->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textbox_inp_a_KeyPress);
			// 
			// textBox_inpB
			// 
			this->textBox_inpB->Location = System::Drawing::Point(204, 37);
			this->textBox_inpB->Name = L"textBox_inpB";
			this->textBox_inpB->Size = System::Drawing::Size(56, 20);
			this->textBox_inpB->TabIndex = 3;
			this->textBox_inpB->Text = L"0";
			this->textBox_inpB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_inpB_KeyPress);
			// 
			// label_B
			// 
			this->label_B->AutoSize = true;
			this->label_B->Location = System::Drawing::Point(17, 42);
			this->label_B->Name = L"label_B";
			this->label_B->Size = System::Drawing::Size(170, 13);
			this->label_B->TabIndex = 2;
			this->label_B->Text = L"Введите значение длинны, м (B)";
			// 
			// button_calc
			// 
			this->button_calc->Location = System::Drawing::Point(119, 177);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(75, 23);
			this->button_calc->TabIndex = 4;
			this->button_calc->Text = L"Расчитать";
			this->button_calc->UseVisualStyleBackColor = true;
			this->button_calc->Click += gcnew System::EventHandler(this, &MyForm::button_calc_Click);
			// 
			// label_zagez
			// 
			this->label_zagez->AutoSize = true;
			this->label_zagez->Location = System::Drawing::Point(326, 37);
			this->label_zagez->Name = L"label_zagez";
			this->label_zagez->Size = System::Drawing::Size(162, 13);
			this->label_zagez->TabIndex = 5;
			this->label_zagez->Text = L"Количество светильников, шт.";
			// 
			// label_count
			// 
			this->label_count->AutoSize = true;
			this->label_count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_count->Location = System::Drawing::Point(392, 66);
			this->label_count->Name = L"label_count";
			this->label_count->Size = System::Drawing::Size(35, 37);
			this->label_count->TabIndex = 7;
			this->label_count->Text = L"0";
			// 
			// label_visot
			// 
			this->label_visot->AutoSize = true;
			this->label_visot->Location = System::Drawing::Point(17, 66);
			this->label_visot->Name = L"label_visot";
			this->label_visot->Size = System::Drawing::Size(172, 13);
			this->label_visot->TabIndex = 8;
			this->label_visot->Text = L"Введите значение выcоты, м (H)";
			// 
			// textBox_visot
			// 
			this->textBox_visot->Location = System::Drawing::Point(204, 63);
			this->textBox_visot->Name = L"textBox_visot";
			this->textBox_visot->Size = System::Drawing::Size(56, 20);
			this->textBox_visot->TabIndex = 9;
			this->textBox_visot->Text = L"0";
			this->textBox_visot->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_visot_KeyPress);
			// 
			// label_sves
			// 
			this->label_sves->AutoSize = true;
			this->label_sves->Location = System::Drawing::Point(9, 89);
			this->label_sves->Name = L"label_sves";
			this->label_sves->Size = System::Drawing::Size(185, 13);
			this->label_sves->TabIndex = 11;
			this->label_sves->Text = L"Свес светильника, м (от 0,3 до 1,5)";
			// 
			// textBox_sves
			// 
			this->textBox_sves->Location = System::Drawing::Point(204, 86);
			this->textBox_sves->Name = L"textBox_sves";
			this->textBox_sves->Size = System::Drawing::Size(56, 20);
			this->textBox_sves->TabIndex = 12;
			this->textBox_sves->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_sves_KeyPress);
			// 
			// comboBox1_tip_komnat
			// 
			this->comboBox1_tip_komnat->FormattingEnabled = true;
			this->comboBox1_tip_komnat->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1 - Цех", L"2 - Коридор" });
			this->comboBox1_tip_komnat->Location = System::Drawing::Point(20, 112);
			this->comboBox1_tip_komnat->Name = L"comboBox1_tip_komnat";
			this->comboBox1_tip_komnat->Size = System::Drawing::Size(174, 21);
			this->comboBox1_tip_komnat->TabIndex = 17;
			this->comboBox1_tip_komnat->Text = L"Выбор типа помещения";
			this->comboBox1_tip_komnat->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_tip_komnat_SelectedIndexChanged);
			// 
			// comboBox1_tip_svet
			// 
			this->comboBox1_tip_svet->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) {
				L"1 - светодиодные",
					L"2 - люминесцентные"
			});
			this->comboBox1_tip_svet->FormattingEnabled = true;
			this->comboBox1_tip_svet->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1 - Светодиодные", L"2 - Люминесцентные" });
			this->comboBox1_tip_svet->Location = System::Drawing::Point(20, 139);
			this->comboBox1_tip_svet->Name = L"comboBox1_tip_svet";
			this->comboBox1_tip_svet->Size = System::Drawing::Size(174, 21);
			this->comboBox1_tip_svet->TabIndex = 18;
			this->comboBox1_tip_svet->Text = L"Выбор типа светильника";
			this->comboBox1_tip_svet->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_tip_svet_SelectedIndexChanged);
			// 
			// textBox_tip_komnat
			// 
			this->textBox_tip_komnat->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_tip_komnat->Location = System::Drawing::Point(204, 112);
			this->textBox_tip_komnat->Name = L"textBox_tip_komnat";
			this->textBox_tip_komnat->ReadOnly = true;
			this->textBox_tip_komnat->Size = System::Drawing::Size(56, 20);
			this->textBox_tip_komnat->TabIndex = 19;
			// 
			// textBox_tip_svet
			// 
			this->textBox_tip_svet->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_tip_svet->Location = System::Drawing::Point(204, 140);
			this->textBox_tip_svet->Name = L"textBox_tip_svet";
			this->textBox_tip_svet->ReadOnly = true;
			this->textBox_tip_svet->Size = System::Drawing::Size(56, 20);
			this->textBox_tip_svet->TabIndex = 20;
			// 
			// textBox_tip_svet_FL
			// 
			this->textBox_tip_svet_FL->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_tip_svet_FL->Location = System::Drawing::Point(266, 140);
			this->textBox_tip_svet_FL->Name = L"textBox_tip_svet_FL";
			this->textBox_tip_svet_FL->ReadOnly = true;
			this->textBox_tip_svet_FL->Size = System::Drawing::Size(56, 20);
			this->textBox_tip_svet_FL->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(500, 303);
			this->Controls->Add(this->textBox_tip_svet_FL);
			this->Controls->Add(this->textBox_tip_svet);
			this->Controls->Add(this->textBox_tip_komnat);
			this->Controls->Add(this->comboBox1_tip_svet);
			this->Controls->Add(this->comboBox1_tip_komnat);
			this->Controls->Add(this->textBox_sves);
			this->Controls->Add(this->label_sves);
			this->Controls->Add(this->textBox_visot);
			this->Controls->Add(this->label_visot);
			this->Controls->Add(this->label_count);
			this->Controls->Add(this->label_zagez);
			this->Controls->Add(this->button_calc);
			this->Controls->Add(this->textBox_inpB);
			this->Controls->Add(this->label_B);
			this->Controls->Add(this->textbox_inp_a);
			this->Controls->Add(this->lab_inp_a);
			this->Name = L"MyForm";
			this->Text = L"IllumiPro - Расчет количества светильников";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_calc_Click(System::Object^ sender, System::EventArgs^ e) {
		float a = System::Convert::ToSingle(textbox_inp_a->Text),// добаввляем сюда входные переменные думаем над типом данных
			b = System::Convert::ToSingle(textBox_inpB->Text),
			h = System::Convert::ToSingle(textBox_visot->Text),
			tipkomnat = System::Convert::ToSingle(textBox_tip_komnat->Text),
			hc = System::Convert::ToSingle(textBox_sves->Text),
			tipsvet = System::Convert::ToSingle(textBox_tip_svet->Text),
			fl = System::Convert::ToSingle(textBox_tip_svet_FL->Text),
			Kzap = 1.5, z = 1.15, Enorm = 300, u = 0.71; //Это конвертация float в double 
		float Hp = h - (hc + tipkomnat); // 1 формула
		float L = Hp * tipsvet; // 2 формула
		float S = a * b; // 3 формула
		float l = 0.3 * L; // 4 формула
		float n = (Enorm * S * Kzap * z) / (u * fl); // здесь будет основная формула
		float rezult = ceilf(n);
		label_count->Text = rezult.ToString();
	}
	private: System::Void comboBox1_tip_komnat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1_tip_komnat->SelectedIndex == 0)//выбор типа комнаты - hp
		{
			textBox_tip_komnat->Text = "0,8";
		}
		if (comboBox1_tip_komnat->SelectedIndex == 1)
		{
			textBox_tip_komnat->Text = "0";
		}
	}
	private: System::Void comboBox1_tip_svet_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1_tip_svet->SelectedIndex == 0)//выбор типа светильника - лямбда 
		{
			textBox_tip_svet->Text = "0,6";
		}
		if (comboBox1_tip_svet->SelectedIndex == 1)
		{
			textBox_tip_svet->Text = "1,0";
		}
		if (comboBox1_tip_svet->SelectedIndex == 0)//выбор типа светильника - Фл 
		{
			textBox_tip_svet_FL->Text = "6500";
		}
		if (comboBox1_tip_svet->SelectedIndex == 1)
		{
			textBox_tip_svet_FL->Text = "2500";
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textbox_inp_a_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// Проверяем, является ли введенный символ цифрой или запятой
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{
			// Если символ не является цифрой или запятой, отменяем ввод
			e->Handled = true;
		};

	};
	private: System::Void textBox_inpB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{

			e->Handled = true;
		};
	}
	private: System::Void textBox_visot_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{
			e->Handled = true;
		};
	}
	private: System::Void textBox_sves_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '\b')
		{
			e->Handled = true;
		};
	};
};
};