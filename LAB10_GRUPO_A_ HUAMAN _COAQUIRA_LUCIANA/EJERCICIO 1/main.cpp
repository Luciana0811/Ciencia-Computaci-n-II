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
	
	int dimension;
	int posicion;
	
	cout << "INDICAR EL TAMANIO DE LA LISTA: " << endl;
	cin >> dimension;
	
	lista_1.elementos_random(dimension);
	
	cout << "LISTA INICIAL: " << endl;
	lista_1.imprimir();
	
	cout << "AGREGAR ELEMENTO EN LA ULTIMA PARTE: " << endl;
	cin >> elemento;
	lista_1.agregar_al_final(elemento);
	lista_1.imprimir();
	
	return 0;
	
}
