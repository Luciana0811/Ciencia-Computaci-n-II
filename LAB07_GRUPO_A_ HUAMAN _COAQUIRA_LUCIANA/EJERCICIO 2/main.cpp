#include <iostream>
#include "Objeto.h"
#include "Material.h"
#include "Color.h"

using namespace std;

int main(){
	Objeto thing = Objeto("VERDE", "PLASTICO", "CUERDA");
	thing.newObjeto();
	return 0;
}
