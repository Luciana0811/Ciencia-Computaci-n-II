#include <iostream>
using namespace std;

struct Empleados
{
    string nombre;
    char sexo;
    float sueldo;
};

int main(){
    int cant;
    cout<<"CANTIDAD DE EMPLEADOS QUE DESEA INGRESAR: ";
    cin>>cant;
    Empleados empleado[cant];

    for (int i=0;i<cant;i++){
        cout<<"\nINFORMACION DE EMPLEADO "<<i+1<<" :"<<endl;
        cout<<"\nNOMBRE: ";
        cin>>empleado[i].nombre;
        cout<<"SEXO DEL EMPLEADO ('H' o 'M'): ";
        cin>>empleado[i].sexo;
        cout<<"SUELDO: ";
        cin>>empleado[i].sueldo;
    }

    float mayor = empleado[0].sueldo, menor = empleado[0].sueldo;

    for (int i=0;i<cant;i++){
        if (empleado[i].sueldo>mayor){
            mayor = empleado[i].sueldo;
        }
        if (empleado[i].sueldo<menor){
            menor = empleado[i].sueldo;
        }
    }

    for (int i=0;i<cant;i++){
        if (empleado[i].sueldo==mayor){
            cout<<"EMPLEADO CON MAYOR SUELDO: "<<endl;
            cout<<"\nNombre: "<<empleado[i].nombre<<endl;
            cout<<"Sexo: "<<empleado[i].sexo<<endl;
            cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
            cout<<endl;}
        if (empleado[i].sueldo==menor){
            cout<<"EMPLEADO CON MENOR SUELDO: "<<endl;
            cout<<"\nNombre: "<<empleado[i].nombre<<endl;
            cout<<"Sexo: "<<empleado[i].sexo<<endl;
            cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
            cout<<endl;}
    }

    return 0;
}