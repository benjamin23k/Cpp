#include <iostream>

using namespace std;

void saludoMultilingue(int idioma) {
    if (idioma == 1)
        cout << "Hello!" << endl;
    else if (idioma == 2)
        cout << "¡Hola!" << endl;
    else if (idioma == 3)
        cout << "Bonjour!" << endl;
    else
        cout << "Idioma no soportado." << endl;
}

int main (){
    saludoMultilingue(1); // Inglés
    saludoMultilingue(2); // Español
    saludoMultilingue(3); // Francés
    saludoMultilingue(4); // No soportado

}
