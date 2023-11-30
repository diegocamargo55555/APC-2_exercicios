#include <iostream> 
using namespace std;
void regi()
{  
    register int tam = 5;
    tam++;
    cout << tam << endl;
}
int main()
{
    regi();
    regi();
    regi();
}