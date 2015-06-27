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
	using namespace Threading;

	/// <summary>
	/// Resumen de HistorialForm
	/// </summary>
	public ref class HistorialForm : public System::Windows::Forms::Form
	{
	private:
		Thread ^threadRefresh;
	public:
		Customer^ customer;

	public:
		HistorialForm(Customer^ kiki)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			customer = kiki;
		}
		void Createthread(){
			threadRefresh = gcnew Thread(gcnew ThreadStart(this, &HistorialForm::MyRun));
			threadRefresh->Start();
		}
		delegate void delegateRefreshHistorial();
		void MyRun(){
			int time = 0;
			while (true) {
				Invoke(gcnew delegateRefreshHistorial(this, &HistorialForm::RefreshDGVHistorial));
				Random^ rnd = gcnew Random();
				time = rnd->Next() % 10 + 1;
				Thread::Sleep(time * 1000);
				if (!this->Visible)
					return;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~HistorialForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvhistorial;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cajero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ModuloStansa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
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
			this->dgvhistorial = (gcnew System::Windows::Forms::DataGridView());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cajero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ModuloStansa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvhistorial))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvhistorial
			// 
			this->dgvhistorial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvhistorial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Date, this->Cajero,
					this->ModuloStansa, this->Total
			});
			this->dgvhistorial->Location = System::Drawing::Point(24, 23);
			this->dgvhistorial->Name = L"dgvhistorial";
			this->dgvhistorial->Size = System::Drawing::Size(444, 150);
			this->dgvhistorial->TabIndex = 0;
			this->dgvhistorial->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &HistorialForm::dataGridView1_CellContentClick);
			// 
			// Date
			// 
			this->Date->HeaderText = L"Fecha";
			this->Date->Name = L"Date";
			// 
			// Cajero
			// 
			this->Cajero->HeaderText = L"Cajero";
			this->Cajero->Name = L"Cajero";
			// 
			// ModuloStansa
			// 
			this->ModuloStansa->HeaderText = L"Modulo Stansa";
			this->ModuloStansa->Name = L"ModuloStansa";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			// 
			// HistorialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 430);
			this->Controls->Add(this->dgvhistorial);
			this->Name = L"HistorialForm";
			this->Text = L"HistorialForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvhistorial))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void RefreshDGVHistorial(){
				
				
				
				
				List<Sale^>^ historialList = StansaManager::QuerySaleByIdcustomer(customer);
			//	int i;
				//String^ idstaff = historialList[i]->staff->name
				Attention^ attentionTable = gcnew Attention();
				Staff^ staffTable = gcnew Staff();
				FotoLibrary::ModuloStansa^ stansaTable = gcnew FotoLibrary::ModuloStansa();
				Sale^ saleTable = gcnew Sale();

				dgvhistorial->Rows->Clear();
				for (int i = 0; i < historialList->Count; i++){
					attentionTable = StansaManager::QueryAttentionById(historialList[i]->attention->id);
					staffTable = StansaManager::QueryStaffById(attentionTable->staff->id); 
					stansaTable = StansaManager::QueryModuloStansaById(attentionTable->moduloStansa->id);
					dgvhistorial->Rows->Add(gcnew array<String^>{
						(attentionTable->fecha->Date ,
							staffTable->name,
							stansaTable->name,
							"" + historialList[i]->total)});
				}
	}
			//holi

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	};
}
