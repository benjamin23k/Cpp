#include <iostream>

using namespace std;

void mostrarFecha(int dia, int mes, int anio) {
    cout << "Fecha simulada: " << dia << "/" << mes << "/" << anio << endl;
}
int main(){
    mostrarFecha(30, 6, 2025);
    mostrarFecha(1, 1, 2024);
}