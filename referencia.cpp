#include <iostream>
using namespace std;

int main(){
    /** Referencia
        & -> operador de referencia
     **/
    int var = 100;
    int &referencia = var;//apunta a la misma direccion de memoria que var

    cout<<"El contenido de var es "<<var<<endl;
    cout<<"La direccion de var es "<<&var<<endl;
    cout<<endl;
    cout<<"El contenido de referencia es "<<referencia<<endl;//por ende al acceder a su valor es el mismo que var
    cout<<"La direccion de referencia es "<<&referencia<<endl;//y es la misma direccion como ya se dijo
    return 0;
}
