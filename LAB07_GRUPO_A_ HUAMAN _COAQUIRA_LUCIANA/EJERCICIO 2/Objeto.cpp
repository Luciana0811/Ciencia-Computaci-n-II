#include "Objeto.h"
#include <iostream>

using namespace std;
Objeto::Objeto(string _rgb, string _material, string _objeto) : Color ( _rgb), Material(_material){ //constructor
	objeto = _objeto;
}

Objeto::~Objeto(){}//destructor

void Objeto::newObjeto(){
	cout<<"EL OBJETO ES: "<<objeto<<endl;
	cout<<"EL COLOR ES: ";
	printColor();
	cout<<" \nEL MATERIAL ES:";
	printMaterial();
}

