
#include <ctime>
#include<iostream>
#include <list>
#include <string>
#include <sstream>
#include<cmath>
using namespace std;

struct Alumno{
	string nombre;
    string grupo;
	float notas_fase[3]; // cumpleanio
    float proyecto;
    float promedio; 
};

float nota_final(float n1,float n2,float n3,float n4){
	float promedio;
    promedio=((n1*15)/100)+((n2*20)/100)+((n3*25)/100)+((n4*40)/100);
    return promedio;
}

int main(int argc,char **argv){
	int n;
	cout<<"\n--------------------------------\n"<<endl;
	cout<<"\nINGRESAR LA CANTIDAD DE PERSONAS: "<<endl;
	cout<<"\n--------------------------------\n"<<endl;
	cin>>n;
	Alumno estudiante[n];
	for (int i=0;i<n;i++){
		cout<<"\n **INGRESAR NOMBRE: ";
		cin>>estudiante[i].nombre;
        cout<<" **INGRESAR A QUE GRUPO PERTENECE ( A , B o C): \n";
		cin>>estudiante[i].grupo;
        for(int a=1;a<4;a++){
            cout<<"**NOTA FASE "<<a<<endl;
            cin>>estudiante[i].notas_fase[a-1];
        }
		cout<<" **NOTA PROYECTO FINAL"<<endl;
        cin>>estudiante[i].proyecto;
        estudiante[i].promedio=nota_final(estudiante[i].notas_fase[0],estudiante[i].notas_fase[1],estudiante[i].notas_fase[2],estudiante[i].proyecto);
		cout<<endl<<endl;
	}
    cout<<"\n----------------------------------"<<endl;
    cout<<"NOTAS FINALES";
    cout<<"\n----------------------------------"<<endl;
    for (int i=0;i<n;i++){
        cout<<"\nALUMNO: "<<estudiante[i].nombre;
        cout<<"\nGRUPO: "<<estudiante[i].grupo;
        cout<<"\nNOTA:" <<estudiante[i].promedio;
    }
	return 0;
}
