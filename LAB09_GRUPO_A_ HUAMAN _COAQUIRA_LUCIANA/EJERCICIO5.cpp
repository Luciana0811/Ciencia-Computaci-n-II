#include "iostream"
#include "stdlib.h"
using namespace std;

template <class Datos>
void Ascendente(Datos *,int, int);

int main(){
    int list[9]={5,7,2,8,6,1,3,4,9};
    int *Ptr_list_1=new int[9];//array dinámico con puntero
    for (int i = 0; i < 9; i++)
    {
        Ptr_list_1[i]=list[i];
    }
    cout<<"\n----------------------------------------------"<<endl;

    cout<<"ORDENAMIENTO ARRAY 1:"<<endl;
    Ascendente(Ptr_list_1,0,8);
    //PARTE FLOAT
    float list2 [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    float *Ptr_list_2=new float[5];
    for (int i = 0; i < 5; i++)
    {
        Ptr_list_2[i]=list2[i];
    }

    cout<<"\n----------------------------------------------"<<endl;

    cout<<"\nORDENAMIENTO ARRAY 2:"<<endl;
    Ascendente(Ptr_list_2,0,4);
    cout<<"\n----------------------------------------------"<<endl;

    return 0;
}


template <class Datos>
void Ascendente(Datos *ptr_array, int inicio, int fin){
    int longt=fin;
    Datos aux;

    for (int i = 0; i <= longt; i++)
    {
        for (int j = 0; j < longt; j++)
        {
            if (ptr_array[j]>ptr_array[j+1])
            {
                aux=ptr_array[j];
                ptr_array[j]=ptr_array[j+1];
                ptr_array[j+1]=aux;
            }
            
        }
        
    }

    cout<<endl<<"FORMA ASCENDETE: "<<endl;
    for (int i = 0; i <= longt; i++)
    {
        cout<<" "<<ptr_array[i];
    }
    cout<<endl;

    Datos aux2;

    for (int i = 0; i <= longt; i++)
    {
        for (int j = 0; j < longt; j++)
        {
            if (ptr_array[j]<ptr_array[j+1])//filtramos el mayor mientras se avanza
            {
                //cambiamos de ubicación a los datos
                aux2=ptr_array[j];
                ptr_array[j]=ptr_array[j+1];
                ptr_array[j+1]=aux2;
            }
        }
    }
    
    //Imprimimos segunda parte DESCENDENTE:
    cout<<endl<<"FORMA ASCENDETE: "<<endl;
    for (int i = 0; i <= longt; i++)
    {
        cout<<" "<<ptr_array[i];
        
    }
    cout<<endl;
    
}