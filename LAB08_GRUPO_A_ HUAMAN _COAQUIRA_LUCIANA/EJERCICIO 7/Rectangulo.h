#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>

using namespace std;
#include "Figura.h"

class Rectangulo : public Figura
{
protected:
	float L_menor, L_mayor;
public:
	Rectangulo(string,int,string,float,float);
	~Rectangulo();
	void imprimir();
	void area();
	void perimetro();
	void cambioTamanio();
	
};
#endif

