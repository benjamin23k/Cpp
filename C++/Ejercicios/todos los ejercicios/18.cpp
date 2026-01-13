#include <iostream>

using namespace std;
// tarea: Calculadora simple
int main() {
// Wilson Benjamin Rosa 2025-0968 Ejercicio 18
int  num1, num2, resultado;
char operacion;
// Solicitar al usuario dos números y una operación
cout << "Ingrese el primer numero: " << endl;
cin >> num1;

cout << "Ingrese el segundo numero: " << endl;
cin >> num2;

cout << "Elige una operacion (+,-,*,/): ";
cin >> operacion;

switch (operacion)
{
case '+':
    resultado = num1 + num2;
    cout << "La suma es: " << resultado << endl;
    break;
case '-':
resultado = num1 - num2;
cout << "La resta es: " << resultado << endl;
break;
case '*':
resultado = num1 * num2;
cout << "La multiplicacion es: " << resultado << endl;
break;
case '/':
resultado = num1 / num2;
cout << "La division es: " << resultado << endl;
break;
default:
    cout << "Operacion no valida: ";
}

return 0;
    




}

