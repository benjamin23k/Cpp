#include <iostream>
using namespace std;

string mostrarFecha(string fecha) {
    return "Fecha simulada: " + fecha;
}

int main() {
    string fecha;
    cout << "Introduce una fecha (dd/mm/aaaa): ";
    cin >> fecha;

    string resultado = mostrarFecha(fecha);
    cout << resultado << endl;

    return 0;
}