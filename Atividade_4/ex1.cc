#include <iostream>
using namespace std;

void troca (int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
int main()
{
    int a = 5, b = 8;
    
    
    troca(&a, &b);

    cout << "a:" << a << endl << "b:" << b << endl;
}