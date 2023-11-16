#include <iostream>
#include "funcoe_e_struct.h"
using namespace std;

int main(){
    int N = 0;
    Aluno sala1[3];

    for (int i = 0; i < 3; i++)
    {
        N += prench_nonP(sala1[N]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        puts(&sala1[i]);
        cout << endl;
    }
}