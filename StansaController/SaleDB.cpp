#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

void SaleDB::SaleDetail(int idSale, Saledetail^ saleDetail){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO Sale_Detail_DB " +
		"(idSale, idProduct, quantity, subTotal) VALUES (@p1,@p2,@p3,@p4)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Int);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Float);
	p1->Value = idSale;
	p2->Value = saleDetail->product->id;
	p3->Value = saleDetail->quantity;
	p4->Value = saleDetail->subTotal;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);

	conn->Open();

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();

	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}

void SaleDB::SaveSale(Sale ^sale){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";

	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO Sale_DB " +
		"(id, total, status, idCustomer, idModStansa, idStaff, idAttention) VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7); " +
		"SELECT  SCOPE_IDENTITY()";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Float);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Int);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Int);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Int);

	p1->Value = sale->id;
	p2->Value = sale->total;
	p3->Value = sale->status;
	p4->Value = sale->customer->id;
	p5->Value = sale->modstansa->id;
	p6->Value = sale->staff->id;
	p7->Value = sale->attention->id;

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);

	//Paso 3: Ejecución de la sentencia
	//comm->ExecuteNonQuery();
	conn->Open();
	int newSaleId = Int32::Parse(comm->ExecuteScalar()->ToString());

	if (conn->State == System::Data::ConnectionState::Open) conn->Close();


	for (int i = 0; i < sale->details->Count; i++){
		SaleDetail(newSaleId, sale->details[i]);
	}
	return;
}


