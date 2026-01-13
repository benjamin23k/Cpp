#include <iostream>
#include <cmath>
using namespace std;

struct Triangulo {
    float cateto1;
    float cateto2;
};

int main() {
    Triangulo t;
    cout << "Ingrese el primer cateto: ";
    cin >> t.cateto1;
    cout << "Ingrese el segundo cateto: ";
    cin >> t.cateto2;

    float hipotenusa = sqrt(pow(t.cateto1, 2) + pow(t.cateto2, 2));
    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}
