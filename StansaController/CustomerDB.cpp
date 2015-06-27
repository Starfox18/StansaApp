#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//Metodos de la Clase CustomerDB
void CustomerDB::Add(Customer^ c){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO Costumer_DB " +
		" (dni, name, lastName, secondLastName, sex, username, password, codePucp, academicUnit)" +
		" VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8,@p9)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::VarChar);

	p1->Value = c->dni; //String
	p2->Value = c->name; //String
	p3->Value = c->apellido_Paterno; //String
	p4->Value = c->apellido_Materno; //String
	p5->Value = c->sexo; // char
	p6->Value = c->username; //String
	p7->Value = c->password; //String
	p8->Value = c->codigoPUCP; //String
	p9->Value = c->facultad; //String

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void CustomerDB::Update(Customer^ c){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
		conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE Costumer_DB " +
		"SET dni=@p1, name=@p2, lastName=@p3, secondLastName=@p4, sex=@p5, username=@p6 , password=@p7 , codePucp=@p8 , academicUnit=@p9  " +
		" WHERE id=@p10";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::Int);

	p1->Value = c->dni; //String
	p2->Value = c->name; //String
	p3->Value = c->apellido_Paterno; //String
	p4->Value = c->apellido_Materno; //String
	p5->Value = c->sexo; // char
	p6->Value = c->username; //String
	p7->Value = c->password; //String
	p8->Value = c->codigoPUCP; //String
	p9->Value = c->facultad; //String
	p10->Value = c->id; // int

	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(p10);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void CustomerDB::Delete(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM Costumer_DB " +
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
Customer^ CustomerDB::QueryById(int id){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Costumer_DB " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id; // int

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Customer ^c = nullptr;
	if (dr->Read()){
		c = gcnew Customer();
		c->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			c->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			c->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			c->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			c->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			c->sexo = (safe_cast<String ^>(dr["sex"]));
		if (dr["username"] != System::DBNull::Value)
			c->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			c->password = safe_cast<String ^>(dr["password"]);
		if (dr["codePUCP"] != System::DBNull::Value)
			c->codigoPUCP = safe_cast<String ^>(dr["codePUCP"]);
		if (dr["academicUnit"] != System::DBNull::Value)
			c->facultad = safe_cast<String ^>(dr["acaademicUnit"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return c;
}
Customer^ CustomerDB::QueryByDni(String^ dni){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Costumer_DB " +
		"WHERE dni=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = dni; // String

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Customer ^c = nullptr;
	if (dr->Read()){
		c = gcnew Customer();
		c->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			c->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			c->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			c->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			c->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			c->sexo = safe_cast<String ^>(dr["sex"]);
		if (dr["username"] != System::DBNull::Value)
			c->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			c->password = safe_cast<String ^>(dr["password"]);
		if (dr["codigoPUCP"] != System::DBNull::Value)
			c->codigoPUCP = safe_cast<String ^>(dr["codePUCP"]);
		if (dr["facultad"] != System::DBNull::Value)
			c->facultad = safe_cast<String ^>(dr["academicUnit"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return c;
}//hola
Customer^ CustomerDB::QueryByCodigoPUCP(String^ codigoPUCP){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Costumer_DB " +
		"WHERE codePucp=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = codigoPUCP; // String

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Customer ^c = nullptr;
	if (dr->Read()){
		c = gcnew Customer();
		c->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			c->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			c->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			c->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			c->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			c->sexo = safe_cast<String ^>(dr["sex"]);
		if (dr["username"] != System::DBNull::Value)
			c->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			c->password = safe_cast<String ^>(dr["password"]);
		if (dr["codePUCP"] != System::DBNull::Value)
			c->codigoPUCP = safe_cast<String ^>(dr["codePUCP"]);
		if (dr["academicUnit"] != System::DBNull::Value)
			c->facultad = safe_cast<String ^>(dr["academicUnit"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return c;
}
Customer^ CustomerDB::QueryByUser(String^ user){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Costumer_DB " +
		"WHERE username=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = user; // String

	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Customer ^c = nullptr;
	if (dr->Read()){
		c = gcnew Customer();
		c->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			c->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			c->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			c->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			c->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			c->sexo = safe_cast<String ^>(dr["sex"]);
		if (dr["username"] != System::DBNull::Value)
			c->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			c->password = safe_cast<String ^>(dr["password"]);
		if (dr["codePUCP"] != System::DBNull::Value)
			c->codigoPUCP = safe_cast<String ^>(dr["codePUCP"]);
		if (dr["academicUnit"] != System::DBNull::Value)
			c->facultad = safe_cast<String ^>(dr["academicUnit"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return c;
}

List<Customer^>^ CustomerDB::QueryAll(){
	//Paso 1: Se abre la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237g4;User ID=inf237g4;Password=wXJ7FpUHDnYKjf89;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM Costumer_DB ";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Customer^>^ customerList = gcnew List<Customer^>();
	while (dr->Read()){
		Customer^c = gcnew Customer();
		c->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			c->dni = safe_cast<String^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			c->name = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			c->apellido_Paterno = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			c->apellido_Materno = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["sex"] != System::DBNull::Value)
			c->sexo = safe_cast<String ^>(dr["sex"]);
		if (dr["username"] != System::DBNull::Value)
			c->username = safe_cast<String ^>(dr["username"]);
		if (dr["password"] != System::DBNull::Value)
			c->password = safe_cast<String ^>(dr["password"]);
		if (dr["codePUCP"] != System::DBNull::Value)
			c->codigoPUCP = safe_cast<String ^>(dr["codePUCP"]);
		if (dr["academicUnit"] != System::DBNull::Value)
			c->facultad = safe_cast<String ^>(dr["academicUnit"]);
		customerList->Add(c);	
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return customerList;
}
