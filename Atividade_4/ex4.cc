#include <iostream>
using namespace std;

string count_vogais(string str)
{
    int i = 0, vogais = 0;
    // while (str[i] != '/0')
    // {
    //     i++;
    //     if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E'|| str[i] == 'i' || str[i] == 'I'|| str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    //     {
    //         vogais++;
    //     }      
    // }
    
    for (char i :str)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E'|| str[i] == 'i' || str[i] == 'I'|| str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            vogais++;
        }
    }
    cout << vogais << endl;
    
}



int main()
{
    string str = "luminous";

    

}