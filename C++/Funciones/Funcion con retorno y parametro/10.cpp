#include <iostream>
using namespace std;

string poemaCorto(string nombre) {
    return "Rosas son rojas,\nEl cielo es azul,\nProgramar es arte,\nY " + nombre + " es cool.\n";
}

int main() {
    string nombre;
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    string poema = poemaCorto(nombre);
    cout << poema;

    return 0;
}
