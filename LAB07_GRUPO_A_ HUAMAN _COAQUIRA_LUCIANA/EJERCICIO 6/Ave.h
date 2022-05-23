#ifndef AVE_H
#define AVE_H

#include <iostream>
using namespace std;
class Ave {
public:
	string nombreCientifico;
	string habitat;
	string zonasDondeSeEncuentra;
	Ave();
	~Ave();
	void ingresarNombreCientifico(string a);
	void ingresarHabitat(string b);
	void ingresarZonasDondeSeEncuentra(string c);
	void imprimirDatos();
protected:
	
};
#endif

