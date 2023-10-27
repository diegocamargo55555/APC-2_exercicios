#include <iostream>
#include "funcoes.h"
using namespace std;

int main()
{
    int a = 13;
    sub_5_por_referencia(&a);
    cout << a << endl;
}