#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    int idade;
    float nota;
};

int prench(Aluno *aluno)
{
    cout << "nome: ";
    cin >> aluno -> nome;
    cout << "idade: ";
    cin >> aluno ->idade;
    cout << "nota: ";
    cin >> aluno -> nota;

    return 1;
}

int prench_nonP(Aluno aluno)
{
    cout << "nome: ";
    cin >> aluno.nome;
    cout << "idade: ";
    cin >> aluno.idade;
    cout << "nota: ";
    cin >> aluno.nota;

    return 1;
}

void puts(Aluno *aluno)
{
    cout << "nome: " << aluno->nome << endl
        << "idade: " << aluno->idade << endl
        << "nota: " << aluno->nota << endl;
}

void puts_nonP(Aluno aluno)
{
    cout << "nome: " << aluno.nome << endl
        << "idade: " << aluno.idade << endl
        << "nota: " << aluno.nota << endl;
}