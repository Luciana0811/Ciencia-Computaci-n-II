#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>

class Nodo
{
public:
	Nodo();
	Nodo(T);
	~Nodo();
	
	Nodo *siguiente;
	T dato;
	
	void eliminar_todo();
	void imprimir();
};

#endif // NODE_H
