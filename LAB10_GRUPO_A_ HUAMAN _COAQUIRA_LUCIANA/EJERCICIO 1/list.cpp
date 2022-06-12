#include "list.h"
#include <ctime>

using namespace std;

// Constructor por defecto
template<typename T>
Lista<T>::Lista()
{
	m_num_nodes = 0;
	m_head = NULL;
}



// Insertar al final
template<typename T>
void Lista<T>::agregar_al_final(T dato_)
{
	Nodo<T> *new_nodo = new Nodo<T> (dato_);
	Nodo<T> *temp = m_head;
	
	if (!m_head) {
		m_head = new_nodo;
	} else {
		while (temp->siguiente != NULL) {
			temp = temp->siguiente;
		}
		temp->siguiente = new_nodo;
	}
	m_num_nodes++;
}


// Llenar la Lista aleatoriamente para enteros
template<typename T>
void Lista<T>::elementos_random(int dimension)
{
	srand(time(NULL));
	for (int i = 0; i < dimension; i++) {
		agregar_al_final(rand() % 100);
	}
}



// Imprimir la Lista
template<typename T>
	void Lista<T>::imprimir()
{
	Nodo<T> *temp = m_head;
	if (!m_head) {
		cout << "LISTA VACIA " << endl;
	} else {
		while (temp) {
			temp->imprimir();
			if (!temp->siguiente) cout << "NULL";
			temp = temp->siguiente;
		}
	}
	cout << endl << endl;
}


template<typename T>
	Lista<T>::~Lista() {}

