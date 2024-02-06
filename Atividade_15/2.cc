#include <iostream>
using namespace std;

int busca_binaria(int x, int *v, int n){
    int ini = 0;
    int fim = n-1;
    while(ini <= fim){ 
        int i = (ini + fim) / 2;
        if (v[i] == x)
            return i; 
        if (v[i] < x)
            ini = i-1; 
        else
            fim = i; 
    }
    return -1;
}

int main()
{
    int array[5] = {0,1,2,3,4};
    cout << busca_binaria(2, array, 5) << endl;
}