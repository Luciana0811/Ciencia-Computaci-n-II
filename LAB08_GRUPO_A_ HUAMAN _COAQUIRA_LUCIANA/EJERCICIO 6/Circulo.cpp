#include "Circulo.h"

Circulo::Circulo(string _color,int _coord,string _forma, int _radioMenor, int _radioMayor) : Elipse(_color, _coord,_forma,_radioMenor,_radioMayor){}

Circulo::~Circulo(){}//destructor

void Circulo::area(){
	float area = pi * (radioMenor*radioMenor);
	cout<<"AREA DE LA CIRCUNFERENCIA : "<<area<<endl;
}

void Circulo::imprimir(){
	Figura::imprimir();
	Circulo::area();
}

