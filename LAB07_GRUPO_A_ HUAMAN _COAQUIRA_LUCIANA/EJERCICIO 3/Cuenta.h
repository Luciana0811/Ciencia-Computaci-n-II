#ifndef CUENTA_H
#define CUENTA_H
#include "ProductoBancario.h"
#include <iostream>
using namespace std;

class Cuenta : public ProductoBancario
{
	private:
	public:
		Cuenta();
		void imprimir();
		~Cuenta();
};
#endif
