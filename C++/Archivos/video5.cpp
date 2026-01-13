#include <iostream>

using namespace std;

class Punto
{

    public:
      int x ,y;
      Punto(int _x, int _y) {x = _x; y = _y;}
};

   void MostrarPunto(Punto p)
   {

   cout << " x: " << p.x << endl;
   cout << " y: " << p.y << endl;

   }   

int main ()
{

  
    MostrarPunto ( Punto(100, 200));
    cout << endl;
    system("pause");
    return 0;
}