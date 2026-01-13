#include <iostream>// Verifica si un número es positivo, negativo o cero
using namespace std;
// wilson benjamin 2025-0968 Ejercicio 10
int main() {

 int numero;
    cout << "Introduce un numero:";
    cin >> numero;
// Wilson Benjamin Rosa 2025-0968
    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }
    system("pause");  
    return 0;
   


}