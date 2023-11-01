#include <iostream>
#include "funcoes.h"
using namespace std;

int main()
{
    /* EX 1
    int a = 5, b = 8;
    ordem(&b,&a);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    */

/* EX 2 A
    double a = 5.83114;
    int_frac(&a);
*/

    int aray[5] = {5,8,0,11,4};
    cout << has_zero(aray, 5) << endl;

}