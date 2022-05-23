#include "ProductoBancario.h"
#include <iostream>
using namespace std;

ProductoBancario::ProductoBancario(){}//constructor
ProductoBancario::~ProductoBancario(){}//destructor

void ProductoBancario::imprimir(){
	
	cout<<"NOMBRE DE CLIENTE ES:"<<usuario<<endl;
	cout<<"SALDO TOTAL ES:"<<saldo<<endl;
	cout<<"SU PRODUCTO ES:"<<numProductos<<endl;
}
