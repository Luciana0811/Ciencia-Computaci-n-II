#include <iostream>
#include <cstdlib>


#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
	Lista<int> lista_1;
	Lista<int> lista_2;
	int elemento;
	int posicion;
	int op;
	int dimension;

	
	cout << "INDICAR EL TAMANIO DE LA LISTA: " << endl;
	cin >> dimension;
	
	lista_1.elementos_random(dimension);
	
	cout << "LISTA INICIAL: " << endl;
	lista_1.imprimir();
	while(true){
		cout<<"MENU: \n 1.-AGREGAR ELEMENTO \n 2.-SALIR"<<endl;
		cin>>op;
		if(op==1){
			cout << "AGREGAR ELEMENTO QUE SERA INSERTADO ORDENADAMENTE: " << endl;
			cin >> elemento;
			cout<<"INDICAR LA POSICION EN LA QUE DESEA COLOCAR EL ELEMENTO" <<endl;
			cin >> posicion;
			lista_1.insertar(elemento);
			lista_1.imprimir();
		}
		else{
			break;
		}
	}

	return 0;
	
}
