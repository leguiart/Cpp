#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    /***** LEER MULTIPLES LINEAS ******/
    /*Esta forma es mucho menos general y un ejemplo de mala práctica para la lectura de archivos
    sin embargo también es posible leerlos así, puesto que como se agregó en el ejemplo Estado-Flujo,
    is_open tiene implícito good() y good() a su vez tiene implícito eof().
    Como siempre, se modifica el uso de un arreglo estático de char, por el uso de la biblioteca string
    */
    ifstream entrada;
    string linea;
    entrada.open("Estado-Flujo.cpp");
    if(entrada.good()){
        cout<<"Archivo en buen estado"<<endl;
        while(!entrada.eof()){
            getline(entrada, linea);
            cout<<linea<<endl;
        }
    }
    else{
        cout<<"No se puede leer"<<endl;
    }

    entrada.close();
    return 0;
}
