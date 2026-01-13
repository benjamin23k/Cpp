#include <iostream>

using namespace std;
// This program converts years to minutes
int main() {
    int years;
    cout << "Enter the number of years: ";
    cin >> years;
// Wilson Benjamin Rosa 2025-0968 Ejercicio 20
    int minutes = years * 365 * 24 * 60; // 1 year = 365 days, 1 day = 24 hours, 1 hour = 60 minutes
    cout << years << " years is equivalent to " << minutes << " minutes." << endl;

    return 0;
}
