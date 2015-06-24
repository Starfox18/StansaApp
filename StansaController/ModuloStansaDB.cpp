#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase ModuloStansaDB
void ModuloStansaDB::Add(ModuloStansa^ m){

	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO ModStansaDB " +
		" (name, place, MaquinasOperativas)" +
		" VALUES (@p1,@p2,@p3)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Int);
	

	p1->Value = m->name; //String
	p2->Value = m->place; //String
	p3->Value = m->MaquinasOperativas; //Int
	

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
	
}
void ModuloStansaDB::Update(ModuloStansa^ m){

	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE ModStansaDB " +
		"SET  name=@p1, place=@p2, MaquinaOperativas=@p3 " +
		" WHERE id=@p4";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Int);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	

	p1->Value = m->name; //String
	p2->Value = m->place; //String
	p3->Value = m->MaquinasOperativas; //Int
	p4->Value = m->id; //Int
	

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();

}
void ModuloStansaDB::Delete(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM ModStansaDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);

	p1->Value = id; //int

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();

}
ModuloStansa^ ModuloStansaDB::QueryById(int id){ 
	
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ModStansaDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id; // int

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	ModuloStansa ^ m = nullptr;
	if (dr->Read()){
		m = gcnew ModuloStansa();
		m->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			m->name = safe_cast<String ^>(dr["name"]);
		if (dr["place"] != System::DBNull::Value)
			m->place = safe_cast<String ^>(dr["place"]);
		if (dr["MaquinasOperativas"] != System::DBNull::Value)
			m->MaquinasOperativas = safe_cast<int>(dr["MaquinasOperativas"]);
		
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return m;	
	
}
ModuloStansa^ ModuloStansaDB::QueryByPlace(String^ place){ 
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ModStansaDB " +
		"WHERE place=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = place; // String

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	ModuloStansa ^ m = nullptr;
	if (dr->Read()){
		m = gcnew ModuloStansa();
		m->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			m->name = safe_cast<String ^>(dr["name"]);
		if (dr["place"] != System::DBNull::Value)
			m->place = safe_cast<String ^>(dr["place"]);
		if (dr["MaquinasOperativas"] != System::DBNull::Value)
			m->MaquinasOperativas = safe_cast<int>(dr["MaquinasOperativas"]);

	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return m;
	
 }
List<ModuloStansa^>^ ModuloStansaDB::QueryAll(){

	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ModStansaDB ";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<ModuloStansa^>^ ModStansaList = gcnew List<ModuloStansa^>();
	while (dr->Read()){
		ModuloStansa^m = gcnew ModuloStansa();
		m->id = (int)dr["id"];
		SqlParameter^ p1 = gcnew SqlParameter("@p1",
			System::Data::SqlDbType::VarChar);
		SqlParameter^ p2 = gcnew SqlParameter("@p2",
			System::Data::SqlDbType::VarChar);
		SqlParameter^ p3 = gcnew SqlParameter("@p3",
			System::Data::SqlDbType::Int);


		p1->Value = m->name; //String
		p2->Value = m->place; //String
		p3->Value = m->MaquinasOperativas; //Int
				
		ModStansaList->Add(m);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return ModStansaList;

}