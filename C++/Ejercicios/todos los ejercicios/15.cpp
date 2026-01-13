#include <iostream>

using namespace std;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 15
int main() {
// imprime la suma de los digitos de un numero
  int numero,decena,suma,unidad;

  cout << "Ingresa un numero:";
  cin >> numero;

  numero = abs(numero);

  decena = numero/10;
  unidad = numero%10;

  suma = decena + unidad;

  cout << "La suma de los digitos es:" << suma << endl;
  system("Pause");
  return 0;






}