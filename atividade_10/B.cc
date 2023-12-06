#include <iostream>
using namespace std;

int main()
{
    int *v, n;
    v = new int[10];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        *(v+i) = i;
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(v+i) <<endl;
    }
    

    delete v;

    
}