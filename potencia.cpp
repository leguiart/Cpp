#include <iostream>
using namespace std;

int potencia(int, int, int);

int main()
{
    cout<<potencia(2, 8, 2)<<endl;

    return 0;
}

int potencia(int num, int n, int aux)
{

    if(n<=0)
    {
        return 1;
    }
    else if(n==1)
    {
        return num;
    }
    else
    {
        num = aux*num;
        return potencia(num, n-1, aux);
    }
}
