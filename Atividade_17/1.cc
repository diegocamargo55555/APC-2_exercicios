#include <iostream>
using namespace std;

int main()
{
    int dia[2], mes[2], ano[2];
    
    for (int i = 0; i < 2; i++)
    {
        cout << "digite um dia";
        cin >> dia[i];
        cout << "digite um mes";
        cin >> mes[i];
        cout << "digite um ano";
        cin >> ano[i];
    }
    
    if (ano[1] > ano[0])
    {
        cout << "a primeira data inserida é anterior à segunda.";
    }
    else if (mes[1] > mes[0])
    {
        cout << "a primeira data inserida é anterior à segunda.";
    }
    else if (ano[1] > ano[0])
    {
        cout << "a primeira data inserida é anterior à segunda.";
    }
    
    
    
    
}