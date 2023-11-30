#include <iostream> 
using namespace std;
int L = 5;
int main()
{
    int array[L] = {8, 5, 3, 13, 4}, *p;
    p = &array[0];

    while (L--)
    {
        cout << *p << endl;
        p++;
    }
}