#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
T2 generar(T1 letra, T2 apellido){
  T2 correo;
  correo.push_back(letra); 
  correo += apellido+"@unsa.edu.pe";
  return correo;
}


int main(){
  char letra; 
  string apellido;
  for(int i=1; i<=5; i++){
    cout<<"---CORREO DE USUARIO---"<<i<<endl;
    cout<<"INGRESE CARACTER: "; cin>>letra;
    cout<<"INGRESE APELLIDO: "; cin>>apellido;
    cout<<"------------------------"<<endl;
    cout<<"CORRECO BRINDADO = "<<generar<char,string>(letra,apellido)<<endl;
    cout<<"------------------------"<<endl;

 }

}

