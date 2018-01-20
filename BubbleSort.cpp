#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /*Bubble Sort mejorado*/
    int arr[MAX], n, menor, indice, aux, m = 0;

    cout<<"Introducir longitud del arreglo: ";
    cin>>n;

    cout<<"Introducir los elementos del arreglo:"<<endl;
    for(int j = 0; j < n; j++)
    {
        cout<<"arr["<<j<<"]: ";
        cin>>arr[j];
    }

    menor = arr[0];
    indice = m;
    for(int i = 0; i < n; i++)
    {
        for(int j = m; j < n; j++)
        {
            if(arr[j]<menor)
            {
                menor = arr[j];
                indice = j;
            }
        }
        aux = arr[m];
        arr[m] = menor;
        arr[indice] = aux;
        m++;
        menor = arr[m];
    }

    cout<<"{";
    for(int i = 0; i < n; i++)
    {
        if(i==n-1)
            cout<<arr[i];
        else
            cout<<arr[i]<<",";
    }
    cout<<"}";

    return 0;
}
