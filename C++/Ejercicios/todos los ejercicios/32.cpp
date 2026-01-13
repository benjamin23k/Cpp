#include <iostream>

using namespace std;

int main () {// Wilson Benjamin 2025-0968 Ejercicio 32

 double fahrenheit;
cout << "Introduce los grados Fahrenheit: ";
cin >> fahrenheit;

double celsius = (fahrenheit - 32) * 5 / 9;
cout << "Equivalen a " << celsius << " grados Celsius.\n";

}