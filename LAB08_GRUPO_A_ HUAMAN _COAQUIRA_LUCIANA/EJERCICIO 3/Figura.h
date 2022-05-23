#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>

using namespace std;
class Figura
{
private:
	string color;
	int ubi [2] = {0,0};
	string figura;
public:
	Figura(string,int,string);
	~Figura();
	virtual void imprimir();
	void obtenerColor();
	void cambiarColor();
	void moverCoordenadas();
};


#endif

