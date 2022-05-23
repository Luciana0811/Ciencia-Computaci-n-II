#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "ProductoBancario.h"
#include <iostream>
using namespace std;


class Prestamo : protected ProductoBancario
{
	private:
	public:
		Prestamo();
		void imprimir();
		~Prestamo();
};

#endif
