#include <iostream>
using namespace std;

void ordem(int *a, int *b)
{
    if (a < b)
    {
        a = a;
        b = b;
    }
    else{
        a = b;
        b = a;
    }
}

void int_frac(double *a)
{
    int inteiro = *a;

    cout << inteiro << endl;
    cout << *a << endl;

}



bool has_zero(int *a, int n) 
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0){
            return true;
            cout << "true" << endl;
        }
        else{
            return false;
            cout << "true" << endl;
        }
}