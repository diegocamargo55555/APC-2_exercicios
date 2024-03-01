#include <iostream>
#include <cmath>

int main() {
    double principal = 1000.0; 
    double rate = 0.05; 
    double time = 2.0; 

    double compoundInterest = principal * std::pow(1 + rate, time);

    std::cout << "O montante é: " << compoundInterest << std::endl;

    return 0;
}
