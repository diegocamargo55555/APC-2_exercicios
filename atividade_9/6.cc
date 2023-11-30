#include <iostream>
using namespace std;
static int x = 13;

void vai_um()
{
    x++;
}

int main()
{
    vai_um;
    cout << x << endl;

    vai_um;
    cout << x << endl;

    vai_um;
    cout << x << endl;

    vai_um;
    cout << x << endl;
    
    vai_um;
    cout << x << endl;
}