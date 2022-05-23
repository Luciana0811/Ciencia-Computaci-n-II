#include "base.h"
#include "factorial.h"
#include <iostream>

using namespace std;

int main(){
	int numero;
	cout<<"INDICAR EL NUMERO FACTORIAL: "<<endl;
	cin>>numero;
	factorial num = factorial(numero);
	num.dev_factorial();
	return 0;
}
