#include <iostream>
using namespace std;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 13
int main() {
    int a, b, suma;
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
// Wilson Benjamin Rosa 2025-0968
    suma = a + b;
    cout << "La suma es: " << suma << endl;

    if (suma % 2 == 0) {
        cout << "La suma es par." << endl;
    } else {
        cout << "La suma es impar." << endl;
    }

    return 0;
}