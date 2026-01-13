#include <iostream>
#include <sstream>
using namespace std;

string tablaDelNumero(int numero) {
    stringstream ss;
    for (int i = 1; i <= 10; i++) {
        ss << numero << " x " << i << " = " << numero * i << endl;
    }
    return ss.str();
}

int main() {
    int n;
    cout << "Introduce el numero de la tabla: ";
    cin >> n;

    string tabla = tablaDelNumero(n);
    cout << tabla;

    
    cin.get();
    
    system("Pause");
}