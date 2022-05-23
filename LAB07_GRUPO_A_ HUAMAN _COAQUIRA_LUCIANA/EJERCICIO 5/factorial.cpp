#include "factorial.h"

factorial::factorial(int _operador) : base(_operador)
{
}

factorial::~factorial()
{
}

void factorial::dev_factorial(){
	int factor=1;
	int base = Operador();
	for (int i=1; i<=base; i++){
		factor = factor * i;
	}
	cout<<"\n---RESULTADO---"<<endl;
	cout<<"FACTORIAL ES: "<<factor<<endl;
}
