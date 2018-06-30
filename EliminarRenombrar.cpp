#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /***** ELIMINAR Y RENOMBAR ARCHIVO ******/
    /** RENAME
        if(rename("archivo.txt","nuevoArchivo.txt")==0){
            cout<<"El archivo se renombro con exito"<<endl;
        }
        else{
            cout<<"NO se pudo renombrar"<<endl;
    }**/
    /** REMOVE**/
    if(remove("nuevoArchivo.txt")==0){
        cout<<"Se elimino con exito"<<endl;
    }
    else{
        cout<<"NO se pudo eliminar"<<endl;
    }
    return 0;
}
