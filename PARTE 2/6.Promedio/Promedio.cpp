#include <iostream>
#include <vector>

double calcularPromedio(const std::vector<int>& calificaciones) {
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }