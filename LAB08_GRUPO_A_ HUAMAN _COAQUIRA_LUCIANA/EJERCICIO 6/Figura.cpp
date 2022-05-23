#include "Figura.h"
#include <iostream>

using namespace std;
Figura::Figura(string _color,int _ubi,string _figura) {
	color = _color;
	ubi[2] = _ubi;
	figura = _figura;
}

Figura::~Figura(){}

void Figura::obtenerColor(){
	cout<<"\nCOLOR : "<<color<<endl;
}
void Figura::cambiarColor(){
	cout<<"INDICAR EL COLOR QUE DESEA CAMBIAR: ";
	cin>>color;
}
void Figura::moverCoordenadas(){
	char cor;
	int _x,_y;
	cout<<"-DESEA MOVER LA POSICION DE LA FIGURA-"<<endl;
	cout<<"\nIndicar la posicion en la recta X"<<endl;
	cin>>_x;
	ubi[0] = ubi[0] + _x;
	cout<<"\nIndicar la posicion en la recta Y"<<endl;
	cin>>_y;
	ubi[1] = ubi[1] + _y;
	
}
void Figura::area(){}
void Figura::imprimir(){
	cout<<"FORMA ES: "<<figura<<endl;
	cout<<"COLOR ES: "<<color<<endl;
	cout<<"COORDENADAS DE POSICION SON: ("<<ubi[0]<<","<<ubi[1]<<")"<<endl;
}
