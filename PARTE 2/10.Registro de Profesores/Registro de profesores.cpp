#include <iostream>
#include <string>

class Profesor {
private:
    std::string nombre;
    int edad;
    std::string materia;
    int experiencia;

public:
    Profesor(std::string nombre, int edad, std::string materia, int experiencia) {
        this->nombre = nombre;
        this->edad = edad;
        this->materia = materia;
        this->experiencia = experiencia;
    }

    void mostrar_info_profesor() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Materia que imparte: " << materia << std::endl;
        std::cout << "Años de experiencia: " << experiencia << std::endl;
    }
};
int main() {
    Profesor profesor("David", 35, "Programacion", 10);
    Profesor profesor2("Jaime", 50, "Informatica", 20);
    profesor.mostrar_info_profesor();
    profesor2.mostrar_info_profesor();

    return 0;

}