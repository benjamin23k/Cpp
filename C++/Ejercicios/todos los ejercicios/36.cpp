#include <iostream>

using namespace std;

int main () {
    // Wilson Benjamin 2025-0968 Ejercicio 36
int nota;
cout << "Introduce la nota del estudiante: ";
cin >> nota;

if (nota >= 90 && nota <= 100)
    cout << "Calificación: A\n";
else if (nota >= 80)
    cout << "Calificación: B\n";
else if (nota >= 70)
    cout << "Calificación: C\n";
else
    cout << "Calificación: No aprobó.\n";


    return 0;
}