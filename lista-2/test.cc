#include <iostream>
using namespace std;

int main()
{
    int n, menor = INT16_MAX;
    cin >> n;
    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (menor > array[i])
        {
            
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << menor;
    
}