#include <iostream>
using namespace std;

string mostrarNombre(string nombre) {
    return "Mi nombre es " + nombre + ".";
}

int main() {
    string resultado = mostrarNombre("Wilson");
    cout << resultado << endl;
    return 0;
}