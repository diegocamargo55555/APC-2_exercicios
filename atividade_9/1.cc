#include <iostream>
using namespace std;

int main()
{
    int L = 8, *p;
    p = &L;
    cout << "endereço1: " << p << endl;

    p++;
    cout << "endereço2: " << p << endl;

    p--;
    cout << "endereço3: " << p << endl;

}