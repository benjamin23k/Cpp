#include <iostream>

using namespace std;

void mostrarAbecedario(bool mayusculas) {
    char inicio = mayusculas ? 'A' : 'a';
    char fin = mayusculas ? 'Z' : 'z';
    for (char letra = inicio; letra <= fin; letra++) {
        cout << letra << " ";
    }
    cout << endl;
}

int main (){
    mostrarAbecedario(true); // Muestra el abecedario en mayúsculas
    mostrarAbecedario(false); // Muestra el abecedario en minúsculas
}
