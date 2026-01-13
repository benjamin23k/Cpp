#include <iostream>
using namespace std;
// imprime el doble, cubo y mitad de un numero ingresado por el usuario
int main() {
    double numero;
    cout << "Introduce un numero: ";
    cin >> numero;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 16
    double doble = numero * 2;
    double cubo = numero * numero * numero;
    double mitad = numero / 2.0;

    cout << "El doble es: " << doble << endl;
    cout << "El cubo es: " << cubo << endl;
    cout << "La mitad es: " << mitad << endl;

    return 0;
}