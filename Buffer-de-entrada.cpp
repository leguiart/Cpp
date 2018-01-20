#include <iostream>
using namespace std;

int main(){
    /** BUFFER DE ENTRADA **/
    char nombre[25];
    int edad;

    /*******BUFFER**********

    **********************/
    cout<<"Ingresa tu edad:";
    cin>>edad;
    cin.ignore();/**ELIMINA EL PRIMER CARACTER QUE ENCUENTRA**/
    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,25);

    cout<<"Te llamas "<<nombre<<" y tu edad es "<<edad<<endl;

    return 0;
}
