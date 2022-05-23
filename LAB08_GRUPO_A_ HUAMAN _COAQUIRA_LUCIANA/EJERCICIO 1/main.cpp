#include "Rectangulo.h"
#include "Figura.h"
#include <iostream>
using namespace std;

int main(){
	int coordenadas[2]= {0,0};
	string opcion;
	Rectangulo fig = Rectangulo("Azul",coordenadas[2],"Rectangular",12,23);
	while(true){
	cout<<"---------INDICAR LA OPCION QUE DESEA OBSERVAR---------\n"<<endl;
	cout<<"1. CAMBIAR COLOR "<<endl;
	cout<<"2. CAMBIAR TAMANO "<<endl;
	cout<<"3. MOVER UBICACION DE COORDENADA (X,Y)=(0,0) "<<endl;
	cout<<"4. MOSTRAR DATOS DE LA FIGURA "<<endl;
	cout<<"5. SALIR " <<endl;
	cin>>opcion;
		if (opcion=="1"){
			fig.cambiarColor();
		}
		else if (opcion=="2"){
			fig.cambioTamanio();
		}
		else if (opcion=="3"){
			fig.moverCoordenadas();
		}
		else if (opcion=="4"){
			fig.imprimir();
			fig.obtenerColor();
			fig.perimetro();
		}
		else if (opcion=="5"){
			break;
		}
		else{
			cout<<"OPCION NO VALIDA"<<endl;
		}
	}
	return 0;
}
