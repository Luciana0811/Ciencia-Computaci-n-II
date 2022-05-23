#include "Elipse.h"

Elipse::Elipse(string _color,int _coord,string _forma, int _radioMenor, int _radioMayor) : Figura(_color, _coord,_forma)
{
	radioMenor = _radioMenor;
	radioMayor = _radioMayor;
}

Elipse::~Elipse(){}//DESTRUCTOR

void Elipse::area(){
	float area;
	area = pi*(radioMenor*radioMayor);
	cout<<"AREA DE LA ELIPSE ES: "<<area<<endl;
}

void Elipse::imprimir(){
	Figura::imprimir();
	cout<<"AREA DE LA ELIPSE ES: ";
	area();
}
