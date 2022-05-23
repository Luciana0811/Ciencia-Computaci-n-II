#include "Pato.h"

Pato::Pato() {}
Pato::~Pato() {}

void Pato::patoDatos(){
	nombreCientifico="AIX GALERICULATA";
	habitat="ESTANQUES ,RIOS , LAGOS , ARROYOS, HUMEDALES ,ETC ";
	zonasDondeSeEncuentra="ASIA ORIENTAL Y CHINA";
}

void Pato::nadar(){
	cout<<"LOS PATOS NADAN"<<endl;
}
void Pato::parpar(){
	cout<<"LOS PATOS PARDEAN"<<endl;
}

void Pato::volar(){
	cout<<"LOS PATOS NO PUEDEN VOLAR"<<endl;
}
