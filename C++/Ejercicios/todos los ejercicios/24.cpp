#include <iostream>

using namespace std;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 24

int main () {
//imprime la serie de Fibonacci hasta n terminos
     int n, t1 = 0, t2 = 1, siguiente;

    cout << "¿Cuantos terminos de la serie Fibonacci quieres ver? ";
    cin >> n;

    cout << "Serie de Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
    }

    cout << endl;
    return 0;
}

