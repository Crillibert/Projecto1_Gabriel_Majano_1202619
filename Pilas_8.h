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
	/// Resumen de Pilas_8
	/// </summary>
	public ref class Pilas_8 : public System::Windows::Forms::Form
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
		int pocisionTop7;
		int pocisionTop8;
	public:
		List* list1;
		List* list2;
		List* list3;
		List* list4;
		List* list5;
		List* list6;
		List* list7;
	private: System::Windows::Forms::Timer^ timer1;
	public:
		List* list8;
	public:
		Pilas_8(void)
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

			list7 = new List();
			list7->count = 0;
			list7->start = nullptr;
			list7->end = nullptr;

			list8 = new List();
			list8->count = 0;
			list8->start = nullptr;
			list8->end = nullptr;

			int datDiv = 4;
			for (int i = 0; i < datDiv; i++)
			{
				//las variables de pocisionTop sirven para evaluar la cantidad de elementos dentro de cada lista
				int tick_sec = rand() % 8;
				String^ bloque;
				int color = rand() % 8;
				list1->InsertAtEnd(color);
				this->listBox1->Items->Add(color);
				pocisionTop1++;
				color = rand() % 8;
				list2->InsertAtEnd(color);
				this->listBox2->Items->Add(color);
				pocisionTop2++;
				color = rand() % 8;
				list3->InsertAtEnd(color);
				this->listBox3->Items->Add(color);
				pocisionTop3++;
				color = rand() % 8;
				list4->InsertAtEnd(color);
				this->listBox4->Items->Add(color);
				pocisionTop4++;
				color = rand() % 8;
				list5->InsertAtEnd(color);
				this->listBox5->Items->Add(color);
				pocisionTop5++;
				color = rand() % 8;
				list6->InsertAtEnd(color);
				this->listBox6->Items->Add(color);
				pocisionTop6++;
				color = rand() % 8;
				list7->InsertAtEnd(color);
				this->listBox7->Items->Add(color);
				pocisionTop7++;
				color = rand() % 8;
				list8->InsertAtEnd(color);
				this->listBox8->Items->Add(color);
				pocisionTop8++;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pilas_8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox6;
	protected:
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	public: System::Windows::Forms::Label^ label_dificultad;
	private:
	private: System::Windows::Forms::ListBox^ listBox3;
	public:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button_regresar;
	private: System::Windows::Forms::Label^ label_timer;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox_recivir;
	private: System::Windows::Forms::ComboBox^ comboBox_mover;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ListBox^ listBox8;
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
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label_dificultad = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_regresar = (gcnew System::Windows::Forms::Button());
			this->label_timer = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox_recivir = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_mover = (gcnew System::Windows::Forms::ComboBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 16;
			this->listBox6->Location = System::Drawing::Point(669, 112);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(85, 212);
			this->listBox6->TabIndex = 35;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 16;
			this->listBox5->Location = System::Drawing::Point(555, 112);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(85, 212);
			this->listBox5->TabIndex = 34;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(349, 112);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(85, 212);
			this->listBox4->TabIndex = 33;
			// 
			// label_dificultad
			// 
			this->label_dificultad->AutoSize = true;
			this->label_dificultad->Location = System::Drawing::Point(953, 9);
			this->label_dificultad->Name = L"label_dificultad";
			this->label_dificultad->Size = System::Drawing::Size(66, 17);
			this->label_dificultad->TabIndex = 32;
			this->label_dificultad->Text = L"Dificultad";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(232, 112);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(85, 212);
			this->listBox3->TabIndex = 31;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(121, 112);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(85, 212);
			this->listBox2->TabIndex = 30;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 112);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(85, 212);
			this->listBox1->TabIndex = 29;
			// 
			// button_regresar
			// 
			this->button_regresar->Location = System::Drawing::Point(904, 454);
			this->button_regresar->Name = L"button_regresar";
			this->button_regresar->Size = System::Drawing::Size(106, 28);
			this->button_regresar->TabIndex = 28;
			this->button_regresar->Text = L"Regresar";
			this->button_regresar->UseVisualStyleBackColor = true;
			this->button_regresar->Click += gcnew System::EventHandler(this, &Pilas_8::button_regresar_Click);
			// 
			// label_timer
			// 
			this->label_timer->AutoSize = true;
			this->label_timer->Location = System::Drawing::Point(12, 9);
			this->label_timer->Name = L"label_timer";
			this->label_timer->Size = System::Drawing::Size(0, 17);
			this->label_timer->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(440, 441);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 29);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Mover";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pilas_8::button1_Click);
			// 
			// comboBox_recivir
			// 
			this->comboBox_recivir->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_recivir->FormattingEnabled = true;
			this->comboBox_recivir->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8"
			});
			this->comboBox_recivir->Location = System::Drawing::Point(669, 397);
			this->comboBox_recivir->Name = L"comboBox_recivir";
			this->comboBox_recivir->Size = System::Drawing::Size(121, 24);
			this->comboBox_recivir->TabIndex = 25;
			// 
			// comboBox_mover
			// 
			this->comboBox_mover->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_mover->FormattingEnabled = true;
			this->comboBox_mover->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8"
			});
			this->comboBox_mover->Location = System::Drawing::Point(196, 397);
			this->comboBox_mover->Name = L"comboBox_mover";
			this->comboBox_mover->Size = System::Drawing::Size(121, 24);
			this->comboBox_mover->TabIndex = 24;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 16;
			this->listBox7->Location = System::Drawing::Point(780, 112);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(85, 212);
			this->listBox7->TabIndex = 37;
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 16;
			this->listBox8->Location = System::Drawing::Point(904, 112);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(85, 212);
			this->listBox8->TabIndex = 36;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Pilas_8::timer1_Tick);
			// 
			// Pilas_8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 494);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox8);
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
			this->Name = L"Pilas_8";
			this->Text = L"Pilas_8";
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
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p1->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p1->p8 \n";
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
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p2->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p2->p8 \n";
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
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p3->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p3->p8 \n";
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
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p3->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p3->p8 \n";
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
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p3->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p3->p8 \n";
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
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p3->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p3->p8 \n";
				}
				for (int i = 0; i < pocisionTop6; i++)
				{
					//regeneracion de las listas
					this->listBox6->Items->Add(list6->GetValue(i));
				}
			}
		}
		if (cajaMover == "7")
		{
			if (pocisionTop7 > 0)
			{
				int tempt = list7->GetValue(0);
				this->listBox7->Items->Clear();
				Node* temp = list7->ExtractAtStart();
				pocisionTop7--;
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
					mensajes = mensajes + "p7->p1 \n";
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
					mensajes = mensajes + "p7->p2 \n";
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
					mensajes = mensajes + "p7->p4 \n";
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
					mensajes = mensajes + "p7->p5 \n";
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
					mensajes = mensajes + "p7->p3 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p7->p3 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "8")
				{
					this->listBox8->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop8++;
					for (int i = 0; i < pocisionTop8; i++)
					{
						this->listBox8->Items->Add(list8->GetValue(i));
					}
					mensajes = mensajes + "p7->p8 \n";
				}
				for (int i = 0; i < pocisionTop7; i++)
				{
					//regeneracion de las listas
					this->listBox7->Items->Add(list7->GetValue(i));
				}
			}
		}
		if (cajaMover == "8")
		{
			if (pocisionTop8 > 0)
			{
				int tempt = list8->GetValue(0);
				this->listBox8->Items->Clear();
				Node* temp = list8->ExtractAtStart();
				pocisionTop8--;
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
					mensajes = mensajes + "p8->p1 \n";
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
					mensajes = mensajes + "p8->p2 \n";
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
					mensajes = mensajes + "p8->p4 \n";
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
					mensajes = mensajes + "p8->p5 \n";
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
					mensajes = mensajes + "p8->p3 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "7")
				{
					this->listBox7->Items->Clear();
					list7->InsertAtStart(tempt);
					pocisionTop7++;
					for (int i = 0; i < pocisionTop7; i++)
					{
						this->listBox7->Items->Add(list7->GetValue(i));
					}
					mensajes = mensajes + "p8->p7 \n";
				}
				//-------------------------------------------------------------------------------------------------------------
				if (cajaRecibir == "6")
				{
					this->listBox6->Items->Clear();
					list8->InsertAtStart(tempt);
					pocisionTop6++;
					for (int i = 0; i < pocisionTop6; i++)
					{
						this->listBox6->Items->Add(list6->GetValue(i));
					}
					mensajes = mensajes + "p8->p6 \n";
				}
				for (int i = 0; i < pocisionTop8; i++)
				{
					//regeneracion de las listas
					this->listBox8->Items->Add(list8->GetValue(i));
				}
			}
		}
		int data1 = list1->GetValue(0);
		int data2 = list2->GetValue(0);
		int data3 = list3->GetValue(0);
		int data4 = list4->GetValue(0);
		int data5 = list5->GetValue(0);
		int data6 = list6->GetValue(0);
		int data7 = list7->GetValue(0);
		int data8 = list8->GetValue(0);
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
			if (list7->GetValue(0) == list7->GetValue(i))
			{
				data7++;
			}
			if (list8->GetValue(0) == list8->GetValue(i))
			{
				data8++;
			}
			if (data1 == pocisionTop1 && data2 == pocisionTop2 && data3 == pocisionTop3 && data4 == pocisionTop4 && data5 == pocisionTop5 && data6 == pocisionTop6 && data7 == pocisionTop7 && data8 == pocisionTop8)
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
			this->Close();
		}
	}
	if (label_dificultad->Text == "Dificil")
	{
		if (tick == 280)
		{
			timer1->Stop();
			MessageBox::Show("Se acabo el tiempo");
			this->Close();
		}
	}
}
private: System::Void button_regresar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	TextWriter^ registro;
	registro = gcnew StreamWriter("Archivo.txt");
	registro->WriteLine(mensajes);
	registro->Close();
	this->Close();
}
};
}
