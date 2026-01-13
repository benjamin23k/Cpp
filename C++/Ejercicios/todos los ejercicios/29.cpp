#include <iostream>

using namespace std;

int main () {
// Wilson Benjamin 2025-0968 Ejercicio 29
    string palabra = "HOLA";
size_t posicion = palabra.find('L');
if (posicion != string::npos) {
    cout << "La letra 'L' se encuentra en la posicion: " << posicion << "\n";
} else {
    cout << "La letra 'L' no está en la palabra.\n";
}

}