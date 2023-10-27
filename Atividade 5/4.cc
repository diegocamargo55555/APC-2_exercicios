#include <iostream>
#include "funcoes.h"
using namespace std;

int main()
{
    int a = 13;
    add_10_por_referencia(&a);
    cout << a << endl;
}