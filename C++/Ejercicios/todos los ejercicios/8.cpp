#include <iostream> // Imprime la tabla de multiplicar de un número ingresado por el usuario

using namespace std;
// wilson benjamin rosa 2025-0968 ejercicio 8
int main() {
    int numero;
    cout << "Introduce un numero para ver su tabla de multiplicar: ";
    cin >> numero;

    cout << "Tabla del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}