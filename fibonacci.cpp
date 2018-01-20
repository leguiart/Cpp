#include <iostream>

using namespace std;

int fibo(int n);

int main()
{
    int termino, pasado=0, presente=1, futuro;
    cout << "Escribe el termino de la serie de fibonacci a evaluar" << endl;
    cin >> termino;
    cout << fibo(termino) << endl;
    for(int i = 1; i <= termino; i++)
    {
        futuro = presente + pasado;
        pasado = presente;
        presente = futuro;
    }
    cout << pasado << endl;
}

int fibo(int n)
{
    int an;
    if(n<=2)
    {
        if (n==0)
            return 0;
        return 1;
    }
    else
    {
        an = fibo(n-2) + fibo(n-1);
    }
    return an;
}
