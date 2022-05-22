#include<iostream>
#include "Alumno.h"
using namespace std;

int main (int argc, char *argv[]) {
	int edad;
	string nombre;
	Alumno usuario;
	cout<<"INDICAR NOMBRE COMPLETO DEL ALUMNO"<<endl;
	getline(cin,nombre);
	cout<<"INDICAR EDAD DEL ALUMNO"<<endl;
	cin>>edad;
	usuario.asignarNombre(nombre);
	usuario.asignarEdad(edad);
	cout<<"--------INFORMACION DEL ALUMNO--------"<<endl;
	usuario.mostrarEdad();
	usuario.mostrarNombre();
	return 0;
}
