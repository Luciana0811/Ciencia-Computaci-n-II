#ifndef GANSO_H
#define GANSO_H

#include "Ave.h"
class Ganso: public Ave{
public:
	Ganso();
	~Ganso();
	void gansoDatos();/*Datos predeterminados*/
	void volar();
	void nadar();
	void graznar();
private:
};


#endif

