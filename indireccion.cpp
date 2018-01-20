#include <iostream>
using namespace std;

int main(){
    /** Indireccion o derreferenciacion, voy a acceder
        a lo que está apuntando el apuntador o puntero
        * -> indireccion -> dentro de la direccion
     **/
    int var = 10*10;
    int *puntero = &var;/** 4 bytes **/
    //*puntero = 50;
    cout<<"El valor de var es "<<*puntero<<endl;
    cout<<"La direccion de var es "<<puntero<<endl;
    cout<<"La direccion del puntero es "<<&puntero<<endl;
    cout<<"El valor de var es "<<var<<endl;
    *puntero = 50;
    cout<<"El valor de puntero es "<<*puntero<<endl;
    cout<<"El valor de var es "<<var<<endl;
    return 0;
}
