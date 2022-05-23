#include<iostream>
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"
using namespace std;

int main (int argc, char *argv[]) {

	Gallina unaGallina;
	while(true){
		string opcion;
		cout<<"---------INDICAR LA OPCION QUE DESEA OBSERVAR---------\n"<<endl;
		cout<<"1. INFORMACION GANSO "<<endl;
		cout<<"2. INFORMACION PATO "<<endl;
		cout<<"3. INFORMACION GALLINA "<<endl;
		cin>>opcion;
		if (opcion=="1"){
			Ganso animal1;
			animal1.gansoDatos();
			animal1.imprimirDatos();
			animal1.volar();
			animal1.nadar();
			animal1.graznar();
			animal1.gansoDatos();
		}
		else if (opcion=="2"){
			Pato animal2;
			animal2.patoDatos();
			animal2.imprimirDatos();
			animal2.volar();
			animal2.nadar();
			animal2.parpar();
		}
		else if(opcion=="3"){
			Gallina animal3;
			animal3.GallinaDomesticaDatos();/*Datos base de la gallina comun*/
			animal3.imprimirDatos();
			animal3.volar();
			animal3.nadar();
			animal3.cacarear();
		}
		else{
			cout<<"OPCION INCORRECTA"<<endl;
		}
	}
	return 0;
}
