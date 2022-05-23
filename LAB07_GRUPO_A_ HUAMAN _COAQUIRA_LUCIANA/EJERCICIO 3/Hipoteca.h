#ifndef HIPOTECA_H
#define HIPOTECA_H
#include "Prestamo.h"
#include <iostream>
using namespace std;

class Hipoteca : public Prestamo
{
	private:
	public:
		Hipoteca();
		void imprimir();
		~Hipoteca();
};
#endif
