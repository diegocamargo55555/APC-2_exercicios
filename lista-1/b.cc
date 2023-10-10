#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int multiplo4(int n1)
{
    if (n1 % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int par_impar(int n1)
{
    if (n1 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int soma_n(int n1, int n2)
{
    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            n1 =+ 1;
            n2++;
        }
        return n1;
    }
    
    if (n1 > n2)
    {
        while (n2 <= n1)
        {
            n2 += 1;
            n1++;
        }
        return n2;
    }
    
}

int volume_esfera(float raio)
{
    float volume;
    double pi = M_PI;

    volume = (4 * pi * raio * raio *raio) / 3;

    return volume;
}

int fatorial(int n1) 
{
    int n1, fatorial;
    fatorial = n1;

    for (int i = n1-1; i > 0 ; i--)
    {
        fatorial = fatorial * (n1-i);
    }
    return fatorial;
}

int potencia(float base, float expoente)
{
    float base, expoente, resultado = 1, expoente_mostrar;
    expoente_mostrar = expoente; 

    while (expoente--)
    {
        resultado = resultado * base;
    }

    return resultado;
}

int main()
{

}