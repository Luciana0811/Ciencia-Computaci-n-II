#ifndef OBJETO_H
#define OBJETO_H
#include "Color.h"
#include "Material.h"
#include <iostream>
using namespace std;

class Objeto : public Color, public Material
{
private:
	string objeto;
public:
	Objeto(string, string, string);
	~Objeto();
	void newObjeto();
};

#endif

