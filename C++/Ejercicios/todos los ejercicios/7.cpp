#include <iostream>//tabla del 7
// wilson benjamin 2025-0968 Ejercicio 7
using namespace std;

int main() {

    int tabla_del_7;

    cout << "Tabla del 7:" << endl;
    for (int i = 1; i <= 10; i++) {
        tabla_del_7 = 7 * i;
        cout << "7 x " << i << " = " << tabla_del_7 << endl;
    }
    cout << "Fin de la tabla del 7." << endl;
    return 0;


}