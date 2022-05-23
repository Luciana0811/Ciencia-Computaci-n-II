#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H
#include "Cuenta.h"
#include <iostream>
using namespace std;

class CuentaJoven : private Cuenta
{
	private:
	public:
		CuentaJoven();
		void imprimir();
		~CuentaJoven();
};

#endif
