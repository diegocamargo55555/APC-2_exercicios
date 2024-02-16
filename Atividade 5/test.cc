#include <iostream>
#include "funcoes.h"
#include <assert.h>
using namespace std;

int main()
{
    int a = 3, b = 2;
    assert(mult_por_referencia(&a,&b) == 5); // se 
    
    cout << "executado com sucesso";
    

}
