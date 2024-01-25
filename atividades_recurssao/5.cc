#include<iostream>
using namespace std;

int somatoria(int n)
{
    int soma = 0;
    n += 1;
    while (n--)
    {
        soma += n ;
    }
    return soma;
}

int main()
{
    cout << somatoria(5) << endl ;
}