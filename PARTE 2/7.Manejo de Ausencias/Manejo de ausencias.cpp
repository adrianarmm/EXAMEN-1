#include <iostream>
#include <string>
using namespace std;

class RegistroAsistencia {
private:
    string fecha;
    string estado;

public:
    RegistroAsistencia(string fecha, string estado) {
        this->fecha = fecha;
        this->estado = estado;
}