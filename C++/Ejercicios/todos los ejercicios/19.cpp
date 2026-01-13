#include <iostream>
using namespace std;
// imprime la cantidad de horas que equivalen a los dias ingresados por el usuario
int main() {
    int dias;
    cout << "Ingrese la cantidad de dias: ";
    cin >> dias;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 19
    int horas = dias * 24;
    cout << dias << " dias equivalen a " << horas << " horas." << endl;

    return 0;
}