#ifndef ELIPSE_H
#define ELIPSE_H
#include <iostream>

using namespace std;
#include "Figura.h"

class Elipse: public Figura
{
protected:
	int radioMayor,radioMenor;
	float pi=3.1416;
public:
	Elipse(string,int,string,int,int);
	~Elipse();
	void imprimir();
	void area();
	
};

#endif

