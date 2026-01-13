#include <iostream>
using namespace std;

struct Par {
    int a;
    int b;
};

int main() {
    Par valores;

    cout << "Ingrese el primer valor: ";
    cin >> valores.a;
    cout << "Ingrese el segundo valor: ";
    cin >> valores.b;

    cout << "Antes del intercambio: a = " << valores.a << ", b = " << valores.b << endl;

    int temp = valores.a;
    valores.a = valores.b;
    valores.b = temp;

    cout << "Después del intercambio: a = " << valores.a << ", b = " << valores.b << endl;

    return 0;
}
