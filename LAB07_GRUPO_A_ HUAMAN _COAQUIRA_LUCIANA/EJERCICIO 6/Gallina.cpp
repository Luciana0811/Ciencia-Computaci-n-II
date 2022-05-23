#include "Gallina.h"

Gallina::Gallina() {}//CONSTRUCTOR

Gallina::~Gallina() {}//DESTRUCTOR

void Gallina::GallinaDomesticaDatos(){
	nombreCientifico="RHODE ISLAND RED";
	habitat="MAYORMENTE SE UBICAN EN LOS CORRALES";
	zonasDondeSeEncuentra="EEUU , MASSACHUSETTS , RHODE ISLAND ,ETC";
}
void Gallina::volar(){
	cout<<"LA GALLINA NO VUELA"<<endl;
}
void Gallina::nadar(){
	cout<<"LA GALLINA NO NADA"<<endl;
}
void Gallina::cacarear(){
	cout<<"LA GALLINA CACAREA"<<endl;
}
