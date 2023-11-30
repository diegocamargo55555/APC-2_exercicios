#include <iostream>
using namespace std;

int main()
{
    int L = 5, u = 8, *p, *p2;
    p = &L;
    p2 = &u;
    cout << "endereço1: " << p << endl;

    cout << "endereço2: " << p2 << endl;
    cout << "p - u: " << p - p2 << endl;
}