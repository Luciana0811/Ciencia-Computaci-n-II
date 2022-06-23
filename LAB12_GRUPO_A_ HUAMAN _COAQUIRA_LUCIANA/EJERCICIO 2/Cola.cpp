#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola()
{
	raiz = NULL;
	fondo = NULL;
}

Cola::~Cola()
{
	Nodo *reco = raiz;
	Nodo *bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

void Cola::insertar(int x)
{
	Nodo *nuevo;
	nuevo = new Nodo();
	nuevo->info = x;
	nuevo->sig = NULL;
	if (vacia()) 
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else {
		fondo->sig = nuevo;
		fondo = nuevo;
	}
}

int Cola::eliminar()
{
	if (!vacia())
	{
		int informacion = raiz->info;
		Nodo *bor = raiz;
		if (raiz == fondo)
		{
			raiz = NULL;
			fondo = NULL;
		}
		else 
		{
			raiz = raiz->sig;
		}
		delete bor;
		return informacion;
	}
	else
		return -1;
}

void Cola::buscar(int x){
	Nodo *reco = raiz;
	int cont = 1;
	int cont2 = 0;
	
	while (reco) {
		if (reco->info == x) {
			cout << "El dato se encuentra en la posición: " << cont << endl;
			cont2++;
		}
		reco = reco->sig;
		cont++;
	}
	
	if (cont2 == 0) {
		cout << "No existe el dato " << endl;
	}
	cout << endl << endl;
}

void Cola::imprimir()
{
	Nodo *reco = raiz;
	while (reco != NULL)
	{
		cout << reco->info << " -> ";
		reco = reco->sig;
	}
	cout<<"NULL";
	cout << "\n";
}

bool Cola::vacia()
{
	if (raiz == NULL)
		return true;
	else
		return false;
}

