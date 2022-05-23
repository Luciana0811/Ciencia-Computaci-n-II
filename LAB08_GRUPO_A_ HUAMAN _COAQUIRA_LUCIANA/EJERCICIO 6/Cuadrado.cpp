#include "Cuadrado.h"

Cuadrado::Cuadrado(string _color,int _coord,string _forma, float _L_menor, float _L_mayor) : Rectangulo(_color,_coord,_forma,_L_menor,_L_mayor){}

Cuadrado::~Cuadrado(){}

void Cuadrado::area(){
	cout<<"\nAREA ES: "<<L_menor*L_menor<<endl;   
}
void Cuadrado::perimetro(){
	cout<<"PERIMETRO ES: "<< 4 * L_menor<<endl;
}

void Cuadrado::imprimir(){
	Rectangulo::imprimir();
	cout<<"\nAREA ES: "<<L_menor*L_menor<<endl;
	cout<<"PERIMETRO ES: "<< 4 * L_menor<<endl;
}

