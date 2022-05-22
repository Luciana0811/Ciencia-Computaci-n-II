#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
class Alumno: public Persona{
	public:
		Alumno();
		~Alumno();
		void asignarEdad(int x);
		void asignarNombre(string y);
		void mostrarEdad();
		void mostrarNombre();
};

#endif
