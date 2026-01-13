#include <iostream>
using namespace std;

struct Temperatura {
    float fahrenheit;
    float celsius;
};

int main() {
    Temperatura temp;
    cout << "Ingrese temperatura en Fahrenheit: ";
    cin >> temp.fahrenheit;

    temp.celsius = (temp.fahrenheit - 32) * 5 / 9;
    cout << "Equivale a " << temp.celsius << " °C" << endl;

    return 0;
}
