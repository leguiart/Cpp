#include <iostream>
using namespace std;

int main(){
    /** PUNTEROS Y ARREGLOS **/
    int array[] ={10,20,30,40};
    cout<<*array<<endl;
    cout<<*(array+1)<<endl;
    cout<<*(array+2)<<endl;
    cout<<*(array+3)<<endl;
    //cout<<*(array+4)<<endl;//regresa basura
    return 0;
}
