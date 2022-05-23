#include "CuentaJoven.h"
#include <iostream>
using namespace std;
CuentaJoven::CuentaJoven(){}//constructor
CuentaJoven::~CuentaJoven(){}//destructor

void CuentaJoven::imprimir(){
	cout<<"\n---------INFORMACION DE USUARIO---------\n"<<endl;
	ProductoBancario::imprimir();
}
