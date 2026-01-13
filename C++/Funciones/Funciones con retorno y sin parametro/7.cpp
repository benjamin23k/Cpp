#include <iostream>

using namespace std;

string obtenerCuentaRegresiva() {
    string resultado;
    for (int i = 10; i >= 1; i--) {
        resultado += to_string(i) + "\n";
    }
    return resultado;
}

int main(){
    cout << obtenerCuentaRegresiva();
}
