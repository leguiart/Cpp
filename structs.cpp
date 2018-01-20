#include <iostream>
using namespace std;

struct Persona{
    char nombre[30];/** campos **/
    char apellido[30];
    int edad;
};

int main(){
    /** REGISTROS **/
    Persona p;
    cout<<"Ingrese el nombre:";
    cin.getline(p.nombre,30);
    cout<<"Ingrese el apellido:";
    cin.getline(p.apellido,30);
    cout<<"Ingrese la edad:";
    cin>>p.edad;
    cout<<"LOS DATOS SON:"<<endl;
    cout<<"Nombre :"<<p.nombre<<endl;
    cout<<"Apellido:"<<p.apellido<<endl;
    cout<<"Edad :"<<p.edad<<endl;
    return 0;
}
