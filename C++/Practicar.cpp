#include <iostream>
#include <vector>
using namespace std;

int main ( ){

    int cantidad;

    cout << " Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;


    vector<string> nombre(cantidad);
    vector<double> calificacion(cantidad);

    for(int i =0; i < cantidad; i++){
    cout << "El nombre del estudiante" << i + i << endl;
    cin >> nombre[i];

   cout << "Ingresa la calificacion del estudiante" << nombre[i] << endl;
   cin  >> calificacion;
    }


}   
   