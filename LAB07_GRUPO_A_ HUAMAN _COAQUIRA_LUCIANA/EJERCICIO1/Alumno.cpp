#include "Alumno.h"
Alumno::Alumno() {//CONSTRUCTOR
	
}

Alumno::~Alumno() {// DESTRUCTOR
	
}
void Alumno::asignarEdad(int x){
	edad=x;
}
void Alumno::asignarNombre(string y){
	nombre=y;
}
void Alumno::mostrarEdad(){
	cout<<"EDAD DEL ALUMNO: "<<edad<<endl;
}
void Alumno::mostrarNombre(){
	cout<<"NOMBRE DEL ALUMNO"<<nombre<<endl;
}
