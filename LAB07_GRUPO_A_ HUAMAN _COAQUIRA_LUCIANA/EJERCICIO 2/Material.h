#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>

using namespace std;

class Material
{
private:
	string material;
public:
	Material(string);
	~Material();
	void printMaterial();
};

#endif

