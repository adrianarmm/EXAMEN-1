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