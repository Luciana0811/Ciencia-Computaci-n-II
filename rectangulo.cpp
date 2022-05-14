#include "rectangulo.h"
#include "iostream"

//CONSTRUCTOR
Rectangulo1::Rectangulo1(float _altura , float _base) {
	altura=_altura;
	base=_base;
}

Rectangulo1::~Rectangulo1() {
}

void Rectangulo1::area(){
	float area;
	area=base*altura;
	cout<<"EL AREA DEL TRIANGULO ES "<< area <<endl;
}

void Rectangulo1::perimetro(){
	float perimetro;
	perimetro=(2*base)+(2*altura);
	cout<<"EL AREA DEL TRIANGULO ES "<<perimetro<<endl;
}
