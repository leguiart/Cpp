#include <iostream>
#include <fstream>
using namespace std;

void pasarAMayusculas(char cadena[]);
void pasarLineas(char origen[],char destino[]);

int main(){
    /*****
        Escribe un programa que lea un archivo “archivo.txt” y
        escriba en otro archivo ““archivo2.TXT” el contenido del
        archivo de entrada con todas las letras en mayúsculas.
     ******/
    pasarLineas("archivo.txt","archivo2.txt");

    return 0;
}

void pasarAMayusculas(char cadena[]){
    int i=0;
    while(cadena[i]){
        cadena[i] = toupper(cadena[i]);
        i++;
    }
}

void pasarLineas(char origen[],char destino[]){
    ifstream entrada;
    ofstream salida;
    char linea[256];
    entrada.open(origen);
    salida.open(destino);
    if(entrada.good()){
        while(!entrada.eof()){
            entrada.getline(linea,256);
            pasarAMayusculas(linea);
            salida << linea << endl;
        }
    }
    else{
        cout<<"NO se pudo realizar el paso de lineas"<<endl;
    }
    entrada.close();
    salida.close();
}
