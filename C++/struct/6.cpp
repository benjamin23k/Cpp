#include <iostream>
using namespace std;

struct Temperatura {
    float celsius;
    float fahrenheit;
};

int main() {
    Temperatura temp;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> temp.celsius;

    temp.fahrenheit = (temp.celsius * 9 / 5) + 32;
    cout << "Equivale a " << temp.fahrenheit << " °F" << endl;

    return 0;
}
