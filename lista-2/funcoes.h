#include <iostream>
#include <string>
using namespace std;

int soma_n_numeros(int n1)
{
    for (int i = 0; i < 5; i++)
    {
        n1 += i;
    }    
    return n1;
}

bool ano_bissexto(int ano)
{
    if (ano % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

// int dec_to_binario(int n)


void test_senha(string senha)
{
    bool maiusculo = 0, minusculo = 0, numero = 0;
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