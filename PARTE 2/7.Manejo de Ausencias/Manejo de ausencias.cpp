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

    void mostrar_asistencia() {
        cout << "Fecha: " << fecha << endl;
        cout << "Estado: " << estado << endl;
    }
};
int main() {
    RegistroAsistencia asistencia("5/11/2023", "Asistió");
    asistencia.mostrar_asistencia();

    return 0;
}
