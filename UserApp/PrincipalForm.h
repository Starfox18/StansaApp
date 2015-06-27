#include "StatusForm.h"
#include "HistorialForm.h"
#pragma once

namespace UserApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Threading;
	using namespace StansaController;
	using namespace FotoLibrary;

	/// <summary>
	/// Resumen de PrincipalForm
	/// </summary>
	public ref class PrincipalForm : public System::Windows::Forms::Form
		
	{
	public:
		String^ tittle;
		Customer^ customerInitial = gcnew Customer();

	private: System::Windows::Forms::Button^  Salesbtn;
	private: System::Windows::Forms::Button^  button3;
	public:
		Thread^ tittle_thread;

		PrincipalForm(Customer^ p)
		{
			InitializeComponent();
			customerInitial = p;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
		void crear(){
			tittle_thread = gcnew Thread(gcnew ThreadStart(this, &PrincipalForm::MyRun));
			tittle_thread->Start();
		}

		void MyRun(){
			while (true) {

				DateTime^ now = DateTime::Now;
				Invoke(gcnew delegateUpdateTitle(this, &PrincipalForm::UpdateTitle),
					gcnew array<String^>{ tittle + now->ToString("hh:mm:ss")});
				Thread::Sleep(1000);
				if (!this->Visible)
					return;
			}
		}

		delegate void delegateUpdateTitle(String^);

		void UpdateTitle(String ^newTitle){
			this->Text = newTitle;
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~PrincipalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Salesbtn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(477, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(239, 96);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Servicios / Modulo";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(100, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 96);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Disponibilidad Stansa";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PrincipalForm::button1_Click);
			// 
			// Salesbtn
			// 
			this->Salesbtn->Location = System::Drawing::Point(100, 200);
			this->Salesbtn->Name = L"Salesbtn";
			this->Salesbtn->Size = System::Drawing::Size(239, 97);
			this->Salesbtn->TabIndex = 6;
			this->Salesbtn->Text = L"Historial de Ventas";
			this->Salesbtn->UseVisualStyleBackColor = true;
			this->Salesbtn->Click += gcnew System::EventHandler(this, &PrincipalForm::Salesbtn_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(477, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 96);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Disponibilidad Stansa";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 545);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Salesbtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->IsMdiContainer = true;
			this->Name = L"PrincipalForm";
			this->Text = L"Applicación Stansa";
			this->Load += gcnew System::EventHandler(this, &PrincipalForm::PrincipalForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 StatusForm ^psForm = gcnew StatusForm;
				 psForm->ShowDialog();

	}
private: System::Void PrincipalForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 crear();
}
private: System::Void Salesbtn_Click(System::Object^  sender, System::EventArgs^  e) {

			 HistorialForm ^psForm = gcnew HistorialForm(customerInitial);
			psForm->ShowDialog();
			
			 
}
};
}
