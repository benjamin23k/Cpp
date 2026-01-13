#include <iostream>

using namespace std;

void mostrarCarita(char boca) {
    cout << "  ^_^  " << endl;
    cout << "( o o )" << endl;
    cout << "  \\" << boca << "/  " << endl;
}

int main(){
    mostrarCarita('_'); // Carita con boca "_"
    mostrarCarita('o'); // Carita con boca "o"
}

