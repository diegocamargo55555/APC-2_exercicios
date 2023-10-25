#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 8, *l = NULL, *u = NULL;
    l = &a;
    u = &b;
    

    cout << "a:" << *l << endl << "b:" << *u << endl;
}