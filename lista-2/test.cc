#include <iostream>
using namespace std;

void bubble_sort(int matriz[], int tam){
    int temp;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(matriz[i] < matriz[j]){
                temp = matriz[i];
                matriz[i] = matriz[j];
                matriz[j] = temp;
            }
        }
    }
}

int main()
{
    int valores[] = {4, 6, 2, 8, 1, 9, 3, 0, 11};
    int const quant_elem = 9;

    // imprime a matriz sem a ordenação
    for(int i = 0; i < quant_elem; i++){
        cout << valores[i] << " ";
    }

    // vamos ordenar a matriz
    bubble_sort(valores, quant_elem);

    // imprime a matriz ordenada
    cout << endl;
    for(int i = 0; i < 9; i++){
        cout << valores[i] << " ";
    }
    cout << endl;
}