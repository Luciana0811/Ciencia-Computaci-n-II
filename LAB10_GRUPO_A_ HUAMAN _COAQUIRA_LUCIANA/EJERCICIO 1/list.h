#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "node.h"
#include "node.cpp"

using namespace std;

template <class T>

class Lista
{
public:
	Lista();
	~Lista();
	
	void agregar_al_final(T);
	void imprimir();
	void elementos_random(int);

	
private:
	Nodo<T> *m_head;
	int m_num_nodes;
};

#endif // LIST_H
