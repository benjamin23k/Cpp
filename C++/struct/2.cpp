#include <iostream>
using namespace std;

struct Moneda {
    float dolares;
    float tasa;
};

int main() {
    Moneda m;
    cout << "Ingrese la cantidad en dólares: ";
    cin >> m.dolares;
    cout << "Ingrese la tasa de cambio: ";
    cin >> m.tasa;

    float pesos = m.dolares * m.tasa;
    cout << "Equivale a " << pesos << " pesos." << endl;

    return 0;
}
