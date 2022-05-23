#include "Material.h"
#include <iostream>
using namespace std;
Material::Material(string _material){//constructor
	material = _material;
}

Material::~Material(){}//destructor

void Material::printMaterial(){
	cout<<material;
}
