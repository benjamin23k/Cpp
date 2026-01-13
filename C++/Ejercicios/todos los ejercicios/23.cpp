#include <iostream>

using namespace std;
int main () {

int precio,itebis,total;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 23
cout << "Ingrese el Precio del producto: ";
cin >> precio;
//imprime el itebis y el total a pagar de un producto
itebis = precio*0.18;
total = precio + itebis;

cout << "Itebis 18%: " << itebis << endl;
cout << "Total a pagar del producto: " << total << endl;


 return 0;

}