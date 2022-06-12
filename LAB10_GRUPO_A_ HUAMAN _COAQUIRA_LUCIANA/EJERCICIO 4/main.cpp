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
	int pos;
	int op;
	int dimension;

	
	cout << "INDICAR EL TAMANIO DE LA LISTA: " << endl;
	cin >> dimension;
	
	lista_1.elementos_random(dimension);
	cout<<"LISTA IMPRIMIDA"<<endl;
	lista_1.imprimir();
	cout << "INDICAR LA POSICION DEL ELEMENTO QUE DESEA ELIMINAR: " << endl;
	cin>>op;
	lista_1.eliminar_nodo(op);
	lista_1.imprimir();

	return 0;
	
}
