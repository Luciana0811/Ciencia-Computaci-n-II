#ifndef DISCO_H
#define DISCO_H
#include "multimedia.h"

class Disco :public multimedia{
public:
	string tipoDisco;
	Disco();
	~Disco();
	void def_tipo_disco(string c);
	void mostrar();

};

#endif

