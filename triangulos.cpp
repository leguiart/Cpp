#include <iostream>

using namespace std;

int main()
{
    /*programa que dibuje triangulos con cualquier caracter y una dimension dada*/
    //Definiendo variables
    char caracter;
    int dim;
    cout<< "Ingresa caract�r con el cual quieras formar un tri�ngulo:" <<endl;
    cin >> caracter;

    cout << "Ingresar dimensi�n:" << endl;
    cin >> dim;

    for(int j = 0; j <= dim; j++)
    {
        for(int i = 0; i <= j; i++ )
        {
            cout << caracter;
        }
        cout << endl;
    }
    return 0;
}
