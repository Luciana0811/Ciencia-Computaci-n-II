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


// Insertar al inicio
template<typename T>
void Lista<T>::agregar_al_inicio(T dato_)
{
	Nodo<T> *new_node = new Nodo<T> (dato_);
	Nodo<T> *temp = m_head;
	
	if (!m_head) {
		m_head = new_node;
	} else {
		new_node->siguiente = m_head;
		m_head = new_node;
		
		while (temp) {
			temp = temp->siguiente;
		}
	}
	m_num_nodes++;
}



// Llenar la Lista aleatoriamente para enteros
template<typename T>
void Lista<T>::elementos_random(int dimension)
{
	srand(time(NULL));
	for (int i = 0; i < dimension; i++) {
		agregar_al_inicio(rand() % 100);
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

