#include <iostream>
#include <vector>
#include <string>

using namespace std;
class MateriaYaRegistradaException {
public:
    MateriaYaRegistradaException(const string& materia) : materia(materia) {}

    string getMateria() const {
        return materia;
    }
private:
    string materia;
};
class Estudiante {
public:
    Estudiante(string nombre) : nombre(nombre) {}

    void registrarMateria(const string& materia) {
        for (const string& materiaRegistrada : materias) {
            if (materiaRegistrada == materia) {
                throw MateriaYaRegistradaException(materia);
            }
        }
        materias.push_back(materia);
    }

    void mostrarMaterias() {
        cout << "Materias registradas:" << endl;
        for (const auto& materia : materias) {
            cout << materia << endl;
        }
    }
private:
    string nombre;
    vector<string> materias;
};
int main() {
    Estudiante estudiante("Adriana Reyes");

    try {
        estudiante.registrarMateria("Matemáticas");
        estudiante.registrarMateria("Informática");
        estudiante.registrarMateria("Programación");
        estudiante.registrarMateria("Programación");
        estudiante.mostrarMaterias();
    }
    catch (const MateriaYaRegistradaException& e) {
        cerr << "La materia " << e.getMateria() << " ya está registrada" << endl;
    }

};