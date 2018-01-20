#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /*Obtener el menor elemento de un arreglo y su indice*/
    int i = 1, arr[MAX], n, aux, indice;

    cout<<"Introducir longitud del arreglo: ";
    cin>>n;

    cout<<"Introducir los elementos del arreglo:"<<endl;
    for(int j = 0; j < n; j++)
    {
        cout<<"arr["<<j<<"]: ";
        cin>>arr[j];
    }

    aux = arr[0];

    while(i<n)
    {
        if(arr[i]<aux)
        {
            aux = arr[i];
            indice = i;
        }
        i++;
    }

    cout<<"El menor elemento es:"<< aux << " con indice: " << indice;

    return 0;
}
