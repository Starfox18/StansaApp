#include "stdafx.h"
#include "StansaController.h"

using namespace StansaController;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

//metodos de clase globlales para Customer
void StansaManager::AddCustomer(Customer^ c){
	customerDB->Add(c);
}
void StansaManager::UpdateCustomer(Customer^ c){ 
	customerDB->Update(c); 
}
void StansaManager::DeleteCustomer(int id){ 
	customerDB->Delete(id); 
}
Customer^ StansaManager::QueryCustomerById(int id){
	return customerDB->QueryById(id);
}
Customer^ StansaManager::QueryCustomerByDni(String^ dni){
	return customerDB->QueryByDni(dni);
}
Customer^ StansaManager::QueryCustomerByCodigoPUCP(String^ codigoPUCP){
	return customerDB->QueryByCodigoPUCP(codigoPUCP);
}
Customer^ StansaManager::QueryCustomerByUser(String^ user){
	return customerDB->QueryByUser(user);
}
List<Customer^>^ StansaManager::QueryAllCustomer(){
	return customerDB->QueryAll();
}

//metodos de clase globlales para Staff
void StansaManager::AddStaff(Staff^ s, int idModuloStansa){
	staffDB->Add(s, idModuloStansa);
}
void StansaManager::UpdateStaff(Staff^ s, int idModuloStansa){
	staffDB->Update(s, idModuloStansa);
}
void StansaManager::DeleteStaff(int id){
	staffDB->Delete(id);
}
Staff^ StansaManager::QueryStaffById(int id){ 
	return staffDB->QueryById(id);
}
Staff^ StansaManager::QueryStaffByDni(String^ dni){
	return staffDB->QueryByDni(dni);
}
List<Staff^>^ StansaManager::QueryAllStaff(){
	return staffDB->QueryAll();
}
List<Staff^>^ StansaManager::QueryStaffByIdModStansa(int idmod){
	return staffDB->QueryByIdModStansa(idmod);
};


//metodos de clase globlales para Product
void StansaManager::AddProduct(Product^ p){
	productDB->Add(p);
}
void StansaManager::UpdateProduct(Product^ p){
	productDB->Update(p);
}
void StansaManager::DeleteProduct(int id){
	productDB->Delete(id);
}
Product^ StansaManager::QueryProductById(int id){
	return productDB->QueryById(id);
}
List<Product^>^ StansaManager::QueryAllProduct(){
	return productDB->QueryAll();
}

List <Product^> ^ StansaManager::QueryProductsLikeName(String ^name){
	return productDB->QueryLikeName(name);
}
//metodos de clase globales para sales
void StansaManager::RegisterSaveSale(Sale ^ sale){
	saleDB->SaveSale(sale);
}
void StansaManager::RegisterSaleDetail(int idSale, Saledetail^ saleDetail)
{
	saleDB->SaleDetail(idSale, saleDetail);
}
List<Sale^>^ StansaManager::QuerySaleByIdcustomer(Customer^ y){
	return saleDB->QueryAllByCustomer(y);
}

//metodos de clase globlales para ModuloStansa
void StansaManager::AddModuloStansa(ModuloStansa^ m){
	moduloStansaDB->Add(m);
}
void StansaManager::UpdateModuloStansa(ModuloStansa^ m){
	moduloStansaDB->Update(m);
}
void StansaManager::DeleteModuloStansa(int id){
	moduloStansaDB->Delete(id);
}
ModuloStansa^ StansaManager::QueryModuloStansaById(int id){
	return moduloStansaDB->QueryById(id);
}
ModuloStansa^ StansaManager::QueryModuloStansaLikePlace(String^ place){
	return moduloStansaDB->QueryLikePlace(place);
}
List<ModuloStansa^>^ StansaManager::QueryAllModuloStansa(){
	return moduloStansaDB->QueryAll();
}

//metodos de clase globlales para Attention
void StansaManager::AddAttention(Attention^ a){
	attentionDB->Add(a);
}
void StansaManager::UpdateAttention(Attention^ a){
	attentionDB->Update(a);
}
void StansaManager::DeleteAttention(int id){
	attentionDB->Delete(id);
}
Attention^ StansaManager::QueryAttentionById(int id){ 
	return attentionDB->QueryById(id);
}
List<Attention^>^ StansaManager::QueryAllAttention(){ 
	return attentionDB->QueryAll();
}
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansa(ModuloStansa^ modulo){
	return attentionDB->QueryAllByModuloStansa(modulo);
}
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaAndCustomer(ModuloStansa^ modulo, Customer^ customer){
	return attentionDB->QueryAllByModuloStansaAndCustomer(modulo, customer);
}
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaAndStaff(ModuloStansa^ modulo, Staff^ staff){
	return attentionDB->QueryAllByModuloStansaAndStaff(modulo, staff);
}
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaAndFecha(ModuloStansa^ modulo, String^ fecha){ 
	return attentionDB->QueryAllByModuloStansaAndFecha(modulo, fecha);
}
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaFechaAndCustomer(ModuloStansa^ modulo, String^ fecha, Customer^ customer){
	return attentionDB->QueryAllByModuloStansaFechaAndCustomer(modulo, fecha, customer);
}
List<Attention^>^ StansaManager::QueryAllAttentionByModuloStansaFechaAndStaff(ModuloStansa^ modulo, String^ fecha, Staff^ staff){
	return attentionDB->QueryAllByModuloStansaFechaAndStaff(modulo, fecha, staff);
}


