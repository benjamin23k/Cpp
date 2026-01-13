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

   string GetMarca()const { return Marca;}
   string GetColor()const { return Color;}

   void SetMarca(string _Marca) { Marca = _Marca; }
   void SetColor(string _Color) { Marca = _Color; }
};

int main ()
{
  Coche micoche;
  micoche.SetMarca("B M W");
  micoche.SetColor("AZUL");

  cout << micoche.GetMarca() << endl;
  cout << micoche.GetColor();
  return 0;
  
}