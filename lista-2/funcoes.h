#include <iostream>
#include <string>
using namespace std;

float potencia(float base, int expoente)
{
    float resultado, expoente_mostrar;
    resultado = 1;
    expoente_mostrar = expoente; 

    while (expoente--)
    {
        resultado = resultado * base;
    }
    return resultado;
    
}

int soma_n_numeros(int n1)
{
    for (int i = 0; i < 5; i++)
    {
        n1 += i;
    }    
    return n1;
}

bool ano_bissexto(int ano)
{
    if (ano % 100 == 0)
    {
        if (ano % 400 == 0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    else{
        if (ano % 4 == 0)
        {
            return true;
        }
        else{
            return false;
        }
    }
}

// int dec_to_binario(int n)

void test_senha(string senha)

{
    bool maiusculo = 0, minusculo = 0, numero = 0;
    int size_senha = 0;
    while (senha[size_senha] != '\0')
    {
        if (senha[size_senha] > 64 && senha[size_senha] < 91)
        {
            maiusculo = 1;
        }
        if (senha[size_senha] > 96 && senha[size_senha] < 123)
        {
            minusculo = 1;
        }
        if (senha[size_senha] >=0 && senha[size_senha <10])
        {
            numero = 1;
        }
        size_senha++;
    }
    if (size_senha >= 8 && maiusculo == 1 && minusculo == 1 && numero == 1)
    {
        cout << "senha valida" << endl ;
    }
    else{
        cout << "senha invalida" << endl;
    }
}

float juros_compostos(float taxa, int tempo)
{
    double valor_final, valor_inicial = 100, taxa1, taxa_tempo;
    taxa1 = 1 + (taxa/100);
    taxa_tempo = potencia(taxa1, tempo);

    valor_final = valor_inicial * taxa_tempo;
    return valor_final;
}



void ordenar_array(int matriz[], int tam){
    int temp;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(matriz[i] < matriz[j]){
                temp = matriz[i];
                matriz[i] = matriz[j];
                matriz[j] = temp;
            }
        }
    }
}