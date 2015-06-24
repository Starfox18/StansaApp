#pragma once

namespace UserApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FotoLibrary;
	using namespace System::Collections::Generic;
	using namespace System::Threading;
	using namespace StansaController;

	/// <summary>
	/// Resumen de ModStansa
	/// </summary>
	public ref class ModStansa : public System::Windows::Forms::Form
	{
	public:
		ModStansa(void)
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
		~ModStansa()
		{
			if (components)
			{
				delete components;
			}
		}



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
			this->SuspendLayout();
			// 
			// ModStansa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 377);
			this->Name = L"ModStansa";
			this->Text = L"Información de los Modulos";
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void RefreshDGVModStansa(){
				/*
				String^ a;
				ModuloStansa^ modList = StansaManager::QueryModuloStansaByPlace(a);
				List<Attention^>^ atentionList = StansaManager::QueryAllAttentionByModuloStansa(modList);

				int b = 0;
				for (int i = 0; i < atentionList->Count; i++)
				{
					if (String::Compare((atentionList[i]-> estado),"esperando"))
					{
						b = b + 1;

					}

				}


				//lstProducts->Items->Clear();
				dgvModStansa->Rows->Clear();
				for (int i = 0; i < atentionList->Count; i++){
					dgvModStansa->Rows->Add(gcnew array<String^>{
						"" + modList[i]->name,
							modList[i]->place,
							"" + modList[i]->MaquinasOperativas,
							"" + atentionList[i]-> });
				}*/
	}

	private: System::Void dgvModStansa_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	};
}
