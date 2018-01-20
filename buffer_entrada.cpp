#include <iostream>

using namespace std;

int main()
{
    char nombre[30];
    int edad;

    cout<<"Ingresa edad: ";
    cin>>edad; //getline es un metodo para obtener una cadena incluyendo espacios
    cin.ignore();
    //cin.ignore(256, \n); //Los parametros de ignore son el numero de caracteres que se quiere que ignore (256 el maximo) o hasta que encuentre \n
    cout<<"Ingresa nombre: ";
    cin.getline(nombre, 30);

    cout<<"Tu nombre: "<< nombre << endl;
    cout<<"Tu edad: "<< edad;
    return 0;
}
