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

	/// <summary>
	/// Resumen de StatusForm
	/// </summary>
	public ref class StatusForm : public System::Windows::Forms::Form
	{
	public:
		StatusForm(void)
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
		~StatusForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  statusDGV;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  waiting;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OperatingMachines;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Staff;
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
			this->statusDGV = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->waiting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OperatingMachines = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Staff = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusDGV))->BeginInit();
			this->SuspendLayout();
			// 
			// statusDGV
			// 
			this->statusDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statusDGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->name, this->waiting,
					this->OperatingMachines, this->Staff
			});
			this->statusDGV->Location = System::Drawing::Point(117, 164);
			this->statusDGV->Name = L"statusDGV";
			this->statusDGV->Size = System::Drawing::Size(444, 150);
			this->statusDGV->TabIndex = 0;
			this->statusDGV->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StatusForm::dataGridView1_CellContentClick);
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			// 
			// waiting
			// 
			this->waiting->HeaderText = L"Personas en Espera";
			this->waiting->Name = L"waiting";
			// 
			// OperatingMachines
			// 
			this->OperatingMachines->HeaderText = L"Maquinas Operativas";
			this->OperatingMachines->Name = L"OperatingMachines";
			// 
			// Staff
			// 
			this->Staff->HeaderText = L"Personas Trabajando";
			this->Staff->Name = L"Staff";
			// 
			// StatusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 448);
			this->Controls->Add(this->statusDGV);
			this->Name = L"StatusForm";
			this->Text = L"StatusForm";
			this->Load += gcnew System::EventHandler(this, &StatusForm::StatusForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusDGV))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public: int GetQuantityOfWaitingPeople(int idModStansa){
				
				int count = 0;
				ModuloStansa^ modulo = StansaManager::QueryModuloStansaById(idModStansa);
				List<Attention^>^stansaList = StansaManager::QueryAllAttentionByModuloStansa(modulo);
				for (int i = 0; i < stansaList->Count; i++)
				{
					if (!String::Compare("esperando", stansaList[i]->estado))
					{
						count++;
					}
				}

				return count;
				}

	public: void RefreshDGVStansas(){
				
				String^ value;
				List<String^>^ listWaitingPeople = gcnew List<String^>();
				

				for (int i = 0; i < 4; i++)
				{
					value = "" + GetQuantityOfWaitingPeople(i + 1);
					listWaitingPeople->Add(value);
				}

				List<ModuloStansa^>^ modStansaList = StansaManager::QueryAllModuloStansa();
				statusDGV->Rows->Clear();
				for (int i = 0; i < modStansaList->Count; i++){
					statusDGV->Rows->Add(gcnew array<String^>{
						modStansaList[i]->name,
						listWaitingPeople[i],
					""+modStansaList[i]->MaquinasOperativas});
				}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	
	
	}
	private: System::Void StatusForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 RefreshDGVStansas();

	}
	};
}
