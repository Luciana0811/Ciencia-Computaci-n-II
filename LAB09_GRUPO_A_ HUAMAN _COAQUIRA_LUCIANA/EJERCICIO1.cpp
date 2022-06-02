#include <iostream>
using namespace std;

template<typename T>
T menor_num(T a, T b, T c){
  if(a<b && a<c)
    return a;
  if(b<a && b<c)
    return b;
  if(c<a && c<b)
    return c;
}

template<typename T>
T mayor_num(T a, T b, T c){
  if(a>b && a>c)
    return a;
  if(b>a && b>c)
    return b;
  if(c>a && c>b)
    return c;
}

int main(){
  int num1=3,num2=4,num3=6;
  float num4=5.4,num5=3.1,num6=7.2;
  cout<<"---ORDEN NUMEROS ENTEROS---"<<endl;
  cout<<"EL MENOR ES: "<<menor_num<int>(num1,num2,num3)<<endl;
  cout<<"EL MAYOR ES: "<<mayor_num<int>(num1,num2,num3)<<endl;

  cout<<"---ORDEN NUMEROS FLOTANTES---"<<endl;
  cout<<"EL MENOR ES: "<<menor_num<float>(num4,num5,num6)<<endl;
  cout<<"EL MAYOR ES: "<<mayor_num<float>(num4,num5,num6)<<endl;
  cin.get();
  return 0;
}

