#include <iostream>

using namespace std;
// muestra el equivalente de dolares a pesos
int main (){
// Wilson Benjamin Rosa 2025-0968 Ejercicio 14
    float dolares, dolar, pesos;

    cout << "Ingrese la cantidad de dolares" << endl;
    cin >> dolares;
    cout << "Ingrese a cuanto esta el dolar en pesos" << endl;
    cin >> dolar;

    pesos = dolares * dolar;
    cout << "Equivalente en pesos: " << pesos << endl;

    return 0;
}