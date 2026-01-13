#include <iostream>

using namespace std;

class Animal
{
private:
    string Especie;

public:
    Animal() { Especie = "SIN ESPECIE"; }
    Animal(string _Especie) { Especie = _Especie; }
    ~Animal() // Destructor
    {
        cout << "destructor de: " << Especie << endl;
        // No es recomendable pausar en el destructor, puede causar problemas al destruir varios objetos.
        // system("pause");
    }
    string GetEspecie() { return Especie; }
};

int main()
{
    Animal Tarzan("Perro"), Boli("GATO");
    Animal BillGates;
    cout << Tarzan.GetEspecie() << endl;
    cout << Boli.GetEspecie() << endl;
    cout << BillGates.GetEspecie() << endl;
    cout << endl;
    cout << "**Bloque de CODIGO **" << endl;
    system("pause");
    return 0;
}