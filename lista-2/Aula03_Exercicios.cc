#include <iostream>
#include <string>
#include "funcoes.h"
using namespace std;

int main()
{   
/* ex 1
    int n1;
    cin >> n1;
    cout << soma_n_numeros(n1) << endl;
*/
/* ex 2
    int ano;
    cin >> ano;
    cout << ano_bissexto(ano) << endl;
*/
/* ex 4
    string senha;
    cin >> senha;
    test_senha(senha);
*/
/* ex 5
    double tempo;
    double taxa;
    cin >> taxa >> tempo;
    cout << juros_compostos(taxa, tempo) << endl;
*/
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