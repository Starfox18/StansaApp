#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase StaffDB
void StaffDB::Add(Staff^ s){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO StaffDB" +
		" (dni, name, apellido_Paterno, apellido_Materno, sexo, username, password, hora_entrada, hora_salida, puesto)" +
		" VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8,@p9,@p10)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::VarChar);

	p1->Value = s->dni; //String
	p2->Value = s->name; //String
	p3->Value = s->apellido_Paterno; //String
	p4->Value = s->apellido_Materno; //String
	p5->Value = s->sexo; // char
	p6->Value = s->username; //String
	p7->Value = s->password; //String
	p8->Value = s->hora_entrada; //DateTime
	p9->Value = s->hora_salida; //DateTime
	p10->Value = s->puesto; //String

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(10);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void StaffDB::Update(Staff^ s){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE CustomerDB " +
		"SET dni=@p1, name=@p2, apellido_Paterno=@p3, apellido_Materno=@p4, sexo=@p5, username=@p6 , password=@p7 , hora_entrada=@p8 , hora_salida=@p9, puesto=@p10  " +
		" WHERE id=@p11";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::DateTime);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p11 = gcnew SqlParameter("@p11",
		System::Data::SqlDbType::Int);

	p1->Value = s->dni; //String
	p2->Value = s->name; //String
	p3->Value = s->apellido_Paterno; //String
	p4->Value = s->apellido_Materno; //String
	p5->Value = s->sexo; // char
	p6->Value = s->username; //String
	p7->Value = s->password; //String
	p8->Value = s->hora_entrada; //DateTime
	p9->Value = s->hora_salida; //DateTime
	p10->Value = s->puesto; //String
	p11->Value = s->id; //int

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(10);
	comm->Parameters->Add(11);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void StaffDB::Delete(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM StaffDB " +
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
Staff^ StaffDB::QueryById(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM StaffDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id; // int

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^s = nullptr;
	if (dr->Read()){
		s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["apellido_Paterno"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["apellido_Paterno"]);
		if (dr["apellido_Materno"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["apellido_Materno"]);
		if (dr["sexo"] != System::DBNull::Value)
			s->sexo = safe_cast<char>(dr["sexo"]);
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["hora_entrada"] != System::DBNull::Value)
			s->hora_entrada = safe_cast<DateTime ^>(dr["hora_entrada"]);
		if (dr["hora_salida"] != System::DBNull::Value)
			s->hora_salida = safe_cast<DateTime ^>(dr["hora_salida"]);
		if (dr["puesto"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["puesto"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
Staff^ StaffDB::QueryByDni(String^ dni){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM StaffDB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = dni; // String

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Staff ^s = nullptr;
	if (dr->Read()){
		s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["apellido_Paterno"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["apellido_Paterno"]);
		if (dr["apellido_Materno"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["apellido_Materno"]);
		if (dr["sexo"] != System::DBNull::Value)
			s->sexo = safe_cast<char>(dr["sexo"]);
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["hora_entrada"] != System::DBNull::Value)
			s->hora_entrada = safe_cast<DateTime ^>(dr["hora_entrada"]);
		if (dr["hora_salida"] != System::DBNull::Value)
			s->hora_salida = safe_cast<DateTime ^>(dr["hora_salida"]);
		if (dr["puesto"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["puesto"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
List<Staff^>^ StaffDB::QueryAll(){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM StaffDB";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados

	List<Staff^>^ staffList = gcnew List<Staff^>();
	while (dr->Read()){
		Staff^ s = gcnew Staff();
		s->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			s->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			s->name = safe_cast<String ^>(dr["name"]);
		if (dr["apellido_Paterno"] != System::DBNull::Value)
			s->apellido_Paterno = safe_cast<String ^>(dr["apellido_Paterno"]);
		if (dr["apellido_Materno"] != System::DBNull::Value)
			s->apellido_Materno = safe_cast<String ^>(dr["apellido_Materno"]);
		if (dr["sexo"] != System::DBNull::Value)
			s->sexo = safe_cast<char>(dr["sexo"]);
		if (dr["username"] != System::DBNull::Value)
			s->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			s->password = safe_cast<String ^>(dr["password"]);
		if (dr["hora_entrada"] != System::DBNull::Value)
			s->hora_entrada = safe_cast<DateTime ^>(dr["hora_entrada"]);
		if (dr["hora_salida"] != System::DBNull::Value)
			s->hora_salida = safe_cast<DateTime ^>(dr["hora_salida"]);
		if (dr["puesto"] != System::DBNull::Value)
			s->puesto = safe_cast<String ^>(dr["puesto"]);
		staffList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return staffList;
}
