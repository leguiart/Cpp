#include "structs_obj.h"

int main(){
    /** REGISTROS **/

    int tam;
    cout<<"Ingrese el tamaño de la tabla: "<<endl;
    cin>>tam;
    Personas pers = Personas(tam);
    pers.llenaPersonas();
    pers.muestraPersonas();

    return 0;
}
