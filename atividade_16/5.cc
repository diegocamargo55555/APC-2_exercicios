#include <iostream>

void checkTemperature(int temperature) {
    if (temperature > 100) {
        std::cout << "Muito quente!";
    } else if (temperature > 70) {
        std::cout << "Clima agradável.";
    } else if (temperature > 50) {
        std::cout << "Fresco.";
    } else {
        std::cout << "Muito frio!";
    }
}

int main() {
    int temperature = 75; 
    checkTemperature(temperature);

    return 0;
}
