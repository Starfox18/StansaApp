#pragma once

namespace UserApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PrincipalForm
	/// </summary>
	public ref class PrincipalForm : public System::Windows::Forms::Form
	{
	public:
		PrincipalForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
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
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(461, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Servicios / Modulo";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Disponibilidad Stansa";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 321);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->IsMdiContainer = true;
			this->Name = L"PrincipalForm";
			this->Text = L"PrincipalForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
