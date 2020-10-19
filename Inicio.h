#pragma once
#include "Pilas_3.h"
#include "Pilas_6.h"
namespace Projecto1GabrielMajano1202619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

	private: System::Windows::Forms::Button^ button_Inicio;
	private: System::Windows::Forms::Label^ label_Pilas;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_salir;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::ComboBox^ comboBox_dificultad;
	private:


	private:


	private:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button_Inicio = (gcnew System::Windows::Forms::Button());
			this->label_Pilas = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_salir = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox_dificultad = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"3", L"6", L"8" });
			this->comboBox1->Location = System::Drawing::Point(37, 129);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(259, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// button_Inicio
			// 
			this->button_Inicio->Location = System::Drawing::Point(280, 223);
			this->button_Inicio->Name = L"button_Inicio";
			this->button_Inicio->Size = System::Drawing::Size(183, 32);
			this->button_Inicio->TabIndex = 2;
			this->button_Inicio->Text = L"Inicar";
			this->button_Inicio->UseVisualStyleBackColor = true;
			this->button_Inicio->Click += gcnew System::EventHandler(this, &Inicio::button_Inicio_Click);
			// 
			// label_Pilas
			// 
			this->label_Pilas->AutoSize = true;
			this->label_Pilas->Location = System::Drawing::Point(108, 91);
			this->label_Pilas->Name = L"label_Pilas";
			this->label_Pilas->Size = System::Drawing::Size(109, 17);
			this->label_Pilas->TabIndex = 3;
			this->label_Pilas->Text = L"¿Cuantas pilas\?";
			this->label_Pilas->Click += gcnew System::EventHandler(this, &Inicio::label_Pilas_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(534, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"¿Dificultad\?";
			// 
			// button_salir
			// 
			this->button_salir->Location = System::Drawing::Point(618, 277);
			this->button_salir->Name = L"button_salir";
			this->button_salir->Size = System::Drawing::Size(80, 43);
			this->button_salir->TabIndex = 5;
			this->button_salir->Text = L"Salir";
			this->button_salir->UseVisualStyleBackColor = true;
			this->button_salir->Click += gcnew System::EventHandler(this, &Inicio::button_salir_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Instrucciones";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio::button1_Click);
			// 
			// comboBox_dificultad
			// 
			this->comboBox_dificultad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_dificultad->FormattingEnabled = true;
			this->comboBox_dificultad->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Facil", L"Medio", L"Dificil" });
			this->comboBox_dificultad->Location = System::Drawing::Point(439, 129);
			this->comboBox_dificultad->Name = L"comboBox_dificultad";
			this->comboBox_dificultad->Size = System::Drawing::Size(259, 24);
			this->comboBox_dificultad->TabIndex = 7;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 344);
			this->Controls->Add(this->comboBox_dificultad);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_salir);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_Pilas);
			this->Controls->Add(this->button_Inicio);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label_Pilas_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_salir_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
private: System::Void button_Inicio_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int cajas;
	if (comboBox_dificultad->Text == "Facil")
	{
		cajas = 9;
	}
	else if (comboBox_dificultad->Text == "Medio")
	{
		cajas = 15;
	}
	else if (comboBox_dificultad->Text == "Dificil")
	{
		cajas = 18;
	}
	//condicion para que se inicie, si alguno de los campos esta vacio no pasa al siguiente formulario
	if (comboBox1->Text == "3" && !String::IsNullOrEmpty(comboBox_dificultad->Text))
	{
		Pilas_3^ p3 = gcnew Pilas_3;
		//descubri que asi se pueden pasar datos
		p3->label_dificultad->Text = comboBox_dificultad->Text;
		this->Hide();
		p3->ShowDialog();
		this->Show();
	}
	if (comboBox1->Text == "6" && !String::IsNullOrEmpty(comboBox_dificultad->Text))
	{
		Pilas_6^ p6 = gcnew Pilas_6;
		p6->label_dificultad->Text = comboBox_dificultad->Text;
		this->Hide();
		p6->ShowDialog();
		this->Show();
	}
	else
	{
		//error message, algo generico pero funciona
		String^ error = "Porfavor llene todos los campos requeridos";
		MessageBox::Show(error);
	}
}
private: System::Void textBox_bloques_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show("Su objetivo es mover los numeros \n de manera que cada numero quede en su propia pila");
}
};
}
