#include <iostream>
using namespace std;


int main()
{
    int array[5] = {5,8,13,3,4}, temp;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    
    

}