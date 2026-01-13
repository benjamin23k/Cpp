#include <iostream>

using namespace std;

int main () {
// Wilson Benjamin 2025-0968 Ejercicio 34
    int numero;
cout << "Introduce 20 números:\n";
for (int i = 1; i <= 20; i++) {
    cin >> numero;
    if (numero > 0) {
        cout << numero << " es positivo.\n";
    }
}
 return 0;
}