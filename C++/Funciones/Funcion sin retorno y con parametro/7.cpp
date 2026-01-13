#include <iostream>

using namespace std;

void cuentaRegresiva(int inicio) {
    for (int i = inicio; i >= 1; i--) {
        cout << i << endl;
    }
}

int main(){
    cuentaRegresiva(10);
    cuentaRegresiva(5);
}



