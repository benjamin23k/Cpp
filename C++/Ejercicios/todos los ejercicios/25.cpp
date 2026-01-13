#include <iostream>
#include <cmath>
using namespace std;
//Wilson benjamin 2025-0968
int main() {
    double a, b, c;
    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;
        // Wilson Benjamin Rosa 2025-0968 Ejercicio 25
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son reales y diferentes:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "Las soluciones son reales e iguales:\n";
        cout << "x = " << x << "\n";
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son complejas y conjugadas:\n";
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i\n";
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i\n";
    }

    return 0;
}