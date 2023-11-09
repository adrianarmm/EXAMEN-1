#include <iostream>
#include <vector>
#include <string>

class Estudiante {
private:
    std::vector<std::string> materias;

public:
    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }
    void mostrar_materias() {
        std::cout << "Materias registradas:" << std::endl;
        for (const auto& materia : materias) {
            std::cout << materia << std::endl;
        }
    }
};
int main() {
    Estudiante estudiante;
    estudiante.registrar_materia("Matemáticas");
    estudiante.registrar_materia("Informática");
    estudiante.registrar_materia("Programación");
    estudiante.mostrar_materias();

    return 0;
}