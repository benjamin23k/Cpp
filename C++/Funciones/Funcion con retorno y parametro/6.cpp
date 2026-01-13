#include <iostream>
using namespace std;

string saludoMultilingue(string idioma) {
    if (idioma == "ingles")
        return "Hello!";
    else if (idioma == "espanol")
        return "¡Hola!";
    else if (idioma == "frances")
        return "Bonjour!";
    else
        return "Idioma no soportado.";
}

int main () {
    string idioma;
    cout << "Introduce un idioma (ingles, espanol, frances): ";
    cin >> idioma;

    string saludo = saludoMultilingue(idioma);
    cout << saludo << endl;
   
    return 0;
    cin.get();
    system("pause");
}
