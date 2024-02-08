#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ex 1
int mult(int a, int b)
{
    return a*b;
}

// ex 2 multiplicação por referencia x * b
int mult_por_referencia(int* a, int* b)
{
    return (*a) * (*b);
}

// ex3
int add_10(int a)
{
    return a +10;
}

// ex 4
void add_10_por_referencia(int* a)
{
    *a += 10;
}

// ex 5
int sub_5(int a)
{
    return a -5;
}

//ex6
void sub_5_por_referencia(int* a)
{
    *a -= 5;
}

//ex7
void invert(vector<int> &arr)
{
    int size, tam;
    size = arr.size();
    int invertido[size];
    tam = size -1;

    for (int i = 0; i < size; i++)
    {
        invertido[tam] = arr[i];
        tam--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << invertido[i] << " " << endl;
    }
    
}

//ex8
void convert_maiusc(string &str)
{
    int size;
    size = str.length();

    for (int i = 0; i < size; i++)
    {
        if (str[i] > 96)
        {
            str[i] -= 32;
        }
    }
    
}

