#include <iostream>

using namespace std;


class Mensajes

{
     public:
     void MensajePuntos()
     {

       cout << "..................." << endl;
       cout << " Mensaje de puntos " << endl;
       cout << "..................." << endl;


     }

      void MensajeLinea ()
     {

       cout << "-------------------" << endl;
       cout << " Mensaje de Lineas " << endl;
       cout << "-------------------" << endl;


     }
      void MensajeAsteriscos ()
     {

       cout << "*******************" << endl;
       cout << " Mensaje de asterisco " << endl;
       cout << "*******************" << endl;


     }
};

int main ()
{

    Mensajes miMensaje, miOtroMensaje;

    
    miMensaje.MensajeAsteriscos();
    miMensaje.MensajeLinea();
    miMensaje.MensajePuntos();

    cout << endl;
    system ("pause");
}