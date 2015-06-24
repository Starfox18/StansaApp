//StaffDB
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;

namespace StansaController {
	public ref class StaffDB
	{
	public:
		List<Staff^> ^ listStaff;
	public:
		 void Add(Staff ^);
		 void Update(Staff^);
		 void Delete(int id);
		 Staff^ QueryById(int id);
		 Staff^ QueryByDni(String^ dni);
		 List<Staff^>^ QueryAll();
	}; //Fin Clase StaffDB
}