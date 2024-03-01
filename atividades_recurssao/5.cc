#include<iostream>
using namespace std;

void bubble (int *v, int n){
    int i, j;
    for (i = n-1; i > 0; i--)
        for (j = 0; j < i; j++)
            if (v[j] > v[j+1])
                troca (&v[j], &v[j+1]);
}
// varialvel global
int j = 0;

void troca (int *n1, int *n2){
    int *temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int rec(int *v, int n){
    
    if (v[j] > v[j+1] && j < n)
        troca (&v[j], &v[j+1]);
        return rec(v, n-1);
    else
    
        return v[];
        
    j +=1;
}