#include <iostream>

using namespace std;

void mostrarBienvenida(string nombre) {
    cout << "¡Bienvenido al curso de programación, " << nombre << "!" << endl;
}

int main(){
    mostrarBienvenida("Wilson");
    return 0;
}