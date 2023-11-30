#include <iostream> 
using namespace std;
void regi(register int tam)
{  
    tam++;
    cout << tam << endl;
}
int main()
{
    register int tam = 5;
    regi(tam);
    regi(tam);
    regi(tam);
}