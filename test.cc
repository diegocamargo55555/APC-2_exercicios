#include <iostream>
using namespace std;

int main(){

    int *n;

    if (!(n = new(nothrow) int)){

    cout << "Falha de alocacao de memoria" << endl;

    return -1;

    }

    *n = 58134;

    cout << endl << *n;

    delete n;
    
    cout << endl << *n;
    
    n = NULL;
    
    cout << endl << *n;
    
    return 0;
}