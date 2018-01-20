#include <iostream>
#define MAX 100
using namespace std;

void mostrarArreglo(int[],int);
void llenarArreglo(int[],int);

void mostrarMatriz(int[][MAX],int,int);
void llenarMatriz(int[][MAX],int,int);

/*Como el nombre de un arreglo es en si un apuntador, entonces no es necesario
especificar el paso por referencia y se hace automáticamente al llamar a la funcion
y esta opera en dicha referencia del arreglo cambiando sus valores sin necesidad de
hacer cosas feas como había hecho antes, como retornar dobles apuntadores*/
int main(){
    int arreglo[5];
    int matriz[10][MAX];

    llenarArreglo(arreglo,5);
    mostrarArreglo(arreglo,5);

    llenarMatriz(matriz,2,2);
    mostrarMatriz(matriz,2,2);

    return 0;
}

void mostrarArreglo(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void llenarArreglo(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<"Elemento "<<i<<":";
        cin>>A[i];
    }
}

void mostrarMatriz(int M[][MAX],int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void llenarMatriz(int M[][MAX],int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Elemento "<<i<<","<<j<<":";
            cin>>M[i][j];
        }
        cout<<endl;
    }
}
