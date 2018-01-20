#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /* Matriz traspuesta */

    int mat[MAX][MAX], m, n;

    do{
        cout<<"Ingrese el numero de columnas: ";
        cin>>m;

        cout<<"Ingrese el numero de renglones: ";
        cin>>n;
    }while((n>MAX || n<0)&&(m>MAX || m<0));

    cout<<"Ingrese los elementos de la matriz: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<"mat["<<i<<"]["<<j<<"]: ";
            cin>>mat[i][j];
        }
    }

    cout<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
