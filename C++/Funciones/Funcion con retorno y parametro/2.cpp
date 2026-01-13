#include <iostream>
#include <string>
using namespace std;

string mostrarBienvenida(string nombre) {
    return "¡Bienvenido al curso de programación, " + nombre + "!";
}

int main() {
    string usuario;
    cout << "Introduce tu nombre: ";
    getline(cin, usuario);

    string mensaje = mostrarBienvenida(usuario);
    cout << mensaje << endl;

    return 0;
}