
//DIOS te ama.
//Tu tutor Jose Abreu
// poner el nombre del estudiante Wilson 2025-0968
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    ofstream Pru("Ejemplo.txt");
    if(!Pru){
        cout<<"NO ENCONTRO EL ARCHIVO";
    }
    else{
        Pru<<"EL SEÑOR GUIES NUESTROS PASOS";
    }
    Pru.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*Este programa crea un archivo llamado Ejemplo.tx
en el mismo lugar donde esta guardado este ejercicio
y escribe en el archivo EL señor guies nuestros pasos.*/




