#include <iostream>
using namespace std;

int busca_bin_r(int x, int *v, int inicio, int fim){
    if (inicio > fim)
        return -1;
    else{
        int meio = (inicio + fim)/2;
    if (x == v[meio])
        return v[meio];
    else
        if (x < v[meio])
            busca_bin_r(x, v, inicio, meio - 1);
        else
            busca_bin_r(x, v, meio + 1, fim);
}
}