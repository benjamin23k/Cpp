#include <iostream>

using namespace std;
//imprime la hipotenusa de un triangulo rectangulo dados los catetos
// Wilson Benjamin Rosa 2025-0968 Ejercicio 21
int main () {

int cateto1,cateto2,hipotenusa;

cout << "Ingrese el primer cateto: " << endl;
cin >> cateto1;

cout << "Ingrese el segundo cateto: " << endl;
cin >> cateto2;


hipotenusa = (cateto1*cateto1) + (cateto2*cateto2);
cout << "La hipotenusa del los catetos es:  "<< hipotenusa << endl;
 cin >> hipotenusa;




 return 0;

}
