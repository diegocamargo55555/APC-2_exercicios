#include <iostream>
#include "funcoe_e_struct.h"
using namespace std;

int main(){
    Aluno n1;

    n1.nome = "Luminous Valentine";
    n1.idade = 23;
    n1.nota = 8.54 ;

    cout << "nome: " << n1.nome << endl
        << "idade: " << n1.idade << endl
        << "nota: " << n1.nota << endl;

}