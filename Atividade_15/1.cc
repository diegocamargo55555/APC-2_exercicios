#include <iostream>
#include "busca.h"
using namespace std;

int main()
{
    int array[5] = {2,5,7,9,11};
    cout << busca_bin_r(5, array, 0, 5) << endl;
}