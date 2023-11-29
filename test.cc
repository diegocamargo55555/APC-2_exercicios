#include <iostream>
using namespace std;

int main() {

    float *pa, *pb;

    float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    pa = &vet[0];

    pb = &vet[9];

    printf("pa = %d pb = %d", pa, pb);

    printf("\npb - pa = %d", pb - pa);
    cout << endl;
    return 0;
}
