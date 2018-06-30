#include <iostream>

using namespace std;

void llenaMatriz(int**, int, int);
void muestraMatriz(int**, int, int);
void sumaMatrices(int**, int**, int , int);
int** reservaMem(int, int);
void borraMatriz(int**, int m, int n);

int main()
{
    /* Suma de matrices */

    int **mat1, **mat2;
    int n, m;
    do{
        cout<<"Ingrese el numero de columnas: ";
        cin>>m;

        cout<<"Ingrese el numero de renglones: ";
        cin>>n;
    }while(n<0 && m<0);
    mat1 = reservaMem(m, n);
    mat2 = reservaMem(m, n);
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
    borraMatriz(mat1, m, n);
    borraMatriz(mat2, m, n);
    return 0;
}

void llenaMatriz(int** M, int m, int n){
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"mat["<<i<<"]["<<j<<"]: ";
            cin>>*(*(M+i)+j);
        }
    }
}

void muestraMatriz(int** M, int m, int n){
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<*(*(M+i)+j)<<" ";
        }
        cout<<"\n";
    }
}

void sumaMatrices(int** M1, int** M2, int m, int n){
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            M2[i][j]+=M1[i][j];
        }
    }
}

int** reservaMem(int m, int n){
    int** M = new int*[m];
    for (int i = 0; i<m; i++){
        M[i] = new int[n];
    }
    return M;
}

void borraMatriz(int** M, int m, int n){
    for (int i = 0; i<m; i++)
        delete [] M [i];
    delete [] M;
}