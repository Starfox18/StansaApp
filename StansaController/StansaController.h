using namespace System;
using namespace System::Collections::Generic;
using namespace FotoLibrary;

namespace StansaController {

	public ref class CustomerDB //Base de Datos para Todos los Customers
	{
		public:
			List<Customer^> ^ listCustomer;
		public:
			void Add(Customer^ c);
			void Update(Customer^ c);
			void Delete(int id);
			Customer^ QueryById(int id);
			Customer^ QueryByDni(String^ dni);
			Customer^ QueryByCodigoPUCP(String^ codigoPUCP);
			Customer^ QueryByUser(String^ user);
			List<Customer^>^ QueryAll();
	}; //Fin Clase CustomerDB

	public ref class StaffDB //Base de Datos para Todos los Staffs	
	{
		public:
			List<Staff^> ^ listStaff;
		public:
			void Add(Staff^ s, int idModuloStansa); //Necesito saber a que Stansa pertenece
			void Update(Staff^ s, int idModuloStansa); //Necesito saber a que Stansa pertenece
			void Delete(int id);
			Staff^ QueryById(int id);
			Staff^ QueryByDni(String^ dni);
			List<Staff^>^ QueryAll();
	}; //Fin Clase StaffDB

	public ref class ProductDB //Base de Datos para Todos los Products
	{
		public:
			List<Product^> ^ listProduct;
		public:
			void Add(Product^ p);
			void Update(Product^ p);
			void Delete(int id);
			Product^ QueryById(int id);
			List<Product^>^ QueryAll();
			List<Product^>^ QueryLikeName(String^);
	}; //Fin Clase ProductDB

	public ref class ModuloStansaDB
	{
		public:
			List<ModuloStansa^> ^ listModuloStansa;
		public:
			void Add(ModuloStansa^ m);
			void Update(ModuloStansa^ m);
			void Delete(int id);
			ModuloStansa^ QueryById(int id);
			ModuloStansa^ QueryLikePlace(String^ place);
			List<ModuloStansa^>^ QueryAll();
	}; //Fin Clase ModuloStansaDB

	public ref class AttentionDB
	{
		public:
			List<Attention^> ^ listAttention;
		public:
			void Add(Attention^ a);
			void Update(Attention^ a);
			void Delete(int id);
			Attention^ QueryById(int id);
			List<Attention^>^ QueryAll();
			List<Attention^>^ QueryAllByModuloStansa(ModuloStansa^ modulo);
			List<Attention^>^ QueryAllByModuloStansaAndCustomer(ModuloStansa^ modulo, Customer^ customer);
			List<Attention^>^ QueryAllByModuloStansaAndStaff(ModuloStansa^ modulo, Staff^ staff);
			List<Attention^>^ QueryAllByModuloStansaAndFecha(ModuloStansa^ modulo, String^ fecha);
			List<Attention^>^ QueryAllByModuloStansaFechaAndCustomer(ModuloStansa^ modulo, String^ fecha, Customer^ customer);
			List<Attention^>^ QueryAllByModuloStansaFechaAndStaff(ModuloStansa^ modulo, String^ fecha, Staff^ staff);
	}; //Fin Clase ModuloStansaDB

	public ref class SaleDB
	{
	public:
		void SaveSale(Sale^ sale);
		void SaleDetail(int idSale, Saledetail^ saledetail);
	}; //Fin Clase SaleDB y sale detail
	


	public ref class StansaManager
	{
		public:
			static CustomerDB^ customerDB = gcnew CustomerDB();
			static StaffDB^ staffDB = gcnew StaffDB();
			static ProductDB^ productDB = gcnew ProductDB();
			static ModuloStansaDB^ moduloStansaDB = gcnew ModuloStansaDB();
			static AttentionDB^ attentionDB = gcnew AttentionDB();
			static SaleDB^ saleDB = gcnew SaleDB();
			
		public:
			//metodos de clase globlales para Customer
			static void AddCustomer(Customer^ c);
			static void UpdateCustomer(Customer^ c);
			static void DeleteCustomer(int id);
			static Customer^ QueryCustomerById(int id);
			static Customer^ QueryCustomerByDni(String^ dni);
			static Customer^ QueryCustomerByCodigoPUCP(String^ codigoPUCP);
			static Customer^ QueryCustomerByUser(String^ user);
			static List<Customer^>^ QueryAllCustomer();
	public:
			//metodos de clase globales para sales
			static void RegisterSaleDetail(int idSale, Saledetail^ saleDetail);
			static void RegisterSaveSale(Sale ^sale);
	public:
			//metodos de clase globlales para Staff
			static void AddStaff(Staff^ s, int idModuloStansa);
			static void UpdateStaff(Staff^ s, int idModuloStansa);
			static void DeleteStaff(int id);
			static Staff^ QueryStaffById(int id);
			static Staff^ QueryStaffByDni(String^ dni);
			static List<Staff^>^ QueryAllStaff();
	public:
			//metodos de clase globlales para Product
			static void AddProduct(Product^ p);
			static void UpdateProduct(Product^ p);
			static void DeleteProduct(int id);
			static Product^ QueryProductById(int id);
			static List<Product^>^ QueryAllProduct();
			static List<Product^> ^ QueryProductsLikeName(String ^name);
	public:
			//metodos de clase globlales para ModuloStansa
			static void AddModuloStansa(ModuloStansa^ m);
			static void UpdateModuloStansa(ModuloStansa^ m);
			static void DeleteModuloStansa(int id);
			static ModuloStansa^ QueryModuloStansaById(int id);
			static ModuloStansa^ QueryModuloStansaLikePlace(String^ place);
			static List<ModuloStansa^>^ QueryAllModuloStansa();
	public:
			//metodos de clase globlales para Attention
			static void AddAttention(Attention^ a);
			static void UpdateAttention(Attention^ a);
			static void DeleteAttention(int id);
			static Attention^ QueryAttentionById(int id);
			static List<Attention^>^ QueryAllAttention();
			static List<Attention^>^ QueryAllAttentionByModuloStansa(ModuloStansa^ modulo);
			static List<Attention^>^ QueryAllAttentionByModuloStansaAndCustomer(ModuloStansa^ modulo, Customer^ customer);
			static List<Attention^>^ QueryAllAttentionByModuloStansaAndStaff(ModuloStansa^ modulo, Staff^ staff);
			static List<Attention^>^ QueryAllAttentionByModuloStansaAndFecha(ModuloStansa^ modulo, String^ fecha);
			static List<Attention^>^ QueryAllAttentionByModuloStansaFechaAndCustomer(ModuloStansa^ modulo, String^ fecha, Customer^ customer);
			static List<Attention^>^ QueryAllAttentionByModuloStansaFechaAndStaff(ModuloStansa^ modulo, String^ fecha, Staff^ staff);
	}; //Fin Clase ModStansaController

}