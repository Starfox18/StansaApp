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
		RegisterForm(void)
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
	private: System::Windows::Forms::RadioButton^  manrdb;
	private: System::Windows::Forms::RadioButton^  femalerdb;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;



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
			this->manrdb = (gcnew System::Windows::Forms::RadioButton());
			this->femalerdb = (gcnew System::Windows::Forms::RadioButton());
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// dnilbl
			// 
			this->dnilbl->AutoSize = true;
			this->dnilbl->Location = System::Drawing::Point(18, 34);
			this->dnilbl->Name = L"dnilbl";
			this->dnilbl->Size = System::Drawing::Size(26, 13);
			this->dnilbl->TabIndex = 0;
			this->dnilbl->Text = L"DNI";
			// 
			// lastnamelbl
			// 
			this->lastnamelbl->AutoSize = true;
			this->lastnamelbl->Location = System::Drawing::Point(15, 54);
			this->lastnamelbl->Name = L"lastnamelbl";
			this->lastnamelbl->Size = System::Drawing::Size(84, 13);
			this->lastnamelbl->TabIndex = 1;
			this->lastnamelbl->Text = L"Apellido Paterno";
			// 
			// secondlastnamelbl
			// 
			this->secondlastnamelbl->AutoSize = true;
			this->secondlastnamelbl->Location = System::Drawing::Point(15, 76);
			this->secondlastnamelbl->Name = L"secondlastnamelbl";
			this->secondlastnamelbl->Size = System::Drawing::Size(86, 13);
			this->secondlastnamelbl->TabIndex = 2;
			this->secondlastnamelbl->Text = L"Apellido Materno";
			// 
			// userlbl
			// 
			this->userlbl->AutoSize = true;
			this->userlbl->Location = System::Drawing::Point(261, 34);
			this->userlbl->Name = L"userlbl";
			this->userlbl->Size = System::Drawing::Size(43, 13);
			this->userlbl->TabIndex = 3;
			this->userlbl->Text = L"Usuario";
			// 
			// passwordlbl
			// 
			this->passwordlbl->AutoSize = true;
			this->passwordlbl->Location = System::Drawing::Point(261, 54);
			this->passwordlbl->Name = L"passwordlbl";
			this->passwordlbl->Size = System::Drawing::Size(61, 13);
			this->passwordlbl->TabIndex = 4;
			this->passwordlbl->Text = L"Contraseña";
			// 
			// manrdb
			// 
			this->manrdb->AutoSize = true;
			this->manrdb->Location = System::Drawing::Point(100, 118);
			this->manrdb->Name = L"manrdb";
			this->manrdb->Size = System::Drawing::Size(73, 17);
			this->manrdb->TabIndex = 5;
			this->manrdb->TabStop = true;
			this->manrdb->Text = L"Masculino";
			this->manrdb->UseVisualStyleBackColor = true;
			this->manrdb->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::manrdb_CheckedChanged);
			// 
			// femalerdb
			// 
			this->femalerdb->AutoSize = true;
			this->femalerdb->Location = System::Drawing::Point(175, 118);
			this->femalerdb->Name = L"femalerdb";
			this->femalerdb->Size = System::Drawing::Size(71, 17);
			this->femalerdb->TabIndex = 6;
			this->femalerdb->TabStop = true;
			this->femalerdb->Text = L"Femenino";
			this->femalerdb->UseVisualStyleBackColor = true;
			// 
			// sexlbl
			// 
			this->sexlbl->AutoSize = true;
			this->sexlbl->Location = System::Drawing::Point(18, 120);
			this->sexlbl->Name = L"sexlbl";
			this->sexlbl->Size = System::Drawing::Size(31, 13);
			this->sexlbl->TabIndex = 7;
			this->sexlbl->Text = L"Sexo";
			// 
			// dnitxt
			// 
			this->dnitxt->Location = System::Drawing::Point(107, 31);
			this->dnitxt->Name = L"dnitxt";
			this->dnitxt->Size = System::Drawing::Size(139, 20);
			this->dnitxt->TabIndex = 8;
			// 
			// lastnametxt
			// 
			this->lastnametxt->Location = System::Drawing::Point(107, 51);
			this->lastnametxt->Name = L"lastnametxt";
			this->lastnametxt->Size = System::Drawing::Size(139, 20);
			this->lastnametxt->TabIndex = 9;
			// 
			// secondlastnametxt
			// 
			this->secondlastnametxt->Location = System::Drawing::Point(107, 73);
			this->secondlastnametxt->Name = L"secondlastnametxt";
			this->secondlastnametxt->Size = System::Drawing::Size(139, 20);
			this->secondlastnametxt->TabIndex = 10;
			// 
			// usertxt
			// 
			this->usertxt->Location = System::Drawing::Point(360, 31);
			this->usertxt->Name = L"usertxt";
			this->usertxt->Size = System::Drawing::Size(132, 20);
			this->usertxt->TabIndex = 11;
			// 
			// passwordtxt
			// 
			this->passwordtxt->Location = System::Drawing::Point(360, 51);
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->PasswordChar = '~';
			this->passwordtxt->Size = System::Drawing::Size(132, 20);
			this->passwordtxt->TabIndex = 12;
			this->passwordtxt->TextChanged += gcnew System::EventHandler(this, &RegisterForm::passwordtxt_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(253, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// namelbl
			// 
			this->namelbl->AutoSize = true;
			this->namelbl->Location = System::Drawing::Point(18, 99);
			this->namelbl->Name = L"namelbl";
			this->namelbl->Size = System::Drawing::Size(44, 13);
			this->namelbl->TabIndex = 15;
			this->namelbl->Text = L"Nombre";
			// 
			// nametxt
			// 
			this->nametxt->Location = System::Drawing::Point(107, 96);
			this->nametxt->Name = L"nametxt";
			this->nametxt->Size = System::Drawing::Size(139, 20);
			this->nametxt->TabIndex = 16;
			// 
			// codelbl
			// 
			this->codelbl->AutoSize = true;
			this->codelbl->Location = System::Drawing::Point(261, 99);
			this->codelbl->Name = L"codelbl";
			this->codelbl->Size = System::Drawing::Size(67, 13);
			this->codelbl->TabIndex = 17;
			this->codelbl->Text = L"Codigo pucp";
			this->codelbl->Click += gcnew System::EventHandler(this, &RegisterForm::codelbl_Click);
			// 
			// facultadlbl
			// 
			this->facultadlbl->AutoSize = true;
			this->facultadlbl->Location = System::Drawing::Point(261, 120);
			this->facultadlbl->Name = L"facultadlbl";
			this->facultadlbl->Size = System::Drawing::Size(48, 13);
			this->facultadlbl->TabIndex = 18;
			this->facultadlbl->Text = L"Facultad";
			// 
			// codetxt
			// 
			this->codetxt->Location = System::Drawing::Point(360, 96);
			this->codetxt->Name = L"codetxt";
			this->codetxt->Size = System::Drawing::Size(132, 20);
			this->codetxt->TabIndex = 19;
			// 
			// password2txt
			// 
			this->password2txt->Location = System::Drawing::Point(361, 73);
			this->password2txt->Name = L"password2txt";
			this->password2txt->PasswordChar = '~';
			this->password2txt->Size = System::Drawing::Size(131, 20);
			this->password2txt->TabIndex = 21;
			// 
			// Password2lbl
			// 
			this->Password2lbl->AutoSize = true;
			this->Password2lbl->Location = System::Drawing::Point(261, 76);
			this->Password2lbl->Name = L"Password2lbl";
			this->Password2lbl->Size = System::Drawing::Size(94, 13);
			this->Password2lbl->TabIndex = 22;
			this->Password2lbl->Text = L"Repita contraseña";
			this->Password2lbl->Click += gcnew System::EventHandler(this, &RegisterForm::Password2lbl_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Facultad de Arte", L"Facultad de Artes y Ciencias de la Comunicación",
					L"Facultad de Ciencias e Ingeniería", L"Facultad de Derecho", L"Facultad de Humanidades", L"Facultad de Educación", L"Facultad de Artes Escénicas",
					L"Facultad de Ciencias Sociales"
			});
			this->comboBox1->Location = System::Drawing::Point(360, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(131, 21);
			this->comboBox1->TabIndex = 23;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterForm::comboBox1_SelectedIndexChanged);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 198);
			this->Controls->Add(this->comboBox1);
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
			this->Controls->Add(this->femalerdb);
			this->Controls->Add(this->manrdb);
			this->Controls->Add(this->passwordlbl);
			this->Controls->Add(this->userlbl);
			this->Controls->Add(this->secondlastnamelbl);
			this->Controls->Add(this->lastnamelbl);
			this->Controls->Add(this->dnilbl);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ dni = dnitxt->Text;
				 String^ lastname = lastnametxt->Text;
				 String^ secondlastname = secondlastnametxt->Text;
				 String^ name = nametxt->Text;
				 char sexo;
				 String^ user = usertxt->Text;
				 String^ password = passwordtxt->Text;
				 String^ codigo = codetxt->Text;
				 String^ facultad = facultadtxt->Text;
				 String^ password2 = password2txt->Text;

				 if (password2 == password){



					 if (femalerdb->Checked){

						 sexo = 'F';

					 }
					 else{
						 sexo = 'M';
					 }

					 Customer^ p = gcnew Customer();
					 p->dni = dni;
					 p->apellido_Paterno = lastname;
					 p->apellido_Materno = secondlastname;
					 p->name = name;
					 p->sexo = sexo;
					 p->username = user;
					 p->password = password;
					 p->codigoPUCP = codigo;
					 p->facultad = facultad;

					 StansaManager::AddCustomer(p);

					 Close();
				 }

				 else
				 {
					 MessageBox::Show("Contraseñas no coinciden");
				 }
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
private: System::Void RegisterForm_Load(System::Object^  sender, System::EventArgs^  e) {
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
};
}
