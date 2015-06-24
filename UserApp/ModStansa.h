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
	private: System::Windows::Forms::DataGridView^  dgvModStansa;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Place;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OperatingMachines;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Waiting;

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
			this->dgvModStansa = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Place = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OperatingMachines = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Waiting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModStansa))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvModStansa
			// 
			this->dgvModStansa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvModStansa->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Name, this->Place,
					this->OperatingMachines, this->Waiting
			});
			this->dgvModStansa->Location = System::Drawing::Point(12, 12);
			this->dgvModStansa->Name = L"dgvModStansa";
			this->dgvModStansa->Size = System::Drawing::Size(443, 351);
			this->dgvModStansa->TabIndex = 2;
			this->dgvModStansa->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModStansa::dgvModStansa_CellContentClick);
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nombre";
			this->Name->Name = L"Name";
			// 
			// Place
			// 
			this->Place->HeaderText = L"Ubicación";
			this->Place->Name = L"Place";
			// 
			// OperatingMachines
			// 
			this->OperatingMachines->HeaderText = L"Maquinas Operativas";
			this->OperatingMachines->Name = L"OperatingMachines";
			// 
			// Waiting
			// 
			this->Waiting->HeaderText = L"Personas en Espera";
			this->Waiting->Name = L"Waiting";
			// 
			// ModStansa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 377);
			this->Controls->Add(this->dgvModStansa);
			this->Name = L"ModStansa";
			this->Text = L"Información de los Modulos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModStansa))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void RefreshDGVModStansa(){
/*
				String^ a;
				ModuloStansa^ modList = StansaManager::QueryModuloStansaByPlace(a);
				List<Attention^>^ atentionList = StansaManager::QueryAllAttentionByModuloStansa(modList);

				
				//lstProducts->Items->Clear();
				dgvModStansa->Rows->Clear();
				for (int i = 0; i < modList->Count; i++){
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
