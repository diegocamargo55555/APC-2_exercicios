#include <iostream>
using namespace std;

int main()
{
    bool maiusculo = 0, minusculo = 0, numero = 0;
    string senha;
    cin >> senha;
    int size_senha = 0;
    while (senha[size_senha] != '\0')
    {
        if (senha[size_senha] > 64 && senha[size_senha] < 91)
        {
            maiusculo = 1;
        }
        if (senha[size_senha] > 96 && senha[size_senha] < 123)
        {
            minusculo = 1;
        }
        if (senha[size_senha] >=0 && senha[size_senha <10])
        {
            numero = 1;
        }
        size_senha++;
    }
    if (size_senha >= 8 && maiusculo == 1 && minusculo == 1 && numero == 1)
    {
        cout << "senha valida" << endl ;
    }
    else{
        cout << "senha invalida" << endl;
    }
    


    

    
}