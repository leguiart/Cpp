#include <iostream>
#include <fstream>
#include <string>   
using namespace std;

int main(){
    /***** ARCHIVOS DE TEXTO *****/
    /**
    cout -> Console OUTput -> SALIDA por consola
    cin -> Console INput  -> ENTRADA por consola

    ifstream -> InputFile Stream -> Flujo de entrada de Archivo (lectura)
    ofstream -> OutputFileStream -> Flujo de salida a archivo (Escritura)

    3 PASOS PRINCIPALES
    1.- Abrir mi archivo
    2.- Operar sobre mi archivo
    3.- CERRAR tu archivo
    **/
    ifstream entrada;
    string linea;
    entrada.open("archivo.txt");
    getline(entrada, linea);
    cout<<linea<<endl;
    entrada.close();
    return 0;
}
