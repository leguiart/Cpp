#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /***** MODOS DE APERTURA *****/
    /**
        ios:: in   -> modo lectura (entrada)
        ios:: out  -> modo escritura (salida)
        ios::binary-> modo binario
        ios::ate   -> La posicion inicial al final del archivo (AT the End -> al final)
        ios::app   -> Las operaciones se realizan siempre al final del archivo
        ios::trunc -> si el archivo existe, se elimina su contenido para escritura
     **/
    ofstream salida;
    salida.open("archivo.txt", ios::app); // ios::trunc se encuentra siempre por defecto activado, si se quiere indicar algun otro  
                                          // modo de apertura se usa el operador 'or' a nivel de bits e.g.- salida.open("archivo.txt", ios::app | ios::binary)
    salida<<"Linea 4"<<endl; //Correr primero bloque no comentado, luego bloque comentado para entender lo que hace ios::app
    salida<<"Linea 5"<<endl;
    salida<<"Linea 6"<<endl;
    salida<<"Linea 7"<<endl;
    salida<<"Linea 8"<<endl;
    salida<<"Linea 9"<<endl;
    salida.close();
    return 0;
}
