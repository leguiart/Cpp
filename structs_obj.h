#ifndef __STRUCTS_OBJ_H__
#define __STRUCTS_OBJ_H__

#include <iostream>
using namespace std;

struct Personas{

    typedef struct Persona{
        Persona(){}
        /*Persona(char* n, char* a, int e)
        {
            nombre = n;
            apellido = a;
            edad = e;
        }*/
        char nombre[30];/** campos **/
        char apellido[30];
        int edad;

    }Persona;

    Personas(int t)
    {
        tamanio = t;
    }

    void llenaPersonas()
    {
        for(int i=0; i<tamanio; i++)
        {
            cout<<"Ingrese los datos del elemento:["<<i<<"]: "<<endl;

            cin.ignore(256, '\n');
            cout<<"Ingrese el nombre:";
            cin.getline(p[i].nombre,30);

            cout<<"Ingrese el apellido:";
            cin.getline(p[i].apellido,30);

            cout<<"Ingrese la edad:";
            cin>>p[i].edad;
        }
    }

    void muestraPersonas()
    {
        cout<<"   Nombre     Apellido     edad"<<endl;
        for(int i=0; i<tamanio; i++)
        {
            cout<<i<<"    "<<p[i].nombre<<"    "<<p[i].apellido<<"    "<<p[i].edad<<endl;
        }
    }

    Persona p[30];
    int tamanio;

};

#endif // __STRUCTS_OBJ_H__
