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

    std::cout << "La suma de  " << num1 << " y  " << num2 << " es:  " << resultado << std::endl;

    return 0;
}
