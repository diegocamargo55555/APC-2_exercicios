#include <iostream>
using namespace std;

int mult(int m, int n)
{
    if(n == 1)
    {
        return m;
    }
    else
    {
        return m + mult(m, n-1);
    }
    
}

int main()
{
    cout << mult(6,6) << endl;
}