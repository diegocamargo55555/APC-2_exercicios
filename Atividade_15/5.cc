#include <iostream>
using namespace std;

int busca_sum(int x, int *t, int inicio, int fim){
    int soma = 0;
    soma = t[inicio] + t[fim];
    if (soma == x)
    {
        return inicio;
        return fim;
    }
    else if (soma > x)
    {
        inicio++;
        busca_sum(x, t, inicio, fim);
    }
    else if (soma > x)
    {
        fim++;
        busca_sum(x, t, inicio, fim);
    }
}


int main()
{
    int array[5] = {0,1,2,3,4};
    cout << busca_sum(2, array, 0, 1) << endl;
}