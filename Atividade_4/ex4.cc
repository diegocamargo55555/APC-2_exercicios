#include <iostream>
using namespace std;

void count_vogais(string &str, int* vogais)
{
    *vogais = 0;
    
    for (char i : str)
    {
        if (i == 'a' || i == 'A' || i == 'e' || i == 'E'|| i == 'i' || i == 'I'|| i == 'o' || i == 'O' || i == 'u' || i == 'U')
        {
            (*vogais)++;
        }
    }
}

int main()
{
    string str = "luminous";
    int vogais;

    count_vogais(str, &vogais);

    cout << vogais << endl;

}