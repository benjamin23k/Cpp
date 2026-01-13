#include <iostream>

using namespace std;

void poemaCorto(string verso1, string verso2, string verso3, string verso4) {
    cout << verso1 << endl;
    cout << verso2 << endl;
    cout << verso3 << endl;
    cout << verso4 << endl;
}

int main(){
    poemaCorto(
        "Rosas son rojas,",
        "El cielo es azul,",
        "Programar es arte,",
        "Y tú eres cool."
    );
    poemaCorto(
        "Las estrellas brillan,",
        "La luna es testigo,",
        "El código funciona,",
        "Y yo lo bendigo."
    );
    
    // Espera a que el usuario presione Enter antes de cerrar
    cout << "Presiona Enter para salir...";
    cin.get();
}
