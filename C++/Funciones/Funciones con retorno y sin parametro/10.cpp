#include <iostream>

using namespace std;

string obtenerPoemaCorto() {
    string poema;
    poema += "Rosas son rojas,\n";
    poema += "El cielo es azul,\n";
    poema += "Programar es arte,\n";
    poema += "Y tú eres cool.\n";
    return poema;
}

int main(){
    cout << obtenerPoemaCorto();
}
