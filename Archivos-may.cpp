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
    ofstream of1(archivo1, ios::app);
    ofstream of2(archivo2, ios::app);
    cout<<"Obtener stream de caracteres, salir con 0: "<<endl;
    while(true){
        s = "";
        getline(cin, s);
        of1<<s<<endl;
        toUpper(s);
        of2<<s<<endl;
        if(s[s.size()-1] == '0')
            break;
    }
    of1.close();
    of2.close();
}

void toUpper(string& s){
    int i=0;
    while(s[i]){
        s[i] = toupper(s[i]);
        i++;
    }
}

