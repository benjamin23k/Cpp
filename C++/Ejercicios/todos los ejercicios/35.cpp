#include <iostream>

using namespace std;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 35
int main () {

   double n1, n2, n3;
cout << "Introduce tres calificaciones: ";
cin >> n1 >> n2 >> n3;

int promedio = static_cast<int>((n1 + n2 + n3) / 3);
cout << "El promedio entero es: " << promedio << "\n";


return 0;

}