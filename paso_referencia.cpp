#include <iostream>
using namespace std;

void cambiarCien(int&);

int main()
{
    int var = 5;

    cout<<var<<endl;
    cambiarCien(var);
    cout<<var<<endl;
    return 0;
}

/**  PASO POR VALOR
    Paso unicamente EL VALOR de la variable
    ----
    int a = numero;
    PASO POR REFERENCIA
    Paso LA REFERENCIA de una variable
    ----
    int &a = numero;
 **/
void cambiarCien(int &a)
{
    a = 100;
}
