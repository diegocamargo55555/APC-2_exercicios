#include <iostream>
#include <string>
using namespace std;


void contar_caracter (string frase)
{
//    cout << frase[0] << endl;
/*
    int i = 0;
    while (frase[i] != '\0')
    {
        i++;
    }
    cout << i << endl;
*/
    
    
    int count = 0;
    for (int i = 0; frase[i] != '\0' ; i++)
    {
        cout << frase[i];
        count++;
    }    
    cout << count << endl;
    
}

int main()
{
    string frase = "ola mundo ";

    contar_caracter(frase);


}