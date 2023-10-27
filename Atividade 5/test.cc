#include <iostream>
using namespace std;

void print(string &str){
    str+=" and sisters.";
}
int main(){
    string s ="hello brother";
    print(s);
    cout<<s<<endl;
}