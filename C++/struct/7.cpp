#include <iostream>
using namespace std;

struct Inversion {
    float capital;
    float tasa;
    int tiempo;
};

int main() {
    Inversion inv;
    cout << "Ingrese el capital: ";
    cin >> inv.capital;
    cout << "Ingrese la tasa de interés (%): ";
    cin >> inv.tasa;
    cout << "Ingrese el tiempo (en años): ";
    cin >> inv.tiempo;

    float interes = (inv.capital * inv.tasa * inv.tiempo) / 100;
    cout << "Interés generado: " << interes << endl;
    cout << "Capital final: " << inv.capital + interes << endl;

    return 0;
}
