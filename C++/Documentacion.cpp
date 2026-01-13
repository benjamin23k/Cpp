// Estructura Hola Mundo
// #include <iostream>
// using namespace std;
// int main() {
// cout << "Hola Mundo";
// return 0;
// }
// Tipos de Datos Comunes
// int a = 10; // Enteros
// float b = 5.5; // Decimales
// double c = 9.99; // Decimal preciso
// char letra = 'A'; // Un caracter
// bool flag = true; // Verdadero/Falso
// string texto = "Hola"; // Cadenas
// Entrada y Salida (I/O)
// cout << "Imprimir texto" << endl;
// cin >> variable; // Guardar dato
// Condicionales (If / Else)
// if (edad >= 18) {
// cout << "Es mayor de edad";
// } else {
// cout << "Es menor";
// }
// Bucles (Ciclos)
// a) Ciclo For (para contar):
// for(int i = 0; i < 10; i++) {
// cout << i << " ";
// }
// b) Ciclo While (mientras):
// while(n > 0) {
// cout << n;
// n--;
// }
// Funciones
// // Declaracion antes del main
// int sumar(int x, int y) {
// return x + y;
// }
// // Uso dentro del main:
// int resultado = sumar(5, 3);
// Operadores Logicos
// && (AND / Y)
// || (OR / O)
// ! (NOT / No)
// == (Igual que)
// != (Diferente de)

// Arreglos (Arrays)
// // Lista de datos del mismo tipo
// int numeros[5] = {10, 20, 30, 40, 50};
// // Acceder a un dato (indice empieza en 0)
// cout << numeros[0]; // Imprime 10
// // Recorrer un arreglo
// for(int i = 0; i < 5; i++) {
// cout << numeros[i] << " ";
// }
// Estructura Switch
// // Para menus de opciones
// int opc = 2;
// switch(opc) {
// case 1:
// cout << "Opcion 1";
// break;
// case 2:
// cout << "Opcion 2";
// break;
// default:
// cout << "Opcion no valida";
// }
// Punteros (Memoria)
// // Guardan direcciones de memoria
// int variable = 10;
// int* puntero = &variable;
// cout << puntero; // Direccion (ej: 0x7ffee...)
// cout << *puntero; // Valor (10)
// Estructuras (Structs)
// struct Persona {
// string nombre;
// int edad;
// };
// // Uso:
// Persona p1;
// p1.nombre = "Juan";
// p1.edad = 25;
// Clases (POO)
// class Coche {
// public: // Accesible desde fuera
// string marca;
// code
// Code
// void encender() {
//     cout << "Motor arrancando...";
// }
// };
// //int main() {
// Coche miAuto;
// miAuto.marca = "Toyota";
// miAuto.encender();
// return 0;
// }
// Librerias Utiles
// #include <vector> // Arreglos dinamicos
// #include <cmath> // Matematicas (pow, sqrt)
// #include <string> // Manejo de textos
// #include <fstream> // Leer/Escribir archivos
// Vectores (Arrays Dinamicos)
// vector<int> lista;
// lista.push_back(5); // Agrega al final
// lista.push_back(10);
// lista.pop_back(); // Elimina el ultimo

// Constructores y Destructores
// // Se ejecutan autom. al crear/borrar objetos
// class Juego {
// public:
// Juego() {
// cout << "Juego iniciado"; // Constructor
// }
// ~Juego() {
// cout << "Juego cerrado"; // Destructor
// }
// };
// Encapsulamiento (Privado vs Publico)
// class Cuenta {
// private:
// int saldo; // Nadie puede tocarlo directo
// public:
// void depositar(int m) {
// saldo = saldo + m;
// }
// };
// Herencia
// // Una clase hija hereda de una padre
// class Animal {
// public: void comer() { cout << "Comiendo"; }
// };
// class Perro : public Animal {
// public: void ladrar() { cout << "Guau"; }
// };
// // Perro ahora puede comer() y ladrar()
// Polimorfismo
// // Mismo metodo, diferente comportamiento
// class Figura {
// public: virtual void dibujar() { ... }
// };
// class Circulo : public Figura {
// public: void dibujar() { cout << "O"; }
// };
// Manejo de Archivos
// #include <fstream>
// // Escribir en un archivo .txt
// ofstream archivo("notas.txt");
// archivo << "Hola mundo en archivo";
// archivo.close();
// // Leer de un archivo
// string linea;
// ifstream lectura("notas.txt");
// while (getline(lectura, linea)) {
// cout << linea << endl;
// }
// Templates (Plantillas)
// // Funciones para cualquier tipo de dato (int, float...)
// template <typename T>
// T sumar(T a, T b) {
// return a + b;
// }
// // Sirve para sumar(5, 5) o sumar(2.5, 3.1)
// Excepciones (Try / Catch)
// // Evitar que el programa explote por errores
// try {
// int edad = 15;
// if (edad < 18) {
// throw "Error: Menor de edad";
// }
// }
// catch (const char* msg) {
// cout << msg;
// }
// Memoria Dinamica (New / Delete)
// // Reservar memoria manual (Heap)
// int* p = new int;
// *p = 100;
// delete p; // Liberar memoria (Importante!)