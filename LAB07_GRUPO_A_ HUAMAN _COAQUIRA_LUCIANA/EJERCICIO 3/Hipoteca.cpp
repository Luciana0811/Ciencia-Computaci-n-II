#include "Hipoteca.h"
#include <iostream>
using namespace std;

Hipoteca::Hipoteca(){}//constructor
Hipoteca::~Hipoteca(){}//destructor

void Hipoteca::imprimir(){
	cout<<"\n---------INFORMACION HIPOTECA---------\n"<<endl;
	ProductoBancario::imprimir();
}
