#include <iostream>

using namespace std;

int main()
{
    char cadena1[] = "Luis Andres Eguiarte";
    char cadena2[] = {'L', 'u', 'i', 's', '\0'}; //\0 nos indica el fin de una cadena
    char cadena3[30];

    cout<<cadena1<<endl;
    cout<<cadena2<<endl;

    cout<<"Ingresar una cadena: ";
    cin.getline(cadena3, 30); //getline es un metodo para obtener una cadena incluyendo espacios
    cout<<"La cadena es: "<<cadena3<<endl;

    return 0;
}
