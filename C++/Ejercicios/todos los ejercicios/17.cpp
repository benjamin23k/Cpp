#include <iostream>
#include <string>
using namespace std;

int main() {
    string dia;
    cout << "Introduce un dia de la semana: ";
    getline(cin, dia);
    // imprime si el dia es laboral o fin de semana
// Wilson Benjamin Rosa 2025-0968 Ejercicio 17
    if (dia == "lunes" || dia == "Lunes")
        cout << "Es el primer dia laboral." << endl;
    else if (dia == "martes" || dia == "Martes")
        cout << "Es el segundo dia laboral." << endl;
    else if (dia == "miercoles" || dia == "Miércoles")
        cout << "Es el tercer dia laboral." << endl;
    else if (dia == "jueves" || dia == "Jueves")
        cout << "Es el cuarto dia laboral." << endl;
    else if (dia == "viernes" || dia == "Viernes")
        cout << "Es el quinto dia laboral." << endl;
    else if (dia == "sabado" || dia == "Sabado")
        cout << "Es fin de semana." << endl;
    else if (dia == "domingo" || dia == "Domingo")
        cout << "Es fin de semana." << endl;
    else
        cout << "No es un dia valido." << endl;

    return 0;
}