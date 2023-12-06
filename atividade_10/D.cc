#include <iostream> 
using namespace std;

int main()
{
    int n_alunos;
    float *notas, nota_total= 0;;
    cin >> n_alunos;
    notas = new float [n_alunos];

    for (int i = 0; i < n_alunos; i++)
    {
        cin >> *(notas+i);
    }
    
    for (int i = 0; i < n_alunos; i++)
    {
        nota_total += *(notas+i);
    }

    cout << "media: "<< nota_total/n_alunos << endl;
}