#include <iostream>
using namespace std;

int main()
{
    int lumi[] = {5,8,4,4,7}, *l= NULL ;

    for (int i = 0; i < 5; i++)
    {
        l = &lumi[i];
        cout << *l << " ";
    }
    cout << endl;
    
}