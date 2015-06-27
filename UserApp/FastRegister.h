#pragma once

namespace UserApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FastRegister
	/// </summary>
	public ref class FastRegister : public System::Windows::Forms::Form
	{
	public:
		FastRegister(void)
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
		~FastRegister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Password2lbl;
	protected:
	private: System::Windows::Forms::TextBox^  password2txt;
	private: System::Windows::Forms::TextBox^  codetxt;
	private: System::Windows::Forms::Label^  codelbl;
	private: System::Windows::Forms::TextBox^  passwordtxt;
	private: System::Windows::Forms::TextBox^  usertxt;
	private: System::Windows::Forms::Label^  passwordlbl;
	private: System::Windows::Forms::Label^  userlbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;

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
			this->Password2lbl = (gcnew System::Windows::Forms::Label());
			this->password2txt = (gcnew System::Windows::Forms::TextBox());
			this->codetxt = (gcnew System::Windows::Forms::TextBox());
			this->codelbl = (gcnew System::Windows::Forms::Label());
			this->passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->usertxt = (gcnew System::Windows::Forms::TextBox());
			this->passwordlbl = (gcnew System::Windows::Forms::Label());
			this->userlbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Password2lbl
			// 
			this->Password2lbl->AutoSize = true;
			this->Password2lbl->Location = System::Drawing::Point(82, 152);
			this->Password2lbl->Name = L"Password2lbl";
			this->Password2lbl->Size = System::Drawing::Size(94, 13);
			this->Password2lbl->TabIndex = 30;
			this->Password2lbl->Text = L"Repita contraseña";
			// 
			// password2txt
			// 
			this->password2txt->Location = System::Drawing::Point(182, 149);
			this->password2txt->MaxLength = 15;
			this->password2txt->Name = L"password2txt";
			this->password2txt->PasswordChar = '~';
			this->password2txt->Size = System::Drawing::Size(212, 20);
			this->password2txt->TabIndex = 27;
			// 
			// codetxt
			// 
			this->codetxt->Location = System::Drawing::Point(181, 172);
			this->codetxt->MaxLength = 8;
			this->codetxt->Name = L"codetxt";
			this->codetxt->Size = System::Drawing::Size(213, 20);
			this->codetxt->TabIndex = 28;
			// 
			// codelbl
			// 
			this->codelbl->AutoSize = true;
			this->codelbl->Location = System::Drawing::Point(82, 175);
			this->codelbl->Name = L"codelbl";
			this->codelbl->Size = System::Drawing::Size(67, 13);
			this->codelbl->TabIndex = 29;
			this->codelbl->Text = L"Codigo pucp";
			// 
			// passwordtxt
			// 
			this->passwordtxt->Location = System::Drawing::Point(181, 127);
			this->passwordtxt->MaxLength = 15;
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->PasswordChar = '~';
			this->passwordtxt->Size = System::Drawing::Size(213, 20);
			this->passwordtxt->TabIndex = 26;
			// 
			// usertxt
			// 
			this->usertxt->Location = System::Drawing::Point(181, 107);
			this->usertxt->MaxLength = 10;
			this->usertxt->Name = L"usertxt";
			this->usertxt->Size = System::Drawing::Size(213, 20);
			this->usertxt->TabIndex = 25;
			// 
			// passwordlbl
			// 
			this->passwordlbl->AutoSize = true;
			this->passwordlbl->Location = System::Drawing::Point(82, 130);
			this->passwordlbl->Name = L"passwordlbl";
			this->passwordlbl->Size = System::Drawing::Size(61, 13);
			this->passwordlbl->TabIndex = 24;
			this->passwordlbl->Text = L"Contraseña";
			// 
			// userlbl
			// 
			this->userlbl->AutoSize = true;
			this->userlbl->Location = System::Drawing::Point(82, 110);
			this->userlbl->Name = L"userlbl";
			this->userlbl->Size = System::Drawing::Size(43, 13);
			this->userlbl->TabIndex = 23;
			this->userlbl->Text = L"Usuario";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"TODOS LOS CAMPOS SON ESTRICTAMENTE OBLIGATORIOS";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 34);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FastRegister::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(262, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 34);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"DNI";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(181, 85);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 20);
			this->textBox1->TabIndex = 35;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(439, 12);
			this->label3->TabIndex = 36;
			this->label3->Text = L"DNI, USUARIO Y CODIGO PUCP SOLO PODRÁN SER INGRESADOS UNA SOLA VEZ";
			// 
			// FastRegister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 312);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Password2lbl);
			this->Controls->Add(this->password2txt);
			this->Controls->Add(this->codetxt);
			this->Controls->Add(this->codelbl);
			this->Controls->Add(this->passwordtxt);
			this->Controls->Add(this->usertxt);
			this->Controls->Add(this->passwordlbl);
			this->Controls->Add(this->userlbl);
			this->Name = L"FastRegister";
			this->Text = L"FastRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //VALIDACION Y OBTENCIÓN DE USUARIO
				 String^ user = usertxt->Text->Trim();
				 if (user == ""){
					 MessageBox::Show("Campo USUARIO solicitado VACIO." +
						 " Recuerde que todos los campos son obligatorios");
					 return;
				 }
				 //VALIDACION Y OBTENCIÓN DE CONTRASEÑA
				 String^ password = passwordtxt->Text->Trim();
				 if (password == ""){
					 MessageBox::Show("Campo CONTRASEÑA solicitado VACIO." +
						 " Recuerde que todos los campos son obligatorios");
					 return;
				 }
				 //VALIDACION Y OBTENCIÓN DE CODIGO PUCP
				 String^ codigo = codetxt->Text->Trim();
				 if (codigo == ""){
					 MessageBox::Show("Campo CODIGO PUCP solicitado VACIO." +
						 " Recuerde que todos los campos son obligatorios");
					 return;
				 }
				 				 
				 //VALIDACION Y OBTENCIÓN DE CONTRASEÑA 2
				 String^ password2 = password2txt->Text->Trim();
				 if (password2 == ""){
					 MessageBox::Show("Campo CONFIRMACION DE CONTRASEÑA solicitado VACIO." +
						 " Recuerde que todos los campos son obligatorios");
					 return;
				 }



	}
};
}
