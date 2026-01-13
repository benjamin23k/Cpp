#include <iostream>
using namespace std;

struct Numeros {
    int a, b;
};

int main() {
    Numeros nums;
    cout << "Ingrese dos números: ";
    cin >> nums.a >> nums.b;

    int suma = nums.a + nums.b;
    if (suma % 2 == 0)
        cout << "La suma es par." << endl;
    else
        cout << "La suma es impar." << endl;

    return 0;
}
