#include<iostream>

using namespace std;

void llenaMatriz(int**, int, int);
void muestraMatriz(int**, int, int);
void multiplicaMatrices(int**, int**, int**, int m, int n1, int n2);
int** reservaMem(int, int);
void borraMatriz(int**, int m, int n);

int main()
{
    /* Producto de matrices */
    /*
        2    3    1    2      2*1+3*3=11  2*2+3*4=16
        4    5    3    4      4*1+5*3=19  4*2+5*4=28
    */

    int** mat1, **mat2, **mat3; 
    int n1, n2, m;

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
    }while(n1<=0 && n2<=0 && m<=0);
    mat1 = reservaMem(m, n1); //notese que no se puede hacer paso por referencia de las matrices para reservar la memoria, forzosamente se debe regresar un int**
    mat2 = reservaMem(n1, n2);
    mat3 = reservaMem(m, n2);
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
    borraMatriz(mat1, m, n1);
    borraMatriz(mat2, n1, n2);
    borraMatriz(mat3, m, n2);
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

void multiplicaMatrices(int** M1, int** M2, int** M3, int m, int n1, int n2){
    int aux = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            for(int k = 0; k < n1; k++)
            {
                aux+=*(*(M1+i)+k) * *(*(M2+k)+j);
            }
            *(*(M3+i)+j)=aux;
            aux = 0;
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