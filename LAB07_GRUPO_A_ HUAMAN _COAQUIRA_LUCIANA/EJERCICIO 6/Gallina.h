#ifndef GALLINA_H
#define GALLINA_H
#include "Ave.h"
class Gallina: public Ave{
public:
	Gallina();
	~Gallina();
	void GallinaDomesticaDatos();/*Datos predeterminados*/
	void volar();
	void nadar();
	void cacarear();
private:
};
#endif

