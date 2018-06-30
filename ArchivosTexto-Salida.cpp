#include <iostream>
#include <fstream>
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
    /** CUANDO ES FLUJO DE SALIDA EL ARCHIVO SE CREA AUTOMATICAMENTE **/
    ofstream salida;
    salida.open("archivo.txt");
    /** REDIRECCION DE FLUJO **/
    salida<<"Hola mundo"<<endl;
    salida.close();

    return 0;
}
