#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void get_stream(char[], char[]);
void toUpper(string&);

int main(){
    get_stream("archivo.txt", "archivo2.TXT");
    return 0;
}

void get_stream(char archivo1[], char archivo2[]){
    string s;
    ifstream in_f(archivo1);
    ofstream out_f(archivo2, ios::app);
    if(in_f.is_open()){
        while(in_f){ //lo mismo que poner entrada.good()
           s = "";
           getline(in_f, s);
           cout<<s<<endl;
           toUpper(s);
           out_f<<s<<endl; 
        }
    }
    else{
        cout<<"No se encontro el archivo"<<endl;
    }
    in_f.close();
    out_f.close();    
}

void toUpper(string& s){
    int i=0;
    while(s[i]){
        s[i] = toupper(s[i]);
        i++;
    }
}