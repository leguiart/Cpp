#include<iostream>
#define MAX 100

using namespace std;

int main()
{
    /* Producto de matrices */
    /*
        2    3    1    2      2*1+3*3=11  2*2+3*4=16
        4    5    3    4      4*1+5*3=19  4*2+5*4=28
    */

    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX], aux=0, n;

    do{
        cout<<"Ingrese numero columnas de la matriz: ";
        cin>>n;
    }while(n>MAX || n<0);

    cout<<"Ingrese los elementos de la matriz1: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"]: ";
            cin>>mat1[i][j];
        }
    }

    cout<<"Ingrese los elementos de la matriz2: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"mat2["<<i<<"]["<<j<<"]: ";
            cin>>mat2[i][j];
        }
    }

    for(int m = 0; m < n; m++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                aux+=mat1[m][j]*mat2[j][i];
            }
            mat3[m][i]=aux;
            aux = 0;
        }
    }

    cout<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<" * "<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<" = "<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
