#include <iostream>

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 2;
    int num2 = 20;

    std::cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    intercambiar(num1, num2);

    std::cout << "Después del intercambio: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    return 0;
}