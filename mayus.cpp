#include <iostream>

using namespace std;

int main()
{
    /*Leer una cadena en minusculas y retornar en mayusculas*/
    char nombre[30], c;
    int i = 0;
    cout<<"Ingresar nombre en minusculas: ";
    cin.getline(nombre, 30);

    /* '\0' == false */
    while(nombre[i])
    {
        c = toupper(nombre[i]);
        nombre[i] = c;
        i++;
    }
    cout<<"Tu nombre en mayusculas es: "<<nombre;

    return 0;
}
