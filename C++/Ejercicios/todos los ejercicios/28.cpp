#include <iostream>

using namespace std;

int main () {
// Wilson Benjamin 2025-0968 Ejercicio 28
    string palabra;
    // Permite leer una línea completa, incluyendo espacios
cout << "Introduce una palabra: ";
getline(cin, palabra); 
cout << "La palabra tiene " << palabra.length() << " caracteres.\n";

return 0;
}