#ifndef FECHA_H
#define FECHA_H

#include <iostream>
using namespace std;

class usuario {
	//ATRIBUTOS
	private: 
		string nombre,apellido;
		int edad,mes_n ,dia_n,anio_n,mes_a ,dia_a,anio_a;
	public:

		usuario(string,string,int,int,int,int,int,int,int); //CONSTRUCTOR
		~usuario(); // DESTRUCTOR
		void edad2();
		void imprimir();
};

#endif
