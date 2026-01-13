#include <iostream>

using namespace std;

class Animal
{

    private:
      string Especie;

      public:
      Animal () { Especie = "SIN ESPECIE"; }
      Animal (string _Especie) { Especie = _Especie; }
      string GetEspecie() { return Especie; }

};

int main ()
{

  Animal Tarzan("Perro"), Boli("GATO");
  Animal BillGates;
  cout << Tarzan.GetEspecie() << endl;
  cout << Boli.GetEspecie() << endl;
  cout << BillGates.GetEspecie() << endl;
  cout << endl;
  system("pause");
}