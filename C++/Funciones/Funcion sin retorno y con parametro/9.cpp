#include <iostream>

using namespace std;

void mostrarHora(int hora, int minuto, bool esAM){
    cout << "Hora simulada son las " << hora << ":";
    if (minuto < 10) cout << "0";
    cout << minuto << (esAM ? " AM" : " PM") << endl;
}

int main (){
    mostrarHora(10, 35, true);
    mostrarHora(3, 7, false);
}