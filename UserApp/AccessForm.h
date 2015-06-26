#pragma once
#include "PrincipalForm.h"
#include "RegisterForm.h"
namespace UserApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FotoLibrary;
	using namespace StansaController;

	/// <summary>
	/// Resumen de AccessForm
	/// </summary>
	public ref class AccessForm : public System::Windows::Forms::Form
	{
	public:
		AccessForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~AccessForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtPsw;
	protected:

	private: System::Windows::Forms::TextBox^  txtUser;
	protected:

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
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
			this->txtPsw = (gcnew System::Windows::Forms::TextBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtPsw
			// 
			this->txtPsw->Location = System::Drawing::Point(213, 78);
			this->txtPsw->Name = L"txtPsw";
			this->txtPsw->PasswordChar = '•';
			this->txtPsw->Size = System::Drawing::Size(100, 20);
			this->txtPsw->TabIndex = 17;
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(213, 39);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 20);
			this->txtUser->TabIndex = 16;
			this->txtUser->TextChanged += gcnew System::EventHandler(this, &AccessForm::txtUser_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(110, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Si usted no tiene usuario hacer  en REGISTRAR, recuerda";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"que cada DNI puede tener solo 1  usuario";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Usuario";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(367, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Registrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AccessForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(367, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AccessForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(367, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Acceder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AccessForm::button1_Click);
			// 
			// AccessForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 223);
			this->Controls->Add(this->txtPsw);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AccessForm";
			this->Text = L"Identificación";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 String^ user = txtUser->Text->Trim();
				 String^ psw = txtPsw->Text->Trim();
				 
				
				 Customer^ p = StansaManager::QueryCustomerByUser(user);
				 
				 while (p == nullptr)
				 {
					 MessageBox::Show("Usuario NO EXISTE");
					 return;
				 }
				 				 
				 if (!String::Compare(p->password,psw))
				 {	 PrincipalForm ^ psForm = gcnew PrincipalForm(p);
					 psForm->tittle = " Bienvenido a AppStansa : " + p->name + " " + p->apellido_Paterno+
										" " + p->apellido_Materno + " ";
					 Visible = false;
					 psForm->ShowDialog();
					 Close();
					 //this->
				}
				 else
				 {	 MessageBox::Show("Usuario o Contraseña INCORRECTA"); }



	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 RegisterForm ^psForm = gcnew RegisterForm();
			 psForm->ShowDialog();

}
private: System::Void txtUser_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
