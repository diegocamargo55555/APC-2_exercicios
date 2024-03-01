#include <iostream>

int main() {
    double precoProduto = 100.0; // Preço original do produto
    double desconto = 0.1; // Desconto de 10%
    double taxaAdicional = 0.05; // Taxa adicional de 5%

    // Calcula o preço com desconto
    double precoComDesconto = precoProduto * (1 - desconto);

    // Calcula o valor da taxa adicional
    double valorTaxaAdicional = precoComDesconto * taxaAdicional;

    // Adiciona a taxa adicional ao preço com desconto
    double precoFinal = precoComDesconto + valorTaxaAdicional;

    std::cout << "O preço final do produto, com desconto e taxas adicionais, é: " << precoFinal << std::endl;

    return 0;
}
