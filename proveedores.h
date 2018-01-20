#ifndef __PROVEEDORES_H__
#define __PROVEEDORES_H__

#include <iostream>
using namespace std;

/** Defino un nuevo tipo struct por portabilidad y legibilidad del codigo
    Además en los compiladores de C más estrictos para crear una nueva estructura tendria que
    escribir: struct Proveedor p; con el typedef unicamente basta con escribir: Proveedor p
    es decir, me ahorro tener que escribir la palabra reservada struct cada vez,  en general
    typedef sirve para eso con cualquier otro tipo del lenguaje**/

typedef struct Proveedor
{
    char nombre[30];
    int cantidadVendida;
    int precioUnitario;
    int importe;
}Proveedor;

struct Proveedores
{
    Proveedores(int t)
    {
        tamanio = t;
    }

    void llenaProveedores()
    {
        for(int i=0; i<tamanio; i++)
        {
            cout<<"Ingrese los datos del elemento:["<<i<<"]: "<<endl;

            cin.ignore(256, '\n');
            cout<<"Ingrese el nombre: ";
            cin.getline(p[i].nombre,30);

            cout<<"Ingrese cantidad vendida: ";
            cin>>p[i].cantidadVendida;

            cout<<"Ingrese precio unitario: ";
            cin>>p[i].precioUnitario;
            cout<<endl;

            p[i].importe = p[i].cantidadVendida*p[i].precioUnitario;
        }
    }

    void muestraProveedores()
    {
        cout<<"   Nombre     Cantidad     Precio Unitario     Importe"<<endl;
        for(int i=0; i<tamanio; i++)
        {
            cout<<i<<"    "<<p[i].nombre<<"              "<<p[i].cantidadVendida<<"            "<<p[i].precioUnitario<<"              "<<p[i].importe<<endl;
        }
    }

    void masBarato()
    {
        int indice = 0, bara = p[0].precioUnitario;
        cout<<"Proveedor mas barato:"<<endl;
        cout<<"   Nombre     Cantidad     Precio Unitario     Importe"<<endl;
        for(int i=1; i<tamanio; i++)
        {
            if(p[i].precioUnitario<bara)
            {
                bara = p[i].precioUnitario;
                indice = i;
            }
        }
        cout<<"    "<<p[indice].nombre<<"              "<<p[indice].cantidadVendida<<"            "<<p[indice].precioUnitario<<"              "<<p[indice].importe<<endl;
    }

    void masCaro()
    {
        int indice = 0, caro = p[0].precioUnitario;
        cout<<"Proveedor mas caro:"<<endl;
        cout<<"   Nombre     Cantidad     Precio Unitario     Importe"<<endl;
        for(int i=1; i<tamanio; i++)
        {
            if(p[i].precioUnitario>caro)
            {
                caro = p[i].precioUnitario;
                indice = i;
            }
        }
        cout<<"    "<<p[indice].nombre<<"              "<<p[indice].cantidadVendida<<"            "<<p[indice].precioUnitario<<"              "<<p[indice].importe<<endl;
    }

    Proveedor p[30];
    int tamanio;
};

#endif // __PROVEEDORES_H__
