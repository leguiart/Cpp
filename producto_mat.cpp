#include<iostream>
#define MAX 100

using namespace std;

void llenaMatriz(int[][MAX], int, int);
void muestraMatriz(int[][MAX], int, int);
void multiplicaMatrices(int[][MAX], int[][MAX], int[][MAX], int m, int n1, int n2);

int main()
{
    /* Producto de matrices */
    /*
        2    3    1    2      2*1+3*3=11  2*2+3*4=16
        4    5    3    4      4*1+5*3=19  4*2+5*4=28
    */

    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX], n1, n2, m;

    do{
        cout<<"Ingrese numero de renglones de la matriz1: ";
        cin>>m;
        cout<<endl;
        cout<<"Ingrese numero de columnas de la matriz1: ";
        cin>>n1;
        cout<<endl;
        cout<<"Ingrese numero de columnas de la matriz2: ";
        cin>>n2;
        cout<<endl;
    }while((n1>MAX || n1<0)&&(n2>MAX || n2<0) && (m>MAX || m<0));

    cout<<"Ingrese los elementos de la matriz1: "<<endl;
    llenaMatriz(mat1, m, n1);
    cout<<"Ingrese los elementos de la matriz2: "<<endl;
    llenaMatriz(mat2, n1, n2);
    cout<<endl;
    multiplicaMatrices(mat1, mat2, mat3, m, n1, n2);
    muestraMatriz(mat1, m, n1);
    cout<<" * "<<endl;
    muestraMatriz(mat2, n1, n2);
    cout<<" = "<<endl;
    muestraMatriz(mat3, m, n2);
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

void multiplicaMatrices(int M1[][MAX], int M2[][MAX], int M3[][MAX], int m, int n1, int n2){
    int aux = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            for(int k = 0; k < n1; k++)
            {
                aux+=M1[i][k]*M2[k][j];
            }
            M3[i][j]=aux;
            aux = 0;
        }
    }
}
