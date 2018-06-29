#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /* Suma de matrices */

    int mat1[MAX][MAX], mat2[MAX][MAX], n, m;
    do{
        cout<<"Ingrese el numero de columnas: ";
        cin>>m;

        cout<<"Ingrese el numero de renglones: ";
        cin>>n;
    }while((n>MAX || n<0)&&(m>MAX || m<0));

    cout<<"Ingrese los elementos de la matriz1: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"]: ";
            cin>>mat1[i][j];
        }
    }

    cout<<"Ingrese los elementos de la matriz2: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<"mat2["<<i<<"]["<<j<<"]: ";
            cin>>mat2[i][j];
        }
    }

    cout<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<" + "<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            mat2[i][j]+=mat1[i][j];
        }
    }

    cout<<" = "<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
