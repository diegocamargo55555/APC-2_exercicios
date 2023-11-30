#include <iostream>
using namespace std;

int main()
{
    int L = 5, *p;
    p = &L;
    cout << "endereço1: " << p << endl;

    cout << "endereço2: " << p + 8 << endl;
}