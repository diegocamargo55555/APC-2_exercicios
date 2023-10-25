#include <iostream>
using namespace std;

int dobro(int *n)
{
    *n *= 2;
    return *n;
}

int main()
{
    int a = 5;

    cout << dobro(&a) << endl;
}