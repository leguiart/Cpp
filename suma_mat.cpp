#include <iostream>
#define MAX 100

using namespace std;

void llenaMatriz(int [][MAX], int, int);
void muestraMatriz(int [][MAX], int, int);
void sumaMatrices(int [][MAX], int [][MAX], int , int);

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
    llenaMatriz(mat1, m, n);
    cout<<"Ingrese los elementos de la matriz2: "<<endl;
    llenaMatriz(mat2, m, n);
    cout<<endl;
    muestraMatriz(mat1, m, n);
    cout<<" + "<<endl;
    muestraMatriz(mat2, m, n);
    sumaMatrices(mat1, mat2, m, n);
    cout<<" = "<<endl;
    muestraMatriz(mat2, m, n);
    return 0;
}

void llenaMatriz(int M[][MAX], int m, int n){
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"mat["<<i<<"]["<<j<<"]: ";
            cin>>M[i][j];
        }
    }
}

void muestraMatriz(int M[][MAX], int m, int n){
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void sumaMatrices(int M1[][MAX], int M2[][MAX], int m, int n){
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            M2[i][j]+=M1[i][j];
        }
    }
}

