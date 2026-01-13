#include <iostream>

using namespace std;

string obtenerSaludos() {
    string resultado;
    resultado += "Hello!\n";
    resultado += "¡Hola!\n";
    resultado += "Bonjour!\n";
    return resultado;
}

int main (){
    cout << obtenerSaludos();
}

