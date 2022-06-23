#include <ctime>
#include<iostream>
#include <list>
#include <string>
#include <sstream>
#include<cmath>
using namespace std;

struct Jugador{
	string nombre;
    int edad;
    float talla; 
};


int main(int argc,char **argv){
	int n=10;
	Jugador usuario[n];
    cout<<"\n----------------------------------"<<endl;
	for (int i=0;i<n;i++){
		cout<<"\n **INGRESAR NOMBRE: ";
		cin>>usuario[i].nombre;
        cout<<" **INGRESAR EDAD: ";
		cin>>usuario[i].edad;
		cout<<" **INGRESAR TALLA: ";
        cin>>usuario[i].talla;
		cout<<"\n----------------------------------"<<endl;

	}

    /*Jugador usuario[0]={"MARIA",17,2};
    Jugador usuario[1]={"JUAN",10,1.8};
    Jugador usuario[2]={"PEDRO",19,1.75};
    Jugador usuario[3]={"JOSE",20,1.3};
    Jugador usuario[4]={"ABEL",22,1.8};
    Jugador usuario[5]={"GRECIA",14,1.7};
    Jugador usuario[6]={"GUSTAVO",11,1.9};
    Jugador usuario[7]={"CESAR",16,1.8};
    Jugador usuario[8]={"EDUARDO",24,1.6};
    Jugador usuario[9]={"JUANCHO",24,1.2};*/

    cout<<"\n-----------------------------------------------------------"<<endl;
    cout<<"JUGADORES MENORES DE 20 ANIOS Y CON TALLA MAYOR A 1,70 m";
    cout<<"\n-----------------------------------------------------------"<<endl;
    for (int i=0;i<n;i++){
        if(usuario[i].edad<20 && usuario[i].talla>1.70 ){
            cout<<"\nALUMNO: "<<usuario[i].nombre;
            cout<<"\nEDAD: "<<usuario[i].edad;
            cout<<"\nTALLA:" <<usuario[i].talla;
            cout<<"\n----------------------------------------------\n";
        }
    
    }
	return 0;
}