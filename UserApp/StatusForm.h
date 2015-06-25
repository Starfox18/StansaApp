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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
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
	protected:

	protected:



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
			this->statusDGV = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->waiting = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusDGV))->BeginInit();
			this->SuspendLayout();
			// 
			// statusDGV
			// 
			this->statusDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statusDGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->name, this->waiting });
			this->statusDGV->Location = System::Drawing::Point(198, 174);
			this->statusDGV->Name = L"statusDGV";
			this->statusDGV->Size = System::Drawing::Size(252, 150);
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
				
				List<int> listWaitingPeople;

				for (int i = 0; i < 4; i++)
				{
					listWaitingPeople[i] = GetQuantityOfWaitingPeople(i);
				}

				List<ModuloStansa^>^ personList = StansaManager::QueryAllModuloStansa();
				statusDGV->Rows->Clear();
				for (int i = 0; i < personList->Count; i++){
					statusDGV->Rows->Add(gcnew array<String^>{
							personList[i]->name ,
							" " + listWaitingPeople[i]});
				}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	
	
	}
	private: System::Void StatusForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 RefreshDGVStansas();

	}
	};
}
