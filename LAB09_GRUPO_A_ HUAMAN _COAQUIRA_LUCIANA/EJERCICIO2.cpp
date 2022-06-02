#include <iostream>
using namespace std;

template<typename T1, typename T2>

void CUATRO_OPERACIONES(T1 num1, T2 num2){
  int opcion;
  while(true){
    cout<<"************OPERACIONES BASICAS************"<<endl;
    cout<<"[1] SUMA"<<endl<<"[2] RESTA"<<endl<<"[3] MULTIPLICACION"<<endl<<"[4] DIVISION"<<endl;
    cout<<"[5] SALIR"<<endl;
    cout<<"Ingrese una opcion => "; cin>>opcion;
    if(opcion==1){
        cout<<"EL RESULTADO ES: "<<num1+num2<<endl; break;
    }
    else if(opcion==2){
        cout<<"EL RESULTADO ES: "<<num1-num2<<endl; break;
    }
    else if(opcion==3){
        cout<<"EL RESULTADO ES: "<<num1*num2<<endl; break;
    }
    else if(opcion==4){
        cout<<"EL RESULTADO ES: "<<num1/num2<<endl; break;
    }
    else if(opcion==5){
        break;
    }
    else{
        cout<<"ALTERNATIVA INCORRECTA , VUELVA INTENTARLO"<<endl;
    }
  }
}

int main(){
  int a; float b;
  cout<<"INGRESAR UN ENTERO: "; 
  cin>>a;
  cout<<"INGRESE UN FLOTANTE: "; 
  cin>>b;
  CUATRO_OPERACIONES<int,float>(a,b);
  return 0;
}

