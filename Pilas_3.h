#pragma once
#include "Stack.h"
#include "List.h"
#include <cstdlib>
#include <stdio.h>   
namespace Projecto1GabrielMajano1202619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Pilas_3
	/// </summary>
	public ref class Pilas_3 : public System::Windows::Forms::Form
	{
	private:
		//reloj
		int tick;
		int pocisionTop1;
		int pocisionTop2;
		int pocisionTop3;
	public:
		List* list1;
		List* list2;
	private: System::Windows::Forms::Button^ button_regresar;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	public:

		List* list3;
		Pilas_3(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			list1 = new List();
			list1->count = 0;
			list1->start = nullptr;
			list1->end = nullptr;

			list2 = new List();
			list2->count = 0;
			list2->start = nullptr;
			list2->end = nullptr;

			list3 = new List();
			list3->count = 0;
			list3->start = nullptr;
			list3->end = nullptr;
			int datos=20;
			int datDiv = datos / 3;
			/*int blocks = Inicio::cajas;*/
			for (int i = 0; i < datDiv; i++)
			{
				int tick_sec = rand() % 3;
				String^ bloque;
				int color = rand() % 3;
				list1->InsertAtEnd(color);
				this->listBox1->Items->Add(color);
				pocisionTop1++;	
				color = rand() % 3;
				list2->InsertAtEnd(color);
				this->listBox2->Items->Add(color);
				pocisionTop2++;
				color = rand() % 3;
				list3->InsertAtEnd(color);
				this->listBox3->Items->Add(color);
				pocisionTop3++;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pilas_3()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::ComboBox^ comboBox_mover;
	private: System::Windows::Forms::ComboBox^ comboBox_recivir;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label_timer;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->comboBox_mover = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_recivir = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_timer = (gcnew System::Windows::Forms::Label());
			this->button_regresar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// comboBox_mover
			// 
			this->comboBox_mover->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_mover->FormattingEnabled = true;
			this->comboBox_mover->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox_mover->Location = System::Drawing::Point(226, 276);
			this->comboBox_mover->Name = L"comboBox_mover";
			this->comboBox_mover->Size = System::Drawing::Size(121, 24);
			this->comboBox_mover->TabIndex = 3;
			// 
			// comboBox_recivir
			// 
			this->comboBox_recivir->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_recivir->FormattingEnabled = true;
			this->comboBox_recivir->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox_recivir->Location = System::Drawing::Point(468, 276);
			this->comboBox_recivir->Name = L"comboBox_recivir";
			this->comboBox_recivir->Size = System::Drawing::Size(121, 24);
			this->comboBox_recivir->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(352, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Mover";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pilas_3::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Pilas_3::timer1_Tick);
			// 
			// label_timer
			// 
			this->label_timer->AutoSize = true;
			this->label_timer->Location = System::Drawing::Point(31, 9);
			this->label_timer->Name = L"label_timer";
			this->label_timer->Size = System::Drawing::Size(0, 17);
			this->label_timer->TabIndex = 6;
			// 
			// button_regresar
			// 
			this->button_regresar->Location = System::Drawing::Point(693, 329);
			this->button_regresar->Name = L"button_regresar";
			this->button_regresar->Size = System::Drawing::Size(106, 28);
			this->button_regresar->TabIndex = 7;
			this->button_regresar->Text = L"Regresar";
			this->button_regresar->UseVisualStyleBackColor = true;
			this->button_regresar->Click += gcnew System::EventHandler(this, &Pilas_3::button_regresar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(123, 48);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(85, 212);
			this->listBox1->TabIndex = 8;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(364, 48);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(85, 212);
			this->listBox2->TabIndex = 9;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(590, 48);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(85, 212);
			this->listBox3->TabIndex = 10;
			// 
			// Pilas_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 370);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_regresar);
			this->Controls->Add(this->label_timer);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox_recivir);
			this->Controls->Add(this->comboBox_mover);
			this->Name = L"Pilas_3";
			this->Text = L"Pilas_3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ cajaMover = comboBox_mover->Text;
		String^ cajaRecibir = comboBox_recivir->Text;
		//mover del primer segmento al segundo o tercero
		if (cajaMover == "1")
		{
			//operaciones obligatorias 
			int tempt = list1->GetValue(0);
			this->listBox1->Items->Clear();
			Node* temp = list1->ExtractAtStart();
			pocisionTop1--;
			if (cajaRecibir == "2")
			{
				//operaciones de la segunda caja
				this->listBox2->Items->Clear();
				list2->InsertAtStart(tempt);
				pocisionTop2++;
				for (int i = 0; i < pocisionTop2; i++)
				{
					this->listBox2->Items->Add(list2->GetValue(i));
				}
			}
			if (cajaRecibir == "3")
			{
				this->listBox3->Items->Clear();
				list3->InsertAtStart(tempt);
				pocisionTop3++;
				for (int i = 0; i < pocisionTop3; i++)
				{
					this->listBox3->Items->Add(list3->GetValue(i));
				}
			}
			for (int i = 0; i < pocisionTop1; i++)
			{
				//regeneracion de las listas
				this->listBox1->Items->Add(list1->GetValue(i));
			}
		}
		//caso si se va a mover de la segunda caja
		if (cajaMover == "2")
		{
			int tempt = list2->GetValue(0);
			this->listBox2->Items->Clear();
			Node* temp = list2->ExtractAtStart();
			pocisionTop2--;
			if (cajaRecibir == "1")
			{
				//operaciones de la segunda caja
				this->listBox1->Items->Clear();
				list1->InsertAtStart(tempt);
				pocisionTop1++;
				for (int i = 0; i < pocisionTop1; i++)
				{
					this->listBox1->Items->Add(list1->GetValue(i));
				}
			}
			if (cajaRecibir == "3")
			{
				this->listBox3->Items->Clear();
				list3->InsertAtStart(tempt);
				pocisionTop3++;
				for (int i = 0; i < pocisionTop3; i++)
				{
					this->listBox3->Items->Add(list3->GetValue(i));
				}
			}
			for (int i = 0; i < pocisionTop2; i++)
			{
				//regeneracion de las listas
				this->listBox2->Items->Add(list2->GetValue(i));
			}

		}
		//caso si se mueve de la caja 3
		if (cajaMover == "3")
		{
			int tempt = list3->GetValue(0);
			this->listBox3->Items->Clear();
			Node* temp = list3->ExtractAtStart();
			pocisionTop3--;
			if (cajaRecibir == "1")
			{
				//operaciones de la segunda caja
				this->listBox1->Items->Clear();
				list1->InsertAtStart(tempt);
				pocisionTop1++;
				for (int i = 0; i < pocisionTop1; i++)
				{
					this->listBox1->Items->Add(list1->GetValue(i));
				}
			}
			if (cajaRecibir == "2")
			{
				//operaciones de la segunda caja
				this->listBox2->Items->Clear();
				list2->InsertAtStart(tempt);
				pocisionTop2++;
				for (int i = 0; i < pocisionTop2; i++)
				{
					this->listBox2->Items->Add(list2->GetValue(i));
				}
			}
			for (int i = 0; i < pocisionTop3; i++)
			{
				//regeneracion de las listas
				this->listBox3->Items->Add(list3->GetValue(i));
			}
		}
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	tick++;
	label_timer->Text = Convert::ToString(tick);

}
private: System::Void button_regresar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}
