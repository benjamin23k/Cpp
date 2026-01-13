#include <iostream>
using namespace std;

struct Comparacion {
    int n1, n2;
};

int main() {
    Comparacion c;
    cout << "Ingrese dos números: ";
    cin >> c.n1 >> c.n2;

    if (c.n1 > c.n2)
        cout << "El mayor es: " << c.n1 << endl;
    else if (c.n1 < c.n2)
        cout << "El mayor es: " << c.n2 << endl;
    else
        cout << "Ambos son iguales." << endl;

    return 0;
}

