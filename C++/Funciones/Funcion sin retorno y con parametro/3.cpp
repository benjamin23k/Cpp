#include <iostream>

using namespace std;

void tablaDelNumero(int numero) {
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main(){
    tablaDelNumero(5);
}