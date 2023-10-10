#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void multiplo4()
{
    int n1;
    cin >> n1;
    if (n1 % 4 == 0)
    {
        cout << "é divisivel por quatro"<< endl;
    }
    else
    {
        cout << "não é par";
    }
}

void par_impar()
{
    int n1;
    cin >> n1;
    if (n1 % 2 == 0)
    {
        cout << "é par";
    }
    else
    {
        cout << "nao é par";
    }
}

void soma_n()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            n1 =+ 1;
            n2++;
        }
    }
    
    if (n1 > n2)
    {
        while (n2 <= n1)
        {
            n2 += 1;
            n1++;
        }
    }
    
}

void volume_esfera()
{
    float raio, volume;
    double pi1 = M_PI;

    cin >> raio;

    volume = (4 * pi1 * raio * raio *raio) / 3;

    cout << "volume = " << volume << endl;

}

void fatorial() 
{
    int n1, fatorial;
    cin >> n1;
    fatorial = n1;

    for (int i = n1-1; i > 0 ; i--)
    {
        fatorial = fatorial * (n1-i);
    }
    cout << "fatorial = " << fatorial << endl;
}

void potencia()
{
    float base, expoente, resultado, expoente_mostrar;
    cin >> base >> expoente;
    resultado = 1;
    expoente_mostrar = expoente; 

    while (expoente--)
    {
        resultado = resultado * base;
    }

    cout << base << " elevado a " << expoente_mostrar << " = " << resultado << endl;
    
}

int main()
{
    potencia();
}