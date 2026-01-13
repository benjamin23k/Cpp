#include <iostream>

using namespace std;


int main () {
// Wilson Benjamin 2025-0968 Ejercicio 26
// Verifica si un año es bisiesto
    int anio;
cout << "Introduce un año: ";
cin >> anio;
if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
    cout << "Es un año bisiesto.\n";
} else {
    cout << "No es un año bisiesto.\n";
    
}

return 0;
}