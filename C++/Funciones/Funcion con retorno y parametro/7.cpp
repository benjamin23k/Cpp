#include <iostream>
#include <sstream>
using namespace std;

string cuentaRegresiva(int inicio) {
    stringstream ss;
    for (int i = inicio; i >= 1; i--) {
        ss << i << endl;
    }
    return ss.str();
}

int main() {
    int n;
    cout << "Introduce el número inicial de la cuenta regresiva: ";
    cin >> n;

    string resultado = cuentaRegresiva(n);
    cout << resultado;

    return 0;
}
