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
	private: System::Windows::Forms::TextBox^  facultadtxt;



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
			this->facultadtxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// dnilbl
			// 
			this->dnilbl->AutoSize = true;
			this->dnilbl->Location = System::Drawing::Point(60, 58);
			this->dnilbl->Name = L"dnilbl";
			this->dnilbl->Size = System::Drawing::Size(26, 13);
			this->dnilbl->TabIndex = 0;
			this->dnilbl->Text = L"DNI";
			// 
			// lastnamelbl
			// 
			this->lastnamelbl->AutoSize = true;
			this->lastnamelbl->Location = System::Drawing::Point(60, 106);
			this->lastnamelbl->Name = L"lastnamelbl";
			this->lastnamelbl->Size = System::Drawing::Size(84, 13);
			this->lastnamelbl->TabIndex = 1;
			this->lastnamelbl->Text = L"Apellido Paterno";
			// 
			// secondlastnamelbl
			// 
			this->secondlastnamelbl->AutoSize = true;
			this->secondlastnamelbl->Location = System::Drawing::Point(60, 146);
			this->secondlastnamelbl->Name = L"secondlastnamelbl";
			this->secondlastnamelbl->Size = System::Drawing::Size(86, 13);
			this->secondlastnamelbl->TabIndex = 2;
			this->secondlastnamelbl->Text = L"Apellido Materno";
			// 
			// userlbl
			// 
			this->userlbl->AutoSize = true;
			this->userlbl->Location = System::Drawing::Point(380, 58);
			this->userlbl->Name = L"userlbl";
			this->userlbl->Size = System::Drawing::Size(41, 13);
			this->userlbl->TabIndex = 3;
			this->userlbl->Text = L"usuario";
			// 
			// passwordlbl
			// 
			this->passwordlbl->AutoSize = true;
			this->passwordlbl->Location = System::Drawing::Point(380, 106);
			this->passwordlbl->Name = L"passwordlbl";
			this->passwordlbl->Size = System::Drawing::Size(60, 13);
			this->passwordlbl->TabIndex = 4;
			this->passwordlbl->Text = L"contraseña";
			// 
			// manrdb
			// 
			this->manrdb->AutoSize = true;
			this->manrdb->Location = System::Drawing::Point(128, 228);
			this->manrdb->Name = L"manrdb";
			this->manrdb->Size = System::Drawing::Size(72, 17);
			this->manrdb->TabIndex = 5;
			this->manrdb->TabStop = true;
			this->manrdb->Text = L"masculino";
			this->manrdb->UseVisualStyleBackColor = true;
			// 
			// femalerdb
			// 
			this->femalerdb->AutoSize = true;
			this->femalerdb->Location = System::Drawing::Point(249, 228);
			this->femalerdb->Name = L"femalerdb";
			this->femalerdb->Size = System::Drawing::Size(68, 17);
			this->femalerdb->TabIndex = 6;
			this->femalerdb->TabStop = true;
			this->femalerdb->Text = L"femenino";
			this->femalerdb->UseVisualStyleBackColor = true;
			// 
			// sexlbl
			// 
			this->sexlbl->AutoSize = true;
			this->sexlbl->Location = System::Drawing::Point(60, 232);
			this->sexlbl->Name = L"sexlbl";
			this->sexlbl->Size = System::Drawing::Size(31, 13);
			this->sexlbl->TabIndex = 7;
			this->sexlbl->Text = L"Sexo";
			// 
			// dnitxt
			// 
			this->dnitxt->Location = System::Drawing::Point(193, 51);
			this->dnitxt->Name = L"dnitxt";
			this->dnitxt->Size = System::Drawing::Size(100, 20);
			this->dnitxt->TabIndex = 8;
			// 
			// lastnametxt
			// 
			this->lastnametxt->Location = System::Drawing::Point(193, 99);
			this->lastnametxt->Name = L"lastnametxt";
			this->lastnametxt->Size = System::Drawing::Size(100, 20);
			this->lastnametxt->TabIndex = 9;
			// 
			// secondlastnametxt
			// 
			this->secondlastnametxt->Location = System::Drawing::Point(193, 146);
			this->secondlastnametxt->Name = L"secondlastnametxt";
			this->secondlastnametxt->Size = System::Drawing::Size(100, 20);
			this->secondlastnametxt->TabIndex = 10;
			// 
			// usertxt
			// 
			this->usertxt->Location = System::Drawing::Point(500, 58);
			this->usertxt->Name = L"usertxt";
			this->usertxt->Size = System::Drawing::Size(100, 20);
			this->usertxt->TabIndex = 11;
			// 
			// passwordtxt
			// 
			this->passwordtxt->Location = System::Drawing::Point(500, 98);
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->Size = System::Drawing::Size(100, 20);
			this->passwordtxt->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(193, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(401, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"CANCELAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// namelbl
			// 
			this->namelbl->AutoSize = true;
			this->namelbl->Location = System::Drawing::Point(60, 184);
			this->namelbl->Name = L"namelbl";
			this->namelbl->Size = System::Drawing::Size(44, 13);
			this->namelbl->TabIndex = 15;
			this->namelbl->Text = L"Nombre";
			// 
			// nametxt
			// 
			this->nametxt->Location = System::Drawing::Point(193, 184);
			this->nametxt->Name = L"nametxt";
			this->nametxt->Size = System::Drawing::Size(100, 20);
			this->nametxt->TabIndex = 16;
			// 
			// codelbl
			// 
			this->codelbl->AutoSize = true;
			this->codelbl->Location = System::Drawing::Point(383, 145);
			this->codelbl->Name = L"codelbl";
			this->codelbl->Size = System::Drawing::Size(66, 13);
			this->codelbl->TabIndex = 17;
			this->codelbl->Text = L"codigo pucp";
			this->codelbl->Click += gcnew System::EventHandler(this, &RegisterForm::codelbl_Click);
			// 
			// facultadlbl
			// 
			this->facultadlbl->AutoSize = true;
			this->facultadlbl->Location = System::Drawing::Point(386, 184);
			this->facultadlbl->Name = L"facultadlbl";
			this->facultadlbl->Size = System::Drawing::Size(45, 13);
			this->facultadlbl->TabIndex = 18;
			this->facultadlbl->Text = L"facultad";
			// 
			// codetxt
			// 
			this->codetxt->Location = System::Drawing::Point(500, 137);
			this->codetxt->Name = L"codetxt";
			this->codetxt->Size = System::Drawing::Size(100, 20);
			this->codetxt->TabIndex = 19;
			// 
			// facultadtxt
			// 
			this->facultadtxt->Location = System::Drawing::Point(500, 184);
			this->facultadtxt->Name = L"facultadtxt";
			this->facultadtxt->Size = System::Drawing::Size(100, 20);
			this->facultadtxt->TabIndex = 20;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 397);
			this->Controls->Add(this->facultadtxt);
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

				 if (femalerdb->Checked){
					 
					 sexo = 'F';
					 
				 }
				 else{
					 sexo = 'M';
				 }

				 Customer^ p = gcnew Customer();
				 p->dni=dni ;
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
private: System::Void RegisterForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void codelbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
