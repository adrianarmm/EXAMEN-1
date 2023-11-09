#include <iostream>
#include <string>

using namespace std;
class Estudiante {
private:
    string nombre;
    int edad;
    string grado;

public:
    Estudiante(string nombre, int edad, string grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }

    void mostrar_info() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Grado: " << grado << endl;
    }
};
int main() {
    Estudiante estudiante("Adriana Reyes", 18, " 1 carrera");
    estudiante.mostrar_info();

    return 0;
}