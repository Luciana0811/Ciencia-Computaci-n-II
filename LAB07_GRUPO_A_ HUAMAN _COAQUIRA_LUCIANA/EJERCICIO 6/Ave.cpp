#include "Ave.h"
Ave::Ave() {
	
}

Ave::~Ave() {
	
}
void Ave::ingresarNombreCientifico(string a){
	nombreCientifico=a;
}

void Ave::ingresarHabitat(string c){
	habitat=c;
}
void Ave::ingresarZonasDondeSeEncuentra(string z){
	zonasDondeSeEncuentra=z;
}
void Ave::imprimirDatos(){
	cout<<"NOOMBRE CIENTIFICO DEL ANIMAL: "<<nombreCientifico<<endl;
	cout<<"HABITAT: "<<habitat<<endl;
	cout<<"LOCALIZACION: "<<zonasDondeSeEncuentra<<endl;
}

