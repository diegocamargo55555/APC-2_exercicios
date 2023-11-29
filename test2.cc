#include <iostream>
using namespace std;
static int x;

void fun(int y){
    x += y;
    cout << "x = " << x << endl;
    x++;
}
int main(){

    fun(10);
    fun(20);
    fun(30);
    cout << "x final: " << x << endl;
    
}


