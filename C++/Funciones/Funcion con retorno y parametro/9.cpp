#include <iostream>
using namespace std;

string hora(string horaActual) {
    return "Hora simulada: " + horaActual;
}

int main () {
    string horaUsuario;
    cout << "Introduce la hora (ejemplo 10:35 AM): ";
    getline(cin, horaUsuario);

    string resultado = hora(horaUsuario);
    cout << resultado << endl;

    return 0;
}