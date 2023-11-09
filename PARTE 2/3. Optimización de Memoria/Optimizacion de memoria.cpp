#include <iostream>

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 2;
    int num2 = 20;