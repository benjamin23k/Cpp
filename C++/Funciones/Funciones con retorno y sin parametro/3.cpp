#include <iostream>
using namespace std;

string obtenerTablaDelCinco() {
    string resultado;
    for (int i = 1; i <= 10; i++) {
        resultado += "5 x " + to_string(i) + " = " + to_string(5 * i) + "\n";
    }
    return resultado;
}

int main(){
    cout << obtenerTablaDelCinco();
}