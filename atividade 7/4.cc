#include <iostream>
#include "funcoe_e_struct.h"
using namespace std;

struct curso
{
    Aluno estudante;
};


int main(){
    curso variavel;

    prench(&variavel.estudante);

    puts(&variavel.estudante);
}