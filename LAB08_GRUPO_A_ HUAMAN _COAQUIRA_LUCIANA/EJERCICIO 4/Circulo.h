#ifndef CIRCULO_H
#define CIRCULO_H
#include "Elipse.h"
#include <iostream>
using namespace std;

class Circulo : public Elipse
{
private:
public:
	Circulo(string,int,string,int,int);
	~Circulo();
	void area();
	void imprimir();
};

#endif

