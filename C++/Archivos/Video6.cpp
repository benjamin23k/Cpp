#include <iostream>

using namespace std;

class Coche
{
   private:
   string Marca;
   string Color;

   public:
   Coche () {Marca = "Sin Marca"; Color = "SinColor";}
   Coche (string _Marca, string _Color) { Marca = _Marca; Color = _Color;}

   string GetMarca() { return Marca;}
};

int main ()
{
  Coche micoche("Ferrari", "Rojo");
  cout << micoche.GetMarca();
  return 0;
  
}