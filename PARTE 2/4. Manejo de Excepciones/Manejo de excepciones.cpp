#include <iostream>

void divide(int a, int b)
{
    if (b == 0) {
        throw "Error: División por cero";
    }
    int result = a / b;
    std::cout << "El resultado de la división es: " << result << std::endl;
}

int num1, num2;
std::cout << "Ingrese el primer número: ";
std::cin >> num1;
std::cout << "Ingrese el segundo número: ";
std::cin >> num2;
