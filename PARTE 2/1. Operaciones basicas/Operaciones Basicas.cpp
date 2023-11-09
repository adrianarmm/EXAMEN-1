#include <iostream>

int sumaEnteros(int numero1, int numero2) {
    return numero1 + numero2;
}
int main() {
    int num1, num2;
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    int resultado = sumaEnteros(num1, num2);

    std::cout << "La suma de 3 " << num1 << " y 2 " << num2 << " es: 5 " << resultado << std::endl;

    return 0;
}
