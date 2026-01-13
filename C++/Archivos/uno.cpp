#include <iostream>
using namespace std;

int main() {
    int m[3][6] = {
        {28, -65, 44, 100, 56, 54},
        {36, 85, -22, 61, 62, 20},
        {-7, -70, -28, -45, 73, -28}
    };
    int s = 0, max = m[0][0], min = m[0][0], maxD = m[0][0], minD = m[0][0];
    double pF2 = 0, pC3 = 0; bool diagNeg = true;

    for (int i = 0; i < 3; i++) {
        int sf = 0;
        for (int j = 0; j < 6; j++) {
            int v = m[i][j]; s += v; sf += v;
            if (v > max) max = v;
            if (v < min) min = v;
            if (j == 2) pC3 += v;
        }
        cout << "Promedio Fila " << i+1 << ": " << sf/6.0 << endl;
        if (i == 1) pF2 = sf / 6.0;
    }

    for (int j = 0; j < 6; j++) {
        int sc = 0;
        for (int i = 0; i < 3; i++) sc += m[i][j];
        cout << "Promedio Columna " << j+1 << ": " << sc/3.0 << endl;
    }

    for (int i = 0; i < 3; i++) {
        int d = m[i][i];
        if (d > maxD) maxD = d;
        if (d < minD) minD = d;
        if (d >= 0) diagNeg = false;
    }

    cout << "\nProm. Total: " << s / 18.0;
    cout << "\nProm. Columna 3: " << pC3 / 3;
    cout << "\nProm. Fila 2: " << pF2;
    cout << "\nMáximo: " << max << " | Mínimo: " << min;
    cout << "\nMax Diagonal: " << maxD << " | Min Diagonal: " << minD;
    cout << "\nTodos negativos en diagonal: " << (diagNeg ? "Sí" : "No") << endl;
}
