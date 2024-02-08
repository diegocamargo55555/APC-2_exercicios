#include <iostream>
#include "funcoes.h"
using namespace std;


int assert(int result, int esperado)
{
    if (result == esperado)
    {
        cout << "resultado correto" << endl;
    }
    else
    {
        cout << "resultado inesperado " << result << endl;
    }
}



int test2(int a, int b, int esperado)
{
    int result;
    result = mult_por_referencia(&a,&b);
    assert(result, esperado);
}