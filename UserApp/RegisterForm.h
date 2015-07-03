#pragma once

namespace UserApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FotoLibrary;
	using namespace StansaController;
	using namespace System::Collections::Generic;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		Customer^ customerAdded;

		RegisterForm(Customer^ c)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			customerAdded = c;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  dnilbl;
	private: System::Windows::Forms::Label^  lastnamelbl;
	private: System::Windows::Forms::Label^  secondlastnamelbl;
	private: System::Windows::Forms::Label^  userlbl;
	private: System::Windows::Forms::Label^  passwordlbl;
	private: System::Windows::Forms::RadioButton^  maleRBT;
	private: System::Windows::Forms::RadioButton^  femaleRBT;


	private: System::Windows::Forms::Label^  sexlbl;
	private: System::Windows::Forms::TextBox^  dnitxt;
	private: System::Windows::Forms::TextBox^  lastnametxt;
	private: System::Windows::Forms::TextBox^  secondlastnametxt;
	private: System::Windows::Forms::TextBox^  usertxt;
	private: System::Windows::Forms::TextBox^  passwordtxt;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  namelbl;
	private: System::Windows::Forms::TextBox^  nametxt;
	private: System::Windows::Forms::Label^  codelbl;
	private: System::Windows::Forms::Label^  facultadlbl;
	private: System::Windows::Forms::TextBox^  codetxt;

	private: System::Windows::Forms::TextBox^  password2txt;
	private: System::Windows::Forms::Label^  Password2lbl;
	private: System::Windows::Forms::ComboBox^  cbxfacultad;
	private: System::Windows::Forms::Label^  label1;




	protected:

	protected:

	protected:




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
			this->dnilbl = (gcnew System::Windows::Forms::Label());
			this->lastnamelbl = (gcnew System::Windows::Forms::Label());
			this->secondlastnamelbl = (gcnew System::Windows::Forms::Label());
			this->userlbl = (gcnew System::Windows::Forms::Label());
			this->passwordlbl = (gcnew System::Windows::Forms::Label());
			this->maleRBT = (gcnew System::Windows::Forms::RadioButton());
			this->femaleRBT = (gcnew System::Windows::Forms::RadioButton());
			this->sexlbl = (gcnew System::Windows::Forms::Label());
			this->dnitxt = (gcnew System::Windows::Forms::TextBox());
			this->lastnametxt = (gcnew System::Windows::Forms::TextBox());
			this->secondlastnametxt = (gcnew System::Windows::Forms::TextBox());
			this->usertxt = (gcnew System::Windows::Forms::TextBox());
			this->passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->namelbl = (gcnew System::Windows::Forms::Label());
			this->nametxt = (gcnew System::Windows::Forms::TextBox());
			this->codelbl = (gcnew System::Windows::Forms::Label());
			this->facultadlbl = (gcnew System::Windows::Forms::Label());
			this->codetxt = (gcnew System::Windows::Forms::TextBox());
			this->password2txt = (gcnew System::Windows::Forms::TextBox());
			this->Password2lbl = (gcnew System::Windows::Forms::Label());
			this->cbxfacultad = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dnilbl
			// 
			this->dnilbl->AutoSize = true;
			this->dnilbl->Location = System::Drawing::Point(37, 76);
			this->dnilbl->Name = L"dnilbl";
			this->dnilbl->Size = System::Drawing::Size(26, 13);
			this->dnilbl->TabIndex = 0;
			this->dnilbl->Text = L"DNI";
			// 
			// lastnamelbl
			// 
			this->lastnamelbl->AutoSize = true;
			this->lastnamelbl->Location = System::Drawing::Point(34, 96);
			this->lastnamelbl->Name = L"lastnamelbl";
			this->lastnamelbl->Size = System::Drawing::Size(84, 13);
			this->lastnamelbl->TabIndex = 1;
			this->lastnamelbl->Text = L"Apellido Paterno";
			// 
			// secondlastnamelbl
			// 
			this->secondlastnamelbl->AutoSize = true;
			this->secondlastnamelbl->Location = System::Drawing::Point(34, 118);
			this->secondlastnamelbl->Name = L"secondlastnamelbl";
			this->secondlastnamelbl->Size = System::Drawing::Size(86, 13);
			this->secondlastnamelbl->TabIndex = 2;
			this->secondlastnamelbl->Text = L"Apellido Materno";
			// 
			// userlbl
			// 
			this->userlbl->AutoSize = true;
			this->userlbl->Location = System::Drawing::Point(366, 76);
			this->userlbl->Name = L"userlbl";
			this->userlbl->Size = System::Drawing::Size(43, 13);
			this->userlbl->TabIndex = 3;
			this->userlbl->Text = L"Usuario";
			// 
			// passwordlbl
			// 
			this->passwordlbl->AutoSize = true;
			this->passwordlbl->Location = System::Drawing::Point(366, 96);
			this->passwordlbl->Name = L"passwordlbl";
			this->passwordlbl->Size = System::Drawing::Size(61, 13);
			this->passwordlbl->TabIndex = 4;
			this->passwordlbl->Text = L"Contraseña";
			this->passwordlbl->Click += gcnew System::EventHandler(this, &RegisterForm::passwordlbl_Click);
			// 
			// maleRBT
			// 
			this->maleRBT->AutoSize = true;
			this->maleRBT->Location = System::Drawing::Point(140, 160);
			this->maleRBT->Name = L"maleRBT";
			this->maleRBT->Size = System::Drawing::Size(73, 17);
			this->maleRBT->TabIndex = 5;
			this->maleRBT->TabStop = true;
			this->maleRBT->Text = L"Masculino";
			this->maleRBT->UseVisualStyleBackColor = true;
			this->maleRBT->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::manrdb_CheckedChanged);
			// 
			// femaleRBT
			// 
			this->femaleRBT->AutoSize = true;
			this->femaleRBT->Location = System::Drawing::Point(244, 160);
			this->femaleRBT->Name = L"femaleRBT";
			this->femaleRBT->Size = System::Drawing::Size(71, 17);
			this->femaleRBT->TabIndex = 6;
			this->femaleRBT->TabStop = true;
			this->femaleRBT->Text = L"Femenino";
			this->femaleRBT->UseVisualStyleBackColor = true;
			// 
			// sexlbl
			// 
			this->sexlbl->AutoSize = true;
			this->sexlbl->Location = System::Drawing::Point(37, 162);
			this->sexlbl->Name = L"sexlbl";
			this->sexlbl->Size = System::Drawing::Size(31, 13);
			this->sexlbl->TabIndex = 7;
			this->sexlbl->Text = L"Sexo";
			// 
			// dnitxt
			// 
			this->dnitxt->Location = System::Drawing::Point(126, 73);
			this->dnitxt->MaxLength = 8;
			this->dnitxt->Name = L"dnitxt";
			this->dnitxt->ReadOnly = true;
			this->dnitxt->Size = System::Drawing::Size(204, 20);
			this->dnitxt->TabIndex = 1;
			// 
			// lastnametxt
			// 
			this->lastnametxt->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->lastnametxt->Location = System::Drawing::Point(126, 93);
			this->lastnametxt->MaxLength = 1000;
			this->lastnametxt->Name = L"lastnametxt";
			this->lastnametxt->Size = System::Drawing::Size(204, 20);
			this->lastnametxt->TabIndex = 2;
			// 
			// secondlastnametxt
			// 
			this->secondlastnametxt->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->secondlastnametxt->Location = System::Drawing::Point(126, 115);
			this->secondlastnametxt->Name = L"secondlastnametxt";
			this->secondlastnametxt->Size = System::Drawing::Size(204, 20);
			this->secondlastnametxt->TabIndex = 3;
			// 
			// usertxt
			// 
			this->usertxt->Location = System::Drawing::Point(465, 73);
			this->usertxt->MaxLength = 10;
			this->usertxt->Name = L"usertxt";
			this->usertxt->ReadOnly = true;
			this->usertxt->Size = System::Drawing::Size(213, 20);
			this->usertxt->TabIndex = 7;
			// 
			// passwordtxt
			// 
			this->passwordtxt->Location = System::Drawing::Point(465, 93);
			this->passwordtxt->MaxLength = 15;
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->PasswordChar = '~';
			this->passwordtxt->Size = System::Drawing::Size(213, 20);
			this->passwordtxt->TabIndex = 8;
			this->passwordtxt->TextChanged += gcnew System::EventHandler(this, &RegisterForm::passwordtxt_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(358, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// namelbl
			// 
			this->namelbl->AutoSize = true;
			this->namelbl->Location = System::Drawing::Point(37, 141);
			this->namelbl->Name = L"namelbl";
			this->namelbl->Size = System::Drawing::Size(44, 13);
			this->namelbl->TabIndex = 15;
			this->namelbl->Text = L"Nombre";
			// 
			// nametxt
			// 
			this->nametxt->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->nametxt->Location = System::Drawing::Point(126, 138);
			this->nametxt->Name = L"nametxt";
			this->nametxt->Size = System::Drawing::Size(204, 20);
			this->nametxt->TabIndex = 4;
			// 
			// codelbl
			// 
			this->codelbl->AutoSize = true;
			this->codelbl->Location = System::Drawing::Point(366, 141);
			this->codelbl->Name = L"codelbl";
			this->codelbl->Size = System::Drawing::Size(67, 13);
			this->codelbl->TabIndex = 17;
			this->codelbl->Text = L"Codigo pucp";
			this->codelbl->Click += gcnew System::EventHandler(this, &RegisterForm::codelbl_Click);
			// 
			// facultadlbl
			// 
			this->facultadlbl->AutoSize = true;
			this->facultadlbl->Location = System::Drawing::Point(366, 162);
			this->facultadlbl->Name = L"facultadlbl";
			this->facultadlbl->Size = System::Drawing::Size(48, 13);
			this->facultadlbl->TabIndex = 18;
			this->facultadlbl->Text = L"Facultad";
			// 
			// codetxt
			// 
			this->codetxt->Location = System::Drawing::Point(465, 138);
			this->codetxt->MaxLength = 8;
			this->codetxt->Name = L"codetxt";
			this->codetxt->ReadOnly = true;
			this->codetxt->Size = System::Drawing::Size(213, 20);
			this->codetxt->TabIndex = 10;
			// 
			// password2txt
			// 
			this->password2txt->Location = System::Drawing::Point(466, 115);
			this->password2txt->MaxLength = 15;
			this->password2txt->Name = L"password2txt";
			this->password2txt->PasswordChar = '~';
			this->password2txt->Size = System::Drawing::Size(212, 20);
			this->password2txt->TabIndex = 9;
			// 
			// Password2lbl
			// 
			this->Password2lbl->AutoSize = true;
			this->Password2lbl->Location = System::Drawing::Point(366, 118);
			this->Password2lbl->Name = L"Password2lbl";
			this->Password2lbl->Size = System::Drawing::Size(94, 13);
			this->Password2lbl->TabIndex = 22;
			this->Password2lbl->Text = L"Repita contraseña";
			this->Password2lbl->Click += gcnew System::EventHandler(this, &RegisterForm::Password2lbl_Click);
			// 
			// cbxfacultad
			// 
			this->cbxfacultad->FormattingEnabled = true;
			this->cbxfacultad->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Facultad de Arte", L"Facultad de Artes y Ciencias de la Comunicación",
					L"Facultad de Ciencias e Ingeniería", L"Facultad de Derecho", L"Facultad de Humanidades", L"Facultad de Educación", L"Facultad de Artes Escénicas",
					L"Facultad de Ciencias Sociales", L"Facultad de Estudios Generales Letras", L"Facultad de Estudios Generales Ciencias"
			});
			this->cbxfacultad->Location = System::Drawing::Point(465, 159);
			this->cbxfacultad->Name = L"cbxfacultad";
			this->cbxfacultad->Size = System::Drawing::Size(213, 21);
			this->cbxfacultad->TabIndex = 11;
			this->cbxfacultad->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 20);
			this->label1->TabIndex = 24;
			this->label1->Text = L"TODOS LOS CAMPOS SON ESTRICTAMENTE OBLIGATORIOS";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 232);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbxfacultad);
			this->Controls->Add(this->Password2lbl);
			this->Controls->Add(this->password2txt);
			this->Controls->Add(this->codetxt);
			this->Controls->Add(this->facultadlbl);
			this->Controls->Add(this->codelbl);
			this->Controls->Add(this->nametxt);
			this->Controls->Add(this->namelbl);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->passwordtxt);
			this->Controls->Add(this->usertxt);
			this->Controls->Add(this->secondlastnametxt);
			this->Controls->Add(this->lastnametxt);
			this->Controls->Add(this->dnitxt);
			this->Controls->Add(this->sexlbl);
			this->Controls->Add(this->femaleRBT);
			this->Controls->Add(this->maleRBT);
			this->Controls->Add(this->passwordlbl);
			this->Controls->Add(this->userlbl);
			this->Controls->Add(this->secondlastnamelbl);
			this->Controls->Add(this->lastnamelbl);
			this->Controls->Add(this->dnilbl);
			this->Name = L"RegisterForm";
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: void LoadValues(){
					usertxt->Text = customerAdded->username;
					dnitxt->Text = customerAdded->dni;
					codetxt->Text = customerAdded->codigoPUCP;
					nametxt->Text = customerAdded->name;
					lastnametxt->Text = customerAdded->apellido_Paterno;
					secondlastnametxt->Text = customerAdded->apellido_Materno;
					if (customerAdded->sexo == "M"){
						maleRBT->Checked == true;
					}
					if (customerAdded->sexo == "F"){
						femaleRBT->Checked == true;
					}


		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
				 /*
		//VALIDACION Y OBTENCIÓN DE DNI
		String^ dni = dnitxt->Text->Trim();
		if (dni == ""){
			MessageBox::Show("Campo DNI solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return;
		}*/
		//VALIDACION Y OBTENCIÓN DE APELLIDO PATERNO
		String^ lastname = lastnametxt->Text->Trim();
		if (lastname == ""){
			MessageBox::Show("Campo APELLIDO PATERNO solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
		//VALIDACION Y OBTENCIÓN DE APELLIDO MATERNO
		String^ secondlastname = secondlastnametxt->Text->Trim();
		if (secondlastname == ""){
			MessageBox::Show("Campo APELLIDO MATERNO solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios"); 
			return;
		}
		//VALIDACION Y OBTENCIÓN DE NOMBRE
		String^ name = nametxt->Text->Trim();
		if (name == ""){
			MessageBox::Show("Campo NOMBRE solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios"); 
			return;
		}
		//VALIDACION Y OBTENCIÓN DE SEXO
		String^ sexo;
		if (femaleRBT->Checked){sexo = "F";	}
		else if(maleRBT->Checked){sexo = "M";}

		if (sexo == nullptr){
			MessageBox::Show("Campo SEXO solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
		/*
		//VALIDACION Y OBTENCIÓN DE USUARIO
		String^ user = usertxt->Text->Trim();
		if (user == ""){
			MessageBox::Show("Campo USUARIO solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
		//VALIDACION Y OBTENCIÓN DE CONTRASEÑA
		String^ password = passwordtxt->Text->Trim();
		if (password == ""){
			MessageBox::Show("Campo CONTRASEÑA solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
		//VALIDACION Y OBTENCIÓN DE CODIGO PUCP
		String^ codigo = codetxt->Text->Trim();
		if (codigo == ""){
			MessageBox::Show("Campo CODIGO PUCP solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
		*/
		//VALIDACION Y OBTENCIÓN DE FACULTAD
		String^ facultad = cbxfacultad->Text->Trim();
		if (facultad == ""){
			MessageBox::Show("Campo FACULTAD solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
	/*	//VALIDACION Y OBTENCIÓN DE CONTRASEÑA 2
		
		if (password2 == ""){
			MessageBox::Show("Campo CONFIRMACION DE CONTRASEÑA solicitado VACIO." +
				" Recuerde que todos los campos son obligatorios");
			return; }
    
		//VALIDACIONES DE CODIGO PUCP | USER | DNI | REGISTRADOS PREVIAMENTE
		Customer ^p = StansaManager::QueryCustomerByCodigoPUCP(codigo);
		if (!(p == nullptr)){
			MessageBox::Show("Código PUCP ya registrado, NO PUEDE volvera registrarse."+
								" Solicite suss credenciales a Soporte ténico");
			return;
		}
		*/
		String^ password2 = password2txt->Text->Trim();
		String^ password = passwordtxt->Text->Trim();

		/*
		Customer ^p = StansaManager::QueryCustomerByCodigoPUCP(codetxt->Text);
		p = StansaManager::QueryCustomerByDni(dnitxt->Text);
		if (!(p == nullptr)){
			MessageBox::Show("DNI ya registrado, NO PUEDE volvera registrarse." +
				" Solicite suss credenciales a Soporte ténico");
			return;
		}
		p = StansaManager::QueryCustomerByUser(usertxt->Text);
		if (!(p == nullptr)){
			MessageBox::Show("Nombre de usuario ya usado previamente, elija otro nombre de Usuario");
			return;
		}
		*/
		Customer ^p = StansaManager::QueryCustomerByDni(dnitxt->Text);


		if (password == password2){
				 p = gcnew Customer();
				 p->id = customerAdded->id;
				 p->dni = dnitxt->Text;
				 p->apellido_Paterno = lastname;
				 p->apellido_Materno = secondlastname;
				 p->name = name;
				 p->sexo = sexo;
				 p->username = usertxt->Text;
				 
				 p->codigoPUCP =codetxt->Text;
				 p->facultad = facultad;

				 if (password != customerAdded->password){
					 if( MessageBox::Show("Usted ha ingresado una nueva contraseña",
						 "Validación de nueva contraseña",
						 MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
						 System::Windows::Forms::DialogResult::Yes )
					 {

						 p->password = password;
						 StansaManager::UpdateCustomer(p);
						 Close();
					 }
					 else
					 {
						 MessageBox::Show("No olvide eliminar el campo de password o de lo contrario reescribir la  anterior contraseña");

					 }

				 }

				 
				 
			 }
			else
				{MessageBox::Show("Contraseñas no coinciden");	}
	}
				
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
private: System::Void RegisterForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 LoadValues();
}
private: System::Void codelbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void passwordtxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Password2lbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void manrdb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void passwordlbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
