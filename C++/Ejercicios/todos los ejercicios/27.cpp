#include <iostream>

using namespace std;

int main (){
    
double nota1, nota2, nota3, nota4, examenFinal;
cout << "Introduce las 4 notas mensuales: ";
cin >> nota1 >> nota2 >> nota3 >> nota4;
cout << "Introduce la nota del examen final: ";
cin >> examenFinal;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 27
double promedio = (nota1 + nota2 + nota3 + nota4) / 4;
double setentaPorciento = promedio * 0.70;
double treintaPorciento = examenFinal * 0.30;
double notaFinal = setentaPorciento + treintaPorciento;

cout << "Nota final: " << notaFinal << "\n";
if (notaFinal < 70) {
    cout << "Te quemaste atentamente abreu.\n";
} else {
    cout << "El estudiante aprobó la materia.\n";
}

return 0;

}