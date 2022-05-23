#include "Rectangulo.h"
#include "Figura.h"
#include "Elipse.h"
#include "Rectangulo.h"

#include <iostream>
using namespace std;


int main(){
	int coordenadas[2]= {0,0};
	string opcion;
	while(true){
		cout<<"---------INDICAR LA FIGURA---------\n"<<endl;
		cout<<"1. RECTANGULO "<<endl;
		cout<<"2. ELIPSE "<<endl;
		cout<<"3. SALIR " <<endl;
		cin>>opcion;
		if (opcion=="1"){
			Rectangulo fig = Rectangulo("VERDE",coordenadas[2],"Rectangular",10,13);
			fig.imprimir();
			fig.area();
			fig.perimetro();
			fig.cambioTamanio();

		}
		else if (opcion=="2"){
			Elipse fig1 = Elipse("Amarillo",coordenadas[2],"Elipse",5,12);
			fig1.imprimir();
			
		}
		else if (opcion=="3"){
			break;
		}
		else{
			cout<<"OPCION NO VALIDA"<<endl;
		}
	}
	return 0;
}
	

