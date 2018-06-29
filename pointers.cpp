#include <iostream>

using namespace std;

void imprimeArrego(int*, int);
void cambiaArreglo(int*, int, int);
void cambiaValor(int&);

int main(){
    /*Resumen de apuntadores.cpp, referencia.cpp e indireccion.cpp*/
    int i = 23; //Variable
    int* pointer = &i; //Direccion de la variable
    int &ref = i; //Tambien direccion de la variable
    int vec[4];
    cout << "Valor de Variable: " << i << endl;
    cout << "Direccion o referencia de la variable: " << &i << endl;
    cout << "Valor de Variable: " << ref << endl; //Referencia
    cout << "Direccion o referencia de la variable: " << &ref << endl;
    cout << "Valor de Variable: " << *pointer << endl;//Desreferencia o indireccion
    cout << "Direccion o referencia de la variable: " << pointer << endl;
    cout << "Direccion o referencia del apuntador: " << &pointer << endl;
    *pointer = 50;
    cout << "Valor de Variable: " << i << endl;
    cout << "Valor de variable: " << ref << endl;
    
    /*Resumen y ejercicio simple de apuntadores_y_arreglos.cpp*/
    //Apuntadores y arreglos
    *vec = 0;
    *(vec + 1) = 1;
    *(vec + 2) = 2;
    *(vec + 3) = 3;
    imprimeArrego(vec, 4);

    //Paso por referencia
    cambiaArreglo(vec, 4, 50);
    imprimeArrego(vec, 4);
    cambiaValor(i);
    cout << "Valor de Variable: " << i << endl;
    return 0;
}

void imprimeArrego(int* v, int len){
    for (int i=0; i<len; i++){
        cout << "vector["<<i+1<<"]: "<<*(v+i)<<endl;
        cout << "direccion["<<i+1<<"]: "<<(v+i)<<endl;
    }
}

void cambiaArreglo(int* v, int len, int val){
    for(int i=0; i<len; i++){
        *(v+i) = val;
    }
}

void cambiaValor(int& i){
    i = 100;
}