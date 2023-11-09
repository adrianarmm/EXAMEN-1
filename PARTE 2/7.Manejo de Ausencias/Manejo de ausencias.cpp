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
    RegistroAsistencia asistencia2("6/11/2023", "No asistió");
    RegistroAsistencia asistencia3("7/11/2023", "Tarde");

    asistencia.mostrar_asistencia();
    asistencia2.mostrar_asistencia();
    asistencia3.mostrar_asistencia();

    return 0;
}
