#include "proveedores.h"

int main()
{
    int tam;
    cout<<"Introducir tamaño de la tabla: "<<endl;
    cin>>tam;
    Proveedores prov = Proveedores(tam);
    prov.llenaProveedores();
    prov.muestraProveedores();
    prov.masBarato();
    prov.masCaro();

    return 0;
}
