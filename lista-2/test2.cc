#include <iostream>
using namespace std;

void ordenar_array(int matriz[], int tam){
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
    int n_inputs;
    cin >> n_inputs;
    int array[n_inputs];
    
    for (int i = 0; i < n_inputs; i++)
    {
        cin >> array[i];
    }

    ordenar_array(array, n_inputs);
    
    for (int i = 0; i < n_inputs; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}