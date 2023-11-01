#include <iostream>
using namespace std;

int verifica(int n) {
    int n1, n2, s;
    n1 = n / 100;
    n2 = n % 100;
    s = n1 + n2;
    printf("\nSoma %d ", s);
    if (s*s == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int num, x;
    do {
        scanf("%d", &num);
    } while (num < 1000 || num > 9999);
    x = verifica(num);
    if (x == 1)
        printf("\nNumero --> %d possui a caracteristica \n", num);
    else
        printf("\nNumero --> %d nao possui ", num);
}