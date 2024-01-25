#include <iostream>
using namespace std;

int somatoria(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + somatoria(n-1);
    }
    
}

int main()
{
    cout << somatoria(5) << endl;
}