#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float n1 = 7.3, n2, *fp;
    fp = &n1;
    n2 = *fp;
    cout << "n2:" << n2 << endl
    << "endereço fp:" << &fp << endl;
    printf("%p", &fp);

    cout << "O valor impresso é o mesmo que o endereço de numero1? sim" << endl;

    
}
