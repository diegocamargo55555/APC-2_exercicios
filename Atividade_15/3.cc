#include <iostream>
using namespace std;

int buasca_sec_r(int x, int *array, int i, int fim )
{
    if (array[i] == x)
    {
        return array[i];
    }
    else
    {
        i++;
        buasca_sec_r(x, array, i, fim );
    }
    
}

int main()
{
    int array[5] = {0,1,2,3,4};
    cout << buasca_sec_r(2, array, 0, 5) << endl;
}
