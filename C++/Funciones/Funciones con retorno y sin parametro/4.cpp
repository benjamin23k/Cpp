#include <iostream>

using namespace std;
string obtenerAbecedario() {
    string resultado;
    for (char letra = 'A'; letra <= 'Z'; letra++) {
        resultado += letra;
        resultado += " ";
    }
    resultado += "\n";
    return resultado;
}

int main (){
    cout << obtenerAbecedario();
}
