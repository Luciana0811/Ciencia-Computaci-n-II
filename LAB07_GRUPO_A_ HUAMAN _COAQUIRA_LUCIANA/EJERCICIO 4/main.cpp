#include<iostream>
#include "Disco.h"
using namespace std;

int main() {
	Disco thing1;
	thing1.def_tipo_disco("BLUE RAY");
	thing1.tipoContenidoMultimedia("MUSIC AND VIDEO");
	thing1.tituloDelContenido("SHARK MOVIE TIME");
	thing1.mostrar();
	return 0;
}
