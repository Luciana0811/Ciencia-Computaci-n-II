#include <ctime>
#include<iostream>
#include <list>
#include <string>
#include <sstream>
#include<cmath>
using namespace std;

struct Persona{
	string nombre;
	int fecha[3]; // cumpleanio
};

int mes_actual(){
	int Fecha;
	time_t t =time(0);
	tm* now = localtime(&t);
	Fecha=now->tm_mon +1;
	return Fecha;
}

int main(int argc,char **argv){
	int n;
	int fecha_actual;
	cout<<"\n--------------------------------\n"<<endl;
	cout<<"\nINGRESAR LA CANTIDAD DE PERSONAS: "<<endl;
	cout<<"\n--------------------------------\n"<<endl;
	cin>>n;
	Persona usuario[n];
	for (int i=0;i<n;i++){
		cout<<"INGRESAR NOMBRE\n: ";
		cin>>usuario[i].nombre;
		cout<<"FECHA DE CUMPLEAÑOS:"<<endl;
		cout<<"\nDIA: ";
		cin>>usuario[i].fecha[0];
		cout<<"MES: ";
		cin>>usuario[i].fecha[1];
		cout<<"AÑO: ";
		cin>>usuario[i].fecha[2];
		cout<<endl<<endl;
	}
	fecha_actual=mes_actual();
	cout<<"\n--------------------------------\n"<<endl;
	cout<<"\nALUMNOS QUE CUMPLEN AÑO ESTE MES: "<<endl;
	cout<<"\n--------------------------------\n"<<endl;
	for (int j=0;j<n;j++){
		if (usuario[j].fecha[1]==fecha_actual){
			cout<<"\nNOMBRE: "<<usuario[j].nombre<<endl;
			cout<<"FECHA DE CUMPLEAÑOS: "<<usuario[j].fecha[0];
			cout<<"/"<<usuario[j].fecha[1];
			cout<<"/"<<usuario[j].fecha[2]<<endl;
		}
	}
	return 0;
}


