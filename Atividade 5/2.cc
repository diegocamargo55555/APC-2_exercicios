#include <iostream>
#include "funcoes.h"
using namespace std;

int main()
{
    int a = 5, b = 8 ;
    cout << mult_por_referencia(&a, &b) << endl;
}