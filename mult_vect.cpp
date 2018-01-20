#include <iostream>

using namespace std;

int main()
{
    /*Leer dos arreglos bidimensionales y guardar su producto en un tercero*/
    int arr1[3], arr2[3], arr3[3];
    for(int i = 0; i<=2; i++)
    {
        cout<<"arr1["<<i<<"]: ";
        cin>>arr1[i];
    }

    for(int i = 0; i<=2; i++)
    {
        cout<<"arr2["<<i<<"]: ";
        cin>>arr2[i];
    }

    for(int i = 0; i<=2; i++)
    {
        arr3[i] = arr1[i]*arr2[i];
    }

    for(int i = 0; i<=2; i++)
    {
        cout<<"arr3["<<i<<"]: "<<arr3[i]<<endl;
    }

    return 0;
}
