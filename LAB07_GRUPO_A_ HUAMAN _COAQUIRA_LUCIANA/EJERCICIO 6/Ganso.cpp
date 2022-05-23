#include "Ganso.h"

Ganso::Ganso() {
	
}

Ganso::~Ganso() {
	
}
void Ganso::gansoDatos(){
	nombreCientifico="ANSER BRACHYRHYNCHUS";
	habitat="TUNDRA , PANTANOS , CAMPOS DE GRANOS , LAGUNAS , BAHIAS";
	zonasDondeSeEncuentra="EUROPA: GROENLANDIA ,ISLANDIA,GRAN BRETANA,PAISES BAJOS";
}
void Ganso::volar(){
	cout<<"EL GANZO NO VUELA"<<endl;
}
void Ganso::nadar(){
	cout<<"EL GANZO NADA"<<endl;
}
void Ganso::graznar(){
	cout<<"EL GANZO GRAZNA"<<endl;
}


