#include "Cuenta.h"
#include "CuentaJoven.h"
#include "Hipoteca.h"
#include "Prestamo.h"
#include "ProductoBancario.h"
#include<iostream>
using namespace std;

int main(){
	CuentaJoven usuario1 = CuentaJoven();
	usuario1.imprimir();
	Hipoteca banco = Hipoteca();
	banco.imprimir();
	return 0;
}
