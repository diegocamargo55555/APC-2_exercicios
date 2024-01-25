#include <iostream>
using namespace std;

int potencia(int base, int exp)
{
    if(exp == 1)
    {
        return base;
    }
    else
    {
        return base * potencia(base, exp-1);
    }
}

int main()
{
    cout << potencia(5,5) << endl;
}