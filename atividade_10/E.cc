#include <iostream> 
using namespace std;

struct aluno
{
    string nome;
    int serie;
    float nota;
};



int main()
{
    int n;
    float soma = 0;
    cin >> n;
    aluno estudante[n];
    for (int i = 0; i < n; i++)
    {
        
        cout << "nome :" << endl;
        cin >> estudante[i].nome;

        cout << "serie :" << endl;
        cin >> estudante[i].serie;

        cout << "nota :" << endl;
        cin >> estudante[i].nota;
    }

    for (int i = 0; i < n; i++)
    {
        soma += estudante[i].nota;
    }
    
    cout << "media:" << soma/n << endl;

}