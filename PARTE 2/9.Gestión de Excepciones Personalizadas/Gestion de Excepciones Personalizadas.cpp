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
    Estudiante(string nombre) : nombre(nombre) {}


};