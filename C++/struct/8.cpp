#include <iostream>
using namespace std;

struct Calificaciones {
    int nota1, nota2, nota3;
};

int main() {
    Calificaciones notas;
    cout << "Ingrese 3 calificaciones: ";
    cin >> notas.nota1 >> notas.nota2 >> notas.nota3;

    int promedio = (notas.nota1 + notas.nota2 + notas.nota3) / 3;
    cout << "Promedio (entero): " << promedio << endl;

    return 0;
}
