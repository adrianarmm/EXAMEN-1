#include <iostream>
#include <vector>

double calcularPromedio(const std::vector<int>& calificaciones) {
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
    double promedio = static_cast<double>(suma) / calificaciones.size();
    return promedio;
}
int main() {
    std::vector<int> calificaciones;
    int calificacion;
    std::cout << "Ingrese las calificaciones de los alumnos: " << std::endl;
    while (std::cin >> calificacion)
        calificaciones.push_back(calificacion);

        double promedio = calcularPromedio(calificaciones);
        std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
        return 0;
    }