#include <iostream>// Verifica si un número es par o impar
// wilson benjamin 2025-0968 Ejercicio 11
using namespace std;
int main() {

     int x;
    cout << "Introduce un numero: ";
    cin >> x;
    if(x % 2 == 0) {
        cout << "El numero " << x << " es par." << endl;
    } else {
        cout << "El numero " << x << " es impar." << endl;
    }
    system("pause");
    return 0;
}

   