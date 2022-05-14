#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;
class alumno {
	//ATRIBUTOS
	private: 
		string CUI,nombre,apellido;
		float nota1,nota2,nota3;
	public:
		alumno(string,string,string,float,float,float); //CONSTRUCTOR
		~alumno(); // DESTRUCTOR
		void promedio();
		void imprimir();
};

#endif
