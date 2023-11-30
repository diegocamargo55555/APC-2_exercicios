#include <iostream>
using namespace std;

int main()
{
    int L = 5, u = 8, *p, *p2;
    p = &L;
    p2 = &u;
    if (*p == *p2)
    {
        cout << "são iguais.";
    }
    else{
        cout << "são diferentes.";
    }
}