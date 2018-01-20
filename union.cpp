#include <iostream>
#define MAX 100

using namespace std;

bool lineal(int lista[], int len, int buscado);

int main()
{
    /*Generar la union de dos arreglos*/
    int arr1[MAX], arr2[MAX], arr3[MAX*2], j = 0, i , n1, n2, aux = 0;

    do
    {
        cout<<"Ingresar numero de elementos del arreglo1:";
        cin>>n1;
    }while(n1>MAX || n1<0);
    i = n1;

    do
    {
        cout<<"Ingresar numero de elementos del arreglo2:";
        cin>>n2;
    }while(n2>MAX || n2<0);

    cout<<"Ingresar elementos del arreglo1: "<<endl;
    while(j<n1)
    {
        cout<<"arr1["<<j<<"]: ";
        cin>>arr1[j];
        j++;
    }
    j = 0;

    cout<<"Ingresar elementos del arreglo2: "<<endl;
    while(j<n2)
    {
        cout<<"arr2["<<j<<"]: ";
        cin>>arr2[j];
        j++;
    }
    j = 0;

    //Guardar los elementos del arreglo1 en el arreglo3 eliminando elementos repetidos
    for(int n=0; n<i; n++)
    {
        if(!lineal(arr3, aux, arr1[n]))
        {
            arr3[aux]=arr1[n];
            aux++;
        }
    }

    //Agregar elementos nuevos del arreglo2 al arreglo3 resultando en la union final del arreglo1 y arreglo2
    for(int n=0; n<n2; n++)
    {
        if(!lineal(arr3, aux, arr2[n]))
        {
            arr3[aux]=arr2[n];
            aux++;
        }
    }

    //Mostrar arreglo1 y arreglo2
    cout<<"{";
    for(int n=0; n<aux; n++)
    {
        if(n==aux-1)
            cout<<arr3[n];
        else
            cout<<arr3[n]<<",";
    }
    cout<<"}";

    return 0;
}


bool lineal(int* lista, int len, int buscado)
{
    bool encontrado = false;
    int m = 0;
    while(m<len)
    {
        if(lista[m]==buscado)
        {
            encontrado = true;
            break;
        }

        m++;
    }
    return encontrado;
}
