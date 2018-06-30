#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    /***** ESTADO DEl ARCHIVO *****/
    /**
        bad()  -> Cuando no tenemos permiso. Cuando no hay espacio. Cuando no existe el archivo
        fail() -> Error de formato (tratas de leer int y solo encuentras un char).
        eof()  -> Fin de archivo End Of File
        good() -> Cuando las tres funciones anteriores sean falsas, es verdadera
        is_open() -> Verdadero si el archivo esta abierto y asociado con un stream, se usa en conjunto con good() para la lectura de archivos, tiene implicito good()
     **/
    ifstream entrada;
    string linea;
    entrada.open("archivo.txt");
    if(entrada.is_open()){
        while(entrada){ //lo mismo que poner entrada.good()
           getline(entrada, linea);
           cout<<linea<<endl; 
        }
    }
    else{
        cout<<"Archivo en mal estado"<<endl;
    }
    entrada.close();
    return 0;
}
