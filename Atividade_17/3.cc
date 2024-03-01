#include <iostream>
using namespace std;

int main()
{
    int fat@, n;
    cin >> n;
    fat = n;
    
    for (int i = 1; i < n-1; i++)
    {
        fat *= n-i;
    }
    cout << fat << endl;
}