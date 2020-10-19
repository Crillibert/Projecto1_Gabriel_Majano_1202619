#pragma once
#include "List.h"
#include <cstdlib>
#include <stdio.h>   
#include <fstream>
#include <iostream>
namespace Projecto1GabrielMajano1202619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de Pilas_6
	/// </summary>
	public ref class Pilas_6 : public System::Windows::Forms::Form
	{
	public:
		//funcion de la libreria IO para generar txt
		static String^ mensajes = "";
	public:
		static String^ dificultad;
	private:
		//reloj
		int tick;
		int pocisionTop1;
		int pocisionTop2;
		int pocisionTop3;
		int pocisionTop4;
		int pocisionTop5;
		int pocisionTop6;
	public:
		List* list1;
		List* list2;
		List* list3;
		List* list4;
		List* list5;
		List* list6;
	public:
		Pilas_6(void)
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

			list4 = new List();
			list4->count = 0;
			list4->start = nullptr;
			list4->end = nullptr;

			list5 = new List();
			list5->count = 0;
			list5->start = nullptr;
			list5->end = nullptr;

			list6 = new List();
			list6->count = 0;
			list6->start = nullptr;
			list6->end = nullptr;
			int datDiv = 4;
			for (int i = 0; i < datDiv; i++)
			{
				//las variables de pocisionTop sirven para evaluar la cantidad de elementos dentro de cada lista
				int tick_sec = rand() % 6;
				String^ bloque;
				int color = rand() % 6;
				list1->InsertAtEnd(color);
				this->listBox1->Items->Add(color);
				pocisionTop1++;
				color = rand() % 6;
				list2->InsertAtEnd(color);
				this->listBox2->Items->Add(color);
				pocisionTop2++;
				color = rand() % 6;
				list3->InsertAtEnd(color);
				this->listBox3->Items->Add(color);
				pocisionTop3++;
				color = rand() % 6;
				list4->InsertAtEnd(color);
				this->listBox4->Items->Add(color);
				pocisionTop4++;
				color = rand() % 6;
				list5->InsertAtEnd(color);
				this->listBox5->Items->Add(color);
				pocisionTop5++;
				color = rand() % 6;
				list6->InsertAtEnd(color);
				this->listBox6->Items->Add(color);
				pocisionTop6++;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pilas_6()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label_dificultad;
	protected:
	private: System::Windows::Forms::ListBox^ listBox3;
	public:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button_regresar;
	private: System::Windows::Forms::Label^ label_timer;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox_recivir;
	private: System::Windows::Forms::ComboBox^ comboBox_mover;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::ComponentModel::IContainer^ components;

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
			this->label_dificultad = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_regresar = (gcnew System::Windows::Forms::Button());
			this->label_timer = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox_recivir = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_mover = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label_dificultad
			// 
			this->label_dificultad->AutoSize = true;
			this->label_dificultad->Location = System::Drawing::Point(721, 46);
			this->label_dificultad->Name = L"label_dificultad";
			this->label_dificultad->Size = System::Drawing::Size(66, 17);
			this->label_dificultad->TabIndex = 20;
			this->label_dificultad->Text = L"Dificultad";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(325, 75);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(85, 212);
			this->listBox3->TabIndex = 19;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(176, 75);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(85, 212);
			this->listBox2->TabIndex = 18;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(37, 75);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(85, 212);
			this->listBox1->TabIndex = 17;
			// 
			// button_regresar
			// 
			this->button_regresar->Location = System::Drawing::Point(702, 356);
			this->button_regresar->Name = L"button_regresar";
			this->button_regresar->Size = System::Drawing::Size(106, 28);
			this->button_regresar->TabIndex = 16;
			this->button_regresar->Text = L"Regresar";
			this->button_regresar->UseVisualStyleBackColor = true;
			this->button_regresar->Click += gcnew System::EventHandler(this, &Pilas_6::button_regresar_Click);
			// 
			// label_timer
			// 
			this->label_timer->AutoSize = true;
			this->label_timer->Location = System::Drawing::Point(40, 36);
			this->label_timer->Name = L"label_timer";
			this->label_timer->Size = System::Drawing::Size(0, 17);
			this->label_timer->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(361, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 29);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Mover";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pilas_6::button1_Click);
			// 
			// comboBox_recivir
			// 
			this->comboBox_recivir->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_recivir->FormattingEnabled = true;
			this->comboBox_recivir->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->comboBox_recivir->Location = System::Drawing::Point(477, 303);
			this->comboBox_recivir->Name = L"comboBox_recivir";
			this->comboBox_recivir->Size = System::Drawing::Size(121, 24);
			this->comboBox_recivir->TabIndex = 13;
			// 
			// comboBox_mover
			// 
			this->comboBox_mover->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_mover->FormattingEnabled = true;
			this->comboBox_mover->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->comboBox_mover->Location = System::Drawing::Point(235, 303);
			this->comboBox_mover->Name = L"comboBox_mover";
			this->comboBox_mover->Size = System::Drawing::Size(121, 24);
			this->comboBox_mover->TabIndex = 12;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Pilas_6::timer1_Tick);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(477, 75);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(85, 212);
			this->listBox4->TabIndex = 21;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(621, 75);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(85, 212);
			this->listBox5->TabIndex = 22;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(752, 75);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(85, 212);
			this->listBox6->TabIndex = 23;
			// 
			// Pilas_6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 409);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->label_dificultad);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_regresar);
			this->Controls->Add(this->label_timer);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox_recivir);
			this->Controls->Add(this->comboBox_mover);
			this->Name = L"Pilas_6";
			this->Text = L"Pilas_6";
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
			if (pocisionTop1 > 0)
			{
				int tempt = list1->GetValue(0);
				this->listBox1->Items->Clear();
				Node* temp = list1->ExtractAtStart();
				pocisionTop1--;
//-----------------------------------------------------------------------------------------------------------
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
					//mensaje para generar un texto al final de todo, lo mismo se repite despues
					mensajes = mensajes + "p1->p2 \n";

				}
//------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "3")
				{
					this->listBox3->Items->Clear();
					list3->InsertAtStart(tempt);
					pocisionTop3++;
					for (int i = 0; i < pocisionTop3; i++)
					{
						this->listBox3->Items->Add(list3->GetValue(i));
					}
					mensajes = mensajes + "p1->p3 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "4")
				{
					this->listBox4->Items->Clear();
					list4->InsertAtStart(tempt);
					pocisionTop4++;
					for (int i = 0; i < pocisionTop4; i++)
					{
						this->listBox4->Items->Add(list4->GetValue(i));
					}
					mensajes = mensajes + "p1->p4 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "5")
				{
					this->listBox5->Items->Clear();
					list5->InsertAtStart(tempt);
					pocisionTop5++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox5->Items->Add(list5->GetValue(i));
					}
					mensajes = mensajes + "p1->p5 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list6->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p1->p6 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				for (int i = 0; i < pocisionTop1; i++)
				{
					//regeneracion de las listas
					this->listBox1->Items->Add(list1->GetValue(i));
				}
			}
		}
		//caso si se va a mover de la segunda caja
		if (cajaMover == "2")
		{

			if (pocisionTop2 > 0)
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
					mensajes = mensajes + "p2->p1 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "3")
				{
					this->listBox3->Items->Clear();
					list3->InsertAtStart(tempt);
					pocisionTop3++;
					for (int i = 0; i < pocisionTop3; i++)
					{
						this->listBox3->Items->Add(list3->GetValue(i));
					}
					mensajes = mensajes + "p2->p3 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "4")
				{
					this->listBox4->Items->Clear();
					list4->InsertAtStart(tempt);
					pocisionTop4++;
					for (int i = 0; i < pocisionTop4; i++)
					{
						this->listBox4->Items->Add(list4->GetValue(i));
					}
					mensajes = mensajes + "p2->p4 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "5")
				{
					this->listBox5->Items->Clear();
					list5->InsertAtStart(tempt);
					pocisionTop5++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox5->Items->Add(list5->GetValue(i));
					}
					mensajes = mensajes + "p2->p5 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list6->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p2->p6 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				for (int i = 0; i < pocisionTop2; i++)
				{
					//regeneracion de las listas
					this->listBox2->Items->Add(list2->GetValue(i));
				}
			}
		}
		//caso si se mueve de la caja 3
		if (cajaMover == "3")
		{
			if (pocisionTop3 > 0)
			{
				int tempt = list3->GetValue(0);
				this->listBox3->Items->Clear();
				Node* temp = list3->ExtractAtStart();
				pocisionTop3--;
//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p3->p1 \n";
				}
//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p3->p2 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "4")
				{
					this->listBox4->Items->Clear();
					list4->InsertAtStart(tempt);
					pocisionTop4++;
					for (int i = 0; i < pocisionTop4; i++)
					{
						this->listBox4->Items->Add(list4->GetValue(i));
					}
					mensajes = mensajes + "p3->p4 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "5")
				{
					this->listBox5->Items->Clear();
					list5->InsertAtStart(tempt);
					pocisionTop5++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox5->Items->Add(list5->GetValue(i));
					}
					mensajes = mensajes + "p2->p5 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list6->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p2->p6 \n";
				}
				for (int i = 0; i < pocisionTop3; i++)
				{
					//regeneracion de las listas
					this->listBox3->Items->Add(list3->GetValue(i));
				}
			}
//--------------------------------------------------------------------------------------------------------------4

		}
		if (cajaMover == "4")
		{
			if (pocisionTop4 > 0)
			{
				int tempt = list4->GetValue(0);
				this->listBox4->Items->Clear();
				Node* temp = list4->ExtractAtStart();
				pocisionTop4--;
				//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p4->p1 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p4->p2 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "3")
				{
					this->listBox3->Items->Clear();
					list3->InsertAtStart(tempt);
					pocisionTop3++;
					for (int i = 0; i < pocisionTop3; i++)
					{
						this->listBox3->Items->Add(list3->GetValue(i));
					}
					mensajes = mensajes + "p4->p3 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "5")
				{
					this->listBox5->Items->Clear();
					list5->InsertAtStart(tempt);
					pocisionTop5++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox5->Items->Add(list5->GetValue(i));
					}
					mensajes = mensajes + "p4->p5 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list6->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p4->p6 \n";
				}
				for (int i = 0; i < pocisionTop4; i++)
				{
					//regeneracion de las listas
					this->listBox4->Items->Add(list4->GetValue(i));
				}
			}
			//--------------------------------------------------------------------------------------------------------------4
		}
		if (cajaMover == "5")
		{
			if (pocisionTop5 > 0)
			{
				int tempt = list5->GetValue(0);
				this->listBox5->Items->Clear();
				Node* temp = list5->ExtractAtStart();
				pocisionTop5--;
				//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p5->p1 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p5->p2 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "4")
				{
					this->listBox4->Items->Clear();
					list4->InsertAtStart(tempt);
					pocisionTop4++;
					for (int i = 0; i < pocisionTop4; i++)
					{
						this->listBox4->Items->Add(list4->GetValue(i));
					}
					mensajes = mensajes + "p5->p4 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "3")
				{
					this->listBox3->Items->Clear();
					list3->InsertAtStart(tempt);
					pocisionTop3++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox3->Items->Add(list3->GetValue(i));
					}
					mensajes = mensajes + "p5->p3 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list6->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p2->p6 \n";
				}
				for (int i = 0; i < pocisionTop3; i++)
				{
					//regeneracion de las listas
					this->listBox3->Items->Add(list3->GetValue(i));
				}
			}
			//--------------------------------------------------------------------------------------------------------------4

		}
		if (cajaMover == "6")
		{
			if (pocisionTop6 > 0)
			{
				int tempt = list6->GetValue(0);
				this->listBox6->Items->Clear();
				Node* temp = list6->ExtractAtStart();
				pocisionTop6--;
//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p6->p1 \n";
				}
//-------------------------------------------------------------------------------------------------------------
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
					mensajes = mensajes + "p6->p2 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "4")
				{
					this->listBox4->Items->Clear();
					list4->InsertAtStart(tempt);
					pocisionTop4++;
					for (int i = 0; i < pocisionTop4; i++)
					{
						this->listBox4->Items->Add(list4->GetValue(i));
					}
					mensajes = mensajes + "p6->p4 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "5")
				{
					this->listBox5->Items->Clear();
					list5->InsertAtStart(tempt);
					pocisionTop5++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox5->Items->Add(list5->GetValue(i));
					}
					mensajes = mensajes + "p6->p5 \n";
				}
//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "3")
				{
					this->listBox3->Items->Clear();
					list3->InsertAtStart(tempt);
					pocisionTop3++;
					for (int i = 0; i < pocisionTop5; i++)
					{
						this->listBox3->Items->Add(list3->GetValue(i));
					}
					mensajes = mensajes + "p6->p3 \n";
				}
				for (int i = 0; i < pocisionTop6; i++)
				{
					//regeneracion de las listas
					this->listBox6->Items->Add(list6->GetValue(i));
				}
			}
//--------------------------------------------------------------------------------------------------------------4

		}
		int data1 = list1->GetValue(0);
		int data2 = list2->GetValue(0);
		int data3 = list3->GetValue(0);
		int data4 = list4->GetValue(0);
		int data5 = list5->GetValue(0);
		int data6 = list6->GetValue(0);
		for (int i = 0; i < pocisionTop1; i++)
		{
			//condiciones de  victoria
			if (list1->GetValue(0) == list1->GetValue(i))
			{
				data1++;
			}
			if (list2->GetValue(0) == list2->GetValue(i))
			{
				data2++;
			}
			if (list3->GetValue(0) == list3->GetValue(i))
			{
				data3++;
			}
			if (list4->GetValue(0) == list4->GetValue(i))
			{
				data4++;
			}
			if (list5->GetValue(0) == list5->GetValue(i))
			{
				data5++;
			}
			if (list6->GetValue(0) == list6->GetValue(i))
			{
				data6++;
			}
			if (data1 == pocisionTop1 && data2 == pocisionTop2 && data3 == pocisionTop3 && data4 == pocisionTop4 && data5 == pocisionTop5 && data6 == pocisionTop6)
			{
				timer1->Stop();
				String^ Victoria = "¡Usted a ganado! Le tomo:" + label_timer->Text;
				MessageBox::Show(Victoria);
				TextWriter^ registro;
				registro = gcnew StreamWriter("Archivo.txt");
				registro->WriteLine(mensajes);
				registro->Close();
				this->Close();
			}
		}
	}
private: System::Void button_regresar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	//cuando se termine el juego por el usuario se van a guardar todos los movimientos y se cerrara este formulario
	TextWriter^ registro;
	registro = gcnew StreamWriter("Archivo.txt");
	registro->WriteLine(mensajes);
	registro->Close();
	this->Close();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	tick++;
	label_timer->Text = Convert::ToString(tick);
	if (label_dificultad->Text == "Medio")
	{
		if (tick == 120)
		{
			timer1->Stop();
			MessageBox::Show("Se acabo el tiempo");
		}
	}
	if (label_dificultad->Text == "Dificil")
	{
		if (tick == 120)
		{
			timer1->Stop();
			MessageBox::Show("Se acabo el tiempo");
		}
	}
}
};
}
