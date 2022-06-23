#ifndef COLA_H
#define COLA_H

class Cola {
private:
	class Nodo {
	public:
		int info;
		Nodo *sig;
	};
	
	Nodo *raiz;
	Nodo *fondo;
public:
	Cola();
	~Cola();
	void insertar(int x);
	void imprimir();
	int eliminar();
	void buscar(int x);
	bool vacia();
};


#endif

