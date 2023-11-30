#include <iostream>
#define L 5
using namespace std;

void min_max(int a[], int *min, int *max)
{
    for (int i = 0; i < L; i++)
    {
        if (*max < a[i])
        {
            *max = a[i];
        }
    }
    
    for (int i = 0; i < L; i++)
    {
        if (*min > a[i])
        {
            *min = a[i];
        }
    }
}

void sum_array(int array1[], int array2[])
{
    int sum[L];
    for (int i = 0; i < L; i++)
    {
        sum[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < L; i++)
    {
        cout << "sum1: " << sum[i] << endl;
    }
}

void array_par_impar(int array1[])
{
    int array_par[10]= {0}, array_impar[10] = {0}, p_par = 0, p_impar = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array1[i] % 2 == 0)
        {
            array_par[p_par] = array1[i];
            p_par++;
        }
        else
        {
            array_impar[p_impar] = array1[i];
            p_impar++;
        }
        
    }
    
    for (int i = 0; i < p_par; i++)
    {
        cout << "par:" << array_par[i] << endl;
    }

    for (int i = 0; i < p_impar; i++)
    {
        cout << "impar:" << array_impar[i] << endl;
    }
}