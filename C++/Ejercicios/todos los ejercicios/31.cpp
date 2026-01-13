#include <iostream>

using namespace std;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 31
int main () {
double capital, tasa, tiempo;
cout << "Introduce el capital inicial: ";
cin >> capital;
cout << "Introduce la tasa de interes (%): ";
cin >> tasa;
cout << "Introduce el tiempo en years: ";
cin >> tiempo;

double montoFinal = capital + (capital * tasa / 100 * tiempo);
cout << "El capital acumulado es: " << montoFinal << "\n";
 

}