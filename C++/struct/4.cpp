#include <iostream>
using namespace std;

struct Notas {
    float n1, n2, n3, n4;
    float examenFinal;
};

int main() {
    Notas estudiante;

    cout << "Ingrese 4 notas mensuales: ";
    cin >> estudiante.n1 >> estudiante.n2 >> estudiante.n3 >> estudiante.n4;

    cout << "Ingrese nota del examen final: ";
    cin >> estudiante.examenFinal;

    float promedio = (estudiante.n1 + estudiante.n2 + estudiante.n3 + estudiante.n4) / 4;
    float notaFinal = promedio * 0.7 + estudiante.examenFinal * 0.3;

    cout << "Nota final: " << notaFinal << endl;

    if (notaFinal >= 70)
        cout << "Aprobó la materia." << endl;
    else
        cout << "Reprobó la materia." << endl;

    return 0;
}
