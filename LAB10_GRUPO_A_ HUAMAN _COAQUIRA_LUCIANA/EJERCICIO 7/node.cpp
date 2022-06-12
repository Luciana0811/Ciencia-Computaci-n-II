#include "node.h"
#include "node.h"

// Constructor por defecto
template<typename T>

Nodo<T>::Nodo()
{
	dato = NULL;
	siguiente = NULL;
}

// Constructor por parámetro
template<typename T>
Nodo<T>::Nodo(T dato_)
{
	dato = dato_;
	siguiente = NULL;
}

// Eliminar todos los Nodos
template<typename T>
void Nodo<T>::eliminar_todo()
{
	if (siguiente)
		siguiente->eliminar_todo();
	delete this;
}

// Imprimir un Nodo
template<typename T>
void Nodo<T>::imprimir()
{
	//cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
	cout << dato << "-> ";
}

template<typename T>
Nodo<T>::~Nodo() {}
