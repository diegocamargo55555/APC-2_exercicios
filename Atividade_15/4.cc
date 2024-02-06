#include <iostream>
using namespace std;

int busca_bin_r(int x, int *v, int inicio, int fim){
    if (inicio > fim)
        return -1;
    else{
        int meio = (inicio + fim)/2;
    if (x == v[meio])
        return v[meio-1];
    else
        if (x < v[meio])
            busca_bin_r(x, v, inicio, meio - 1);
        else
            busca_bin_r(x, v, meio + 1, fim);
    }
}

int main()
{
    int array[5] = {2,5,7,9,11};
    cout << busca_bin_r(5, array, 0, 5) << endl;
}