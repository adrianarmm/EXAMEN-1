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