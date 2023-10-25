#include <iostream>
#include <string>
using namespace std;

void invert(string str)
{
    int inicio = 0, fim, size;
    size = str.length();
    fim = size;
    while (inicio < size/2)
    {
        swap(str[inicio], str[fim-1]);
        cout << str << endl;
        inicio++;
        fim--;
    }
    
}

int main()
{
    string str = "luminous";

    invert(str);
}