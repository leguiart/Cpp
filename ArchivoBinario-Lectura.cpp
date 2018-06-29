#include <iostream>
#include <fstream>
using namespace std;

struct Persona{
    char nombre[8];
    int edad;
};

int main(){
    /***** ARCHIVOS BINARIOS LECTURA ******/
    /**
        EL PROCESO DE LECTURA ES
            DESDE ARCHIVO --> A MEMORIA
                (es byte por byte)
                1.- A que punto de la memoria voy a pasar los bytes
                2.- Cuantos bytes voy a pasar
    **/
    /****
        1er parametro.-Un puntero de tipo char  que guarde el byte de inicio del registro
        2do parametro.- Cuantos bytes voy a pasar
    ****/
    Persona p;
    ifstream entrada;
    entrada.open("data.bin",ios::binary);
    while(entrada.read((char*)&p,sizeof(Persona))){ //!entrada.eof() provoca corrida de escritorio de abajo
        /**********
            EOF         READ?       P
             NO          SI        Gian,23
             NO          SI        Gian,23
             NO          NO        Gian,23
             SI
        ************/
        cout<<p.nombre<<endl;
        cout<<p.edad<<endl;
    }
    entrada.close();
    return 0;
}
