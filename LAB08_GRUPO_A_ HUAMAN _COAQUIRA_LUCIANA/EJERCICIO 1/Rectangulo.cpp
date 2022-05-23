#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(string _color,int _coord,string _forma, float _L_menor, float _L_mayor) :Figura(_color,_coord,_forma)
{
	L_menor = _L_menor;
	L_mayor = _L_mayor;
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::imprimir(){
	cout<<"\n-------DATOS DE LA FIGURA-------\n"<<endl;
	Figura::imprimir();
	cout<<"LADO MAYOR ES: "<<L_mayor<<endl;
	cout<<"LADO MENOR ES: "<<L_menor<<endl;
}

void Rectangulo::area(){
	cout<<"AREA ES: "<<L_mayor*L_menor<<endl;   
}
void Rectangulo::perimetro(){
	cout<<"PERIMETRO ES: "<< (2 * L_mayor) + (2 * L_menor)<<endl;
}
void Rectangulo::cambioTamanio(){
	float tam;
	cout<<"INDICAR SI DESEA AUMENTAR O DISMINUIR EL TAMANO (2 O -2): ";
	cin>>tam;
	L_mayor = tam * L_mayor;
	L_menor = tam * L_menor;
}
