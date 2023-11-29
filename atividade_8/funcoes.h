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
    int array_par[10]= {0}, array_impar[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        if (array1[i] % 2 == 0)
        {
            array_par[i] = array1[i];
        }
        else
        {
            array_impar[i] = array1[i];
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << "par:" << array_par[i] << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "impar:" << array_impar[i] << endl;
    }
}