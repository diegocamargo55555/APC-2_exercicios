#include <iostream>
using namespace std;

void dobro(int *n)
{
    *n *= 2;
}

int main()
{
    int a = 5;

    dobro(&a);

    cout << a << endl;

}   