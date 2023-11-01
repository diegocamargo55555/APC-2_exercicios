#include <iostream>
using namespace std;
//ex1
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
// EX 2 A
void int_frac(double *a)
{
    int inteiro = *a;

    cout << inteiro << endl;
    cout << *a << endl;

}
// ex 2 B
bool has_zero(int a[], int n) {
    int i, verif;
    for (i = 0; i < n; i++){
        if (a[i] == 0){
            verif = 1;
        }
    }
    if (verif == 1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}   
// EX 2 C1

void maior(int a[], int n)
{
    int maior = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
        }
    }
    cout << maior << endl;
}
//  EX C2
void media(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum/n << endl;
}
//  EX C3
void positivos(int a[], int n)
{
    int positivos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positivos += 1;
        }
    }
    cout << positivos << endl;
}

void input_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
}

void maior_menor(int *a, int n)
{
    int maior = INT16_MIN, menor = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
        }
        if (a[i] < menor)
        {
            menor = a[i];
        }
        
    }
    cout << maior << endl << menor << endl;
    
}