#include <iostream>// Verifica si una letra es mayúscula o minúscula
// wilson benjamin 2025-0968 Ejercicio 9
using namespace std;
int main() {
   char letra;
    cout << "Introduce una letra:";
    cin >> letra;

    if (letra >= 'a' && letra <= 'z') {
        cout << "La letra '" << letra << "' es minuscula." << endl;
    } else if (letra >= 'A' && letra <= 'Z') {
        cout << "La letra '" << letra << "' es mayuscula." << endl;
    } else {
        cout << "El caracter '" << letra << "' no es una letra." << endl;
    }
    return 0;
}
