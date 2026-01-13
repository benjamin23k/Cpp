#include <iostream>//intercambiar dos variables
// wilson benjamin 2025-0968 Ejercicio 2
using namespace std;

int main() {
int variable1 = 5;
int variable2 = 10;

int inicio = variable1;
variable1 = variable2;
variable2 = inicio;

cout << "Variable 1: " << variable1 << endl;
cout << "Variable 2: " << variable2 << endl;


return 0;
system("pause");

}