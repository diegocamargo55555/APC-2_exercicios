#include <iostream>
#include <iomanip>
using namespace std;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;
typedef struct{
    int id;
    char tipo;
    string titular;
    Data abertura;
    float saldo;
} Conta;
int main(){
    Conta novaConta = {12345, 'C', "Paulo Figueira de Lima", 05, 02, 2021, 100.00};
    novaConta.abertura.dia = 04;
    cout << fixed << setprecision(2);
    if (novaConta.tipo == 'C')
    {
        cout << "corrente" << endl;
    }
    else{
        cout << "poupança" << endl;
    }
    
    cout << novaConta.id << " " << novaConta.titular << endl;
    cout << "Cliente desde " << novaConta.abertura.dia << "/";
    cout << novaConta.abertura.mes << "/" << novaConta.abertura.ano;
    cout << endl << "Saldo: R$" << novaConta.saldo << endl;
    return 0;
}