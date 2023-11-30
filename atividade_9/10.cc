#include <iostream>
using namespace std;

int main()
{
    int L = 5, U = 8, *M, *I;
    M = &L;
    I = &U;

    if (M > I)
    {
        cout << "M esta no maio endereço que é:" << M << endl;
    }
    else if (M < I)
    {
        cout << "I esta no maio endereço que é:" << I << endl;
    }
    
    

}