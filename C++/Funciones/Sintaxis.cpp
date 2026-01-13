#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <array>
#include <tuple>
#include <numeric>
#include <functional>
#include <stack>
#include <queue>
#include <bitset>
#include <chrono>
#include <random>
#include <fstream>
#include <sstream>
#include <memory>
#include <cassert>
#include <cmath>
#include <initializer_list>
using namespace std;

// Función simple
int suma(int x, int y) {
    return x + y;
}

int main() {
    // 1. Suma de dos números enteros
    int numero1 = 5, numero2 = 7;
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << (numero1 + numero2) << endl;

    // 2. Área de un círculo
    float radio = 3.5;
    float area = 3.14159f * radio * radio;
    cout << "El area del circulo de radio " << radio << " es: " << area << endl;

    // 3. Nombre y edad del usuario

    // 4. Calcular el promedio de tres números
    double n1, n2, n3;
    cout << "\nIngrese tres numeros para calcular el promedio: ";
    cin >> n1 >> n2 >> n3;
    double promedio = (n1 + n2 + n3) / 3.0;
    cout << "Promedio: " << promedio << endl;

    // 5. Determinar si un número es positivo, negativo o cero
    int numCheck;
    cout << "\nIngrese un numero para saber si es positivo, negativo o cero: ";
    cin >> numCheck;
    if (numCheck > 0)
        cout << "Positivo" << endl;
    else if (numCheck < 0)
        cout << "Negativo" << endl;
    else
        cout << "Cero" << endl;

    // 6. Calcular el factorial de un número (iterativo)
    int numFact;
    cout << "\nIngrese un numero para calcular su factorial: ";
    cin >> numFact;
    unsigned long long factorial = 1;
    for (int i = 1; i <= numFact; ++i) {
        factorial *= i;
    }
    cout << "Factorial: " << factorial << endl;

    // 7. Mostrar los números del 1 al 10 usando un ciclo for
    cout << "\nNumeros del 1 al 10: ";
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // 8. Sumar los números pares del 1 al 100
    int sumaPares = 0;
    for (int i = 2; i <= 100; i += 2) {
        sumaPares += i;
    }
    cout << "Suma de pares del 1 al 100: " << sumaPares << endl;

    // 9. Leer una cadena y mostrarla en mayúsculas
    cin.ignore();
    string texto;
    cout << "\nIngrese una cadena: ";
    getline(cin, texto);
    for (char& c : texto) c = toupper(c);
    cout << "En mayusculas: " << texto << endl;

    // 10. Calcular la suma de los dígitos de un número
    int numSumaDig;
    cout << "\nIngrese un numero para sumar sus digitos: ";
    cin >> numSumaDig;
    int sumaDigitos = 0, tempNum = abs(numSumaDig);
    while (tempNum > 0) {
        sumaDigitos += tempNum % 10;
        tempNum /= 10;
    }
    cout << "Suma de digitos: " << sumaDigitos << endl;

    // 11. Mostrar la tabla de multiplicar de un número
    int tablaNum;
    cout << "\nIngrese un numero para ver su tabla de multiplicar: ";
    cin >> tablaNum;
    for (int i = 1; i <= 10; ++i) {
        cout << tablaNum << " x " << i << " = " << tablaNum * i << endl;
    }

    // 12. Determinar si una palabra es palíndromo
    cin.ignore();
    string palabra;
    cout << "\nIngrese una palabra para saber si es palindromo: ";
    getline(cin, palabra);
    string invertida = palabra;
    reverse(invertida.begin(), invertida.end());
    cout << (palabra == invertida ? "Es palindromo" : "No es palindromo") << endl;

    // 13. Encontrar el mayor de tres números
    double x, y, z;
    cout << "\nIngrese tres numeros para saber el mayor: ";
    cin >> x >> y >> z;
    double mayor = x;
    if (y > mayor) mayor = y;
    if (z > mayor) mayor = z;
    cout << "El mayor es: " << mayor << endl;

    // 14. Mostrar los primeros N términos de la serie Fibonacci
    int nFibo;
    cout << "\nIngrese cuantos terminos de Fibonacci mostrar: ";
    cin >> nFibo;
    int f1 = 0, f2 = 1;
    cout << "Fibonacci: ";
    for (int i = 0; i < nFibo; ++i) {
        cout << f1 << " ";
    string nombre;
    int edad;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Hola, " << nombre << ". Tienes " << edad << " años." << endl;

    // Suma y resta de dos números ingresados
    int a, b;
    cout << "\nIngrese dos numeros: ";
    cin >> a >> b;
    cout << "Suma: " << (a + b) << ", Resta: " << (a - b) << endl;

    // Multiplicación y división
    cout << "Multiplicacion: " << (a * b) << endl;
    if (b != 0)
        cout << "Division: " << (float)a / b << endl;
    else
        cout << "No se puede dividir entre cero." << endl;

    // Área de un rectángulo
    float ancho, alto;
    cout << "\nAncho y alto del rectangulo: ";
    cin >> ancho >> alto;
    cout << "Area: " << (ancho * alto) << endl;

    // Comparación de dos números
    cout << "\nIngrese dos numeros para comparar: ";
    cin >> a >> b;
    cout << "Iguales: " << (a == b ? "Si" : "No") << ", Diferentes: " << (a != b ? "Si" : "No") << endl;
    cout << "Mayor: " << (a > b ? a : b) << ", Menor: " << (a < b ? a : b) << endl;

    // Par o impar
    cout << "\nIngrese un numero: ";
    cin >> a;
    cout << (a % 2 == 0 ? "Par" : "Impar") << endl;

    // Puede conducir
    cout << "\nIngrese su edad: ";
    cin >> edad;
    char permiso;
    cout << "¿Tiene permiso (s/n)? ";
    cin >> permiso;
    cout << ((edad >= 18 && (permiso == 's' || permiso == 'S')) ? "Puede conducir" : "No puede conducir") << endl;

    // Contar palabras en una oración
    cin.ignore();
    string oracion;
    cout << "\nIngrese una oracion: ";
    getline(cin, oracion);
    int palabras = 0;
    bool enPalabra = false;
    for (char c : oracion) {
        if (!isspace(c) && !enPalabra) {
            palabras++;
            enPalabra = true;
        } else if (isspace(c)) {
            enPalabra = false;
        }
    }
    cout << "Palabras: " << palabras << endl;

    // Invertir dos palabras
    string p1, p2;
    cout << "Ingrese dos palabras: ";
    cin >> p1 >> p2;
    reverse(p1.begin(), p1.end());
    reverse(p2.begin(), p2.end());
    cout << "Invertidas: " << p1 << " " << p2 << endl;

    // Llama a la función de ejemplos avanzados si lo deseas
    // main2();

    return 0;
}

/*
// (Eliminado: la función suma ya está definida antes de main)

// Función simple
int suma(int x, int y) {
    return x + y;
}

// Estructuras
struct Persona {
    string nombre;
    int edad;
};

// Uso de clases
class Animal {
public:
    string nombre;
    Animal(string n) : nombre(n) {}
    void hablar() { cout << nombre << " dice hola!" << endl; }
};

// ---------------------------------------------
// Ejemplo de sintaxis y problemas en C++
// ---------------------------------------------
void ejemplosAvanzados() {
// Cada bloque tiene comentarios explicando la sintaxis y su uso.

void main2() {
    // --- Arreglos ---
    // Un arreglo es una colección de elementos del mismo tipo, tamaño fijo.
    int numeros[5] = {1, 2, 3, 4, 5};
    cout << "\n--- Arreglos ---" << endl;
    cout << "Elementos del arreglo: ";
    for (int i = 0; i < 5; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // --- Vector ---
    // Un vector es un arreglo dinámico que puede cambiar de tamaño.
    vector<int> vec = {10, 20, 30};
    vec.push_back(40); // Agrega un elemento al final
    cout << "Vector: ";
    for (int n : vec) cout << n << " ";
    cout << endl;

    // --- Funciones ---
    // Las funciones permiten reutilizar código y dividir el programa en partes lógicas.
    cout << "\n--- Funciones ---" << endl;
    cout << "Suma(8, 12): " << suma(8, 12) << endl;

    // --- Estructuras ---
    // Una estructura agrupa variables bajo un mismo nombre.
    Persona persona1 = {"Ana", 25};
    cout << "\n--- Estructuras ---" << endl;
    cout << "Nombre: " << persona1.nombre << ", Edad: " << persona1.edad << endl;

    // --- Punteros ---
    // Un puntero almacena la dirección de memoria de una variable.
    cout << "\n--- Punteros ---" << endl;
    int valor = 50;
    int* ptr = &valor;
    cout << "Valor: " << valor << ", Direccion: " << ptr << ", Valor desde puntero: " << *ptr << endl;

    // --- Referencias ---
    // Una referencia es un alias de una variable existente.
    int refEjemplo = 100;
    int& ref = refEjemplo;
    ref = 200; // Cambia refEjemplo también
    cout << "Referencia: " << refEjemplo << endl;

    // --- Constantes ---
    // Las constantes no pueden cambiar su valor después de ser inicializadas.
    const double PI = 3.14159;
    cout << "Constante PI: " << PI << endl;

    // --- Enumeraciones ---
    // Un enum define un conjunto de constantes con nombre.
    enum Color { ROJO, VERDE, AZUL };
    Color color = VERDE;
    cout << "Enum Color (VERDE=1): " << color << endl;

    // --- Condicionales ---
    // Permiten tomar decisiones según condiciones.
    cout << "\n--- Condicionales ---" << endl;
    int x = 15;
    if (x > 10) {
        cout << "x es mayor que 10" << endl;
    } else {
        cout << "x es menor o igual a 10" << endl;
    }

    // --- Operador ternario ---
    // Sintaxis corta para condicionales simples.
    cout << "x es " << (x % 2 == 0 ? "par" : "impar") << endl;

    // --- Ciclos ---
    // Permiten repetir instrucciones varias veces.
    cout << "\n--- Ciclos ---" << endl;
    cout << "While: ";
    int i = 0;
    while (i < 3) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "Do-while: ";
    i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 3);
    cout << endl;

    cout << "For: ";
    // El ciclo for sirve para repetir un bloque de código un número determinado de veces.
    for (int j = 0; j < 3; ++j) {
        cout << j << " ";
    }
    cout << endl;

    // --- Switch ---
    // Selecciona entre múltiples opciones según el valor de una variable.
    cout << "\n--- Switch ---" << endl;
    int opcion = 2;
    switch (opcion) {
        case 1: cout << "Opcion 1" << endl; break;
        case 2: cout << "Opcion 2" << endl; break;
        default: cout << "Otra opcion" << endl;
    }

    // --- Problema: Factorial de un número ---
    // El factorial de n es el producto de todos los enteros positivos hasta n.
    cout << "\n--- Factorial ---" << endl;
    int num;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> num;
    unsigned long long fact = 1;
    for (int j = 1; j <= num; ++j) {
        fact *= j;
    }
    cout << "Factorial de " << num << " es: " << fact << endl;

    // --- Problema: Número primo ---
    // Un número primo solo es divisible por 1 y por sí mismo.
    cout << "\n--- Numero Primo ---" << endl;
    cout << "Ingrese un numero para saber si es primo: ";
    cin >> num;
    bool esPrimo = num > 1;
    for (int j = 2; j * j <= num && esPrimo; ++j) {
        if (num % j == 0) esPrimo = false;
    }
    cout << (esPrimo ? "Es primo" : "No es primo") << endl;

    // --- Problema: Fibonacci ---
    // La serie de Fibonacci suma los dos anteriores para obtener el siguiente.
    cout << "\n--- Fibonacci ---" << endl;
    cout << "Ingrese cuantos terminos de Fibonacci: ";
    cin >> num;
    int f1 = 0, f2 = 1;
    cout << "Fibonacci: ";
    for (int j = 0; j < num; ++j) {
        cout << f1 << " ";
        int temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    cout << endl;

    // --- Clases ---
    // Una clase es una plantilla para crear objetos con atributos y métodos.
    Animal perro("Firulais");
    cout << "\n--- Clases ---" << endl;
    perro.hablar();

    // --- Problema: Suma de elementos de un vector ---
    cout << "\n--- Suma de elementos de un vector ---" << endl;
    vector<int> v = {1, 2, 3, 4, 5};
    int sumaVec = 0;
    for (int n : v) sumaVec += n;
    cout << "Suma: " << sumaVec << endl;

    // --- Problema: Buscar un elemento en un vector ---
    cout << "\n--- Buscar elemento en vector ---" << endl;
    int buscar = 3;
    bool encontrado = false;
    for (int n : v) {
        if (n == buscar) encontrado = true;
    }
    cout << (encontrado ? "Encontrado" : "No encontrado") << endl;

    // --- Problema: Invertir un arreglo ---
    cout << "\n--- Invertir arreglo ---" << endl;
    reverse(v.begin(), v.end());
    cout << "Invertido: ";
    for (int n : v) cout << n << " ";
    cout << endl;

    // --- Problema: Contar vocales en una cadena ---
    cout << "\n--- Contar vocales ---" << endl;
    string texto = "Hola mundo";
    int vocales = 0;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vocales++;
    }
    cout << "Vocales: " << vocales << endl;

    // --- Problema: Palíndromo ---
    // Un palíndromo es una palabra que se lee igual al derecho y al revés.
    cout << "\n--- Palindromo ---" << endl;
    string palabra = "reconocer";
    string invertida = palabra;
    reverse(invertida.begin(), invertida.end());
    cout << (palabra == invertida ? "Es palindromo" : "No es palindromo") << endl;

    // --- Problema: Tabla de multiplicar ---
    cout << "\n--- Tabla de multiplicar ---" << endl;
    int tabla = 7;
    for (int j = 1; j <= 10; ++j) {
        cout << tabla << " x " << j << " = " << tabla * j << endl;
    }

    // --- Problema: Números pares del 1 al 20 ---
    cout << "\n--- Pares del 1 al 20 ---" << endl;
    for (int j = 1; j <= 20; ++j) {
        if (j % 2 == 0) cout << j << " ";
    }
    cout << endl;

    // --- Problema: Suma de dígitos ---
    cout << "\n--- Suma de digitos ---" << endl;
    int numero = 12345, sumaDig = 0;
    int temp = numero;
    while (temp > 0) {
        sumaDig += temp % 10;
        temp /= 10;
    }
    cout << "Suma de digitos de " << numero << ": " << sumaDig << endl;

    // --- Problema: Intercambiar dos variables ---
    cout << "\n--- Intercambiar variables ---" << endl;
    int aa = 5, bb = 10;
    cout << "Antes: a=" << aa << ", b=" << bb << endl;
    int aux = aa;
    aa = bb;
    bb = aux;
    cout << "Despues: a=" << aa << ", b=" << bb << endl;

    // --- Problema: Uso de break y continue ---
    cout << "\n--- Break y Continue ---" << endl;
    for (int j = 0; j < 10; ++j) {
        if (j == 5) break; // Sale del ciclo
        if (j % 2 == 0) continue; // Salta a la siguiente iteración
        cout << j << " ";
    }
    cout << endl;

    // --- Problema: Uso de funciones recursivas (factorial recursivo) ---
    cout << "\n--- Factorial recursivo ---" << endl;
    function<unsigned long long(int)> factRec = [&](int n) {
        return n <= 1 ? 1ULL : n * factRec(n - 1);
    };
    cout << "Factorial de 6: " << factRec(6) << endl;

    // --- Problema: Matriz (arreglo bidimensional) ---
    // Una matriz es un arreglo de dos dimensiones.
    cout << "\n--- Matriz 2x2 ---" << endl;
    int matriz[2][2] = {{1, 2}, {3, 4}};
    for (int fila = 0; fila < 2; ++fila) {
        for (int col = 0; col < 2; ++col) {
            cout << matriz[fila][col] << " ";
        }
        cout << endl;
    }

    // --- Problema: Uso de std::pair ---
    // Un pair almacena dos valores relacionados.
    cout << "\n--- Pair ---" << endl;
    pair<string, int> persona = {"Juan", 30};
    cout << "Nombre: " << persona.first << ", Edad: " << persona.second << endl;

    // --- Problema: Uso de std::map ---
    // Un map almacena pares clave-valor únicos.
    cout << "\n--- Map ---" << endl;
    map<string, int> edades;
    edades["Ana"] = 25;
    edades["Luis"] = 32;
    for (auto& par : edades) {
        cout << par.first << ": " << par.second << endl;
    }

    // --- Problema: Uso de std::set ---
    // Un set almacena valores únicos y ordenados.
    cout << "\n--- Set ---" << endl;
    set<int> conjunto = {1, 2, 2, 3, 4};
    for (int n : conjunto) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::string y sus métodos ---
    // std::string permite manipular cadenas de texto.
    cout << "\n--- String y métodos ---" << endl;
    string cad = "Hola";
    cad += " mundo";
    cout << cad << " (tamaño: " << cad.size() << ")" << endl;
    cout << "Subcadena: " << cad.substr(0, 4) << endl;
    cout << "Buscar 'mun': " << (cad.find("mun") != string::npos ? "Encontrado" : "No encontrado") << endl;

    // --- Problema: Uso de try-catch (manejo de excepciones) ---
    // try-catch sirve para manejar errores en tiempo de ejecución.
    cout << "\n--- Excepciones ---" << endl;
    try {
        int divisor = 0;
        if (divisor == 0) throw runtime_error("Division por cero");
        cout << 10 / divisor << endl;
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    // --- Problema: Uso de archivos (fstream) ---
    // Para leer y escribir archivos.
    cout << "\n--- Archivos ---" << endl;
    ofstream archivo("ejemplo.txt");
    archivo << "Hola archivo!" << endl;
    archivo.close();
    ifstream leer("ejemplo.txt");
    string linea;
    getline(leer, linea);
    cout << "Contenido archivo: " << linea << endl;
    leer.close();

    // --- Problema: Uso de argumentos de línea de comandos ---
    // Se usa en main(int argc, char* argv[])
    // cout << "Argumentos: " << argc << endl;

    // --- Problema: Uso de funciones lambda ---
    // Una lambda es una función anónima.
    cout << "\n--- Lambda ---" << endl;
    auto cuadrado = [](int n) { return n * n; };
    cout << "Cuadrado de 5: " << cuadrado(5) << endl;

    // --- Problema: Uso de typedef y using ---
    // typedef y using
    auto contador = []() {
        static int c = 0;
        return ++c;
    };
    cout << contador() << ", " << contador() << ", " << contador() << endl;

    // --- Problema: Uso de punteros nulos y nullptr ---
    int* pnull = nullptr;
    if (!pnull) cout << "Puntero nulo" << endl;

    // --- Problema: Uso de operadores lógicos y bit a bit ---
    cout << "\n--- Operadores logicos y bit a bit ---" << endl;
    int bitA = 5, bitB = 3;
    cout << "AND: " << (bitA & bitB) << ", OR: " << (bitA | bitB) << ", XOR: " << (bitA ^ bitB) << endl;
    cout << "Desplazamiento izquierda: " << (bitA << 1) << ", derecha: " << (bitA >> 1) << endl;

    // --- Problema: Uso de struct con métodos ---
    struct Punto {
        int x, y;
        void mostrar() { cout << "(" << x << "," << y << ")" << endl; }
    };
    Punto pt = {3, 4};
    pt.mostrar();

    // --- Problema: Uso de enum class ---
    enum class Dia { Lunes, Martes, Miercoles };
    Dia hoy = Dia::Martes;
    cout << "Enum class Dia (Martes=1): " << static_cast<int>(hoy) << endl;

    // --- Problema: Uso de std::array ---
    array<int, 3> arr = {7, 8, 9};
    cout << "std::array: ";
    for (int n : arr) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::tuple ---
    tuple<string, int, double> tupla = make_tuple("Pedro", 28, 1.75);
    cout << "Tuple: " << get<0>(tupla) << ", " << get<1>(tupla) << ", " << get<2>(tupla) << endl;

    // --- Problema: Uso de std::sort ---
    vector<int> ordenar = {5, 2, 8, 1};
    sort(ordenar.begin(), ordenar.end());
    cout << "Ordenado: ";
    for (int n : ordenar) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::unique para eliminar duplicados ---
    vector<int> duplicados = {1, 2, 2, 3, 3, 3, 4};
    sort(duplicados.begin(), duplicados.end());
    auto it = unique(duplicados.begin(), duplicados.end());
    duplicados.erase(it, duplicados.end());
    cout << "Sin duplicados: ";
    for (int n : duplicados) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::transform ---
    vector<int> v2 = {1, 2, 3};
    transform(v2.begin(), v2.end(), v2.begin(), [](int n) { return n * 2; });
    cout << "Transformado x2: ";
    for (int n : v2) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::accumulate ---
    int sumaTotal = accumulate(v2.begin(), v2.end(), 0);
    cout << "Suma total: " << sumaTotal << endl;

    // --- Problema: Uso de std::reverse ---
    reverse(v2.begin(), v2.end());
    cout << "Reverso: ";
    for (int n : v2) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::find ---
    auto found = find(v2.begin(), v2.end(), 4);
    cout << (found != v2.end() ? "Encontrado 4" : "No encontrado 4") << endl;

    // --- Problema: Uso de std::count ---
    int cuenta = count(v2.begin(), v2.end(), 4);
    cout << "Cantidad de 4: " << cuenta << endl;

    // --- Problema: Uso de std::min_element y std::max_element ---
    cout << "Minimo: " << *min_element(v2.begin(), v2.end()) << ", Maximo: " << *max_element(v2.begin(), v2.end()) << endl;

    // --- Problema: Uso de std::swap ---
    int sw1 = 1, sw2 = 2;
    swap(sw1, sw2);
    cout << "Swap: sw1=" << sw1 << ", sw2=" << sw2 << endl;

    // --- Problema: Uso de std::fill ---
    vector<int> v3(5);
    fill(v3.begin(), v3.end(), 7);
    cout << "Relleno con 7: ";
    for (int n : v3) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::copy ---
    vector<int> v4(5);
    copy(v3.begin(), v3.end(), v4.begin());
    cout << "Copia: ";
    for (int n : v4) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::distance ---
    cout << "Distancia entre begin y end: " << distance(v4.begin(), v4.end()) << endl;

    // --- Problema: Uso de std::advance ---
    auto it2 = v4.begin();
    advance(it2, 3);
    cout << "Avanzado 3 posiciones: " << *it2 << endl;

    // --- Problema: Uso de std::for_each ---
    cout << "for_each: ";
    for_each(v4.begin(), v4.end(), [](int n) { cout << n << " "; });
    cout << endl;

    // --- Problema: Uso de std::remove_if ---
    vector<int> v5 = {1, 2, 3, 4, 5};
    v5.erase(remove_if(v5.begin(), v5.end(), [](int n) { return n % 2 == 0; }), v5.end());
    cout << "Sin pares: ";
    for (int n : v5) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::stack ---
    stack<int> pila;
    pila.push(1); pila.push(2); pila.push(3);
    cout << "Stack: ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    // --- Problema: Uso de std::queue ---
    queue<int> cola;
    cola.push(1); cola.push(2); cola.push(3);
    cout << "Queue: ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;

    // --- Problema: Uso de std::priority_queue ---
    priority_queue<int> pq;
    pq.push(3); pq.push(1); pq.push(2);
    cout << "Priority queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // --- Problema: Uso de std::deque ---
    deque<int> dq = {1, 2, 3};
    dq.push_front(0);
    dq.push_back(4);
    cout << "Deque: ";
    for (int n : dq) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::bitset ---
    bitset<8> bits(42); // 00101010
    cout << "Bitset: " << bits << endl;

    // --- Problema: Uso de std::chrono para medir tiempo ---
    cout << "\n--- Medir tiempo ---" << endl;
    auto inicio = chrono::high_resolution_clock::now();
    int sumaTiempo = 0;
    for (int j = 0; j < 1000000; ++j) sumaTiempo += j;
    auto fin = chrono::high_resolution_clock::now();
    chrono::duration<double> duracion = fin - inicio;
    cout << "Tiempo: " << duracion.count() << " segundos" << endl;

    // --- Problema: Uso de std::random ---
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);
    cout << "Numero aleatorio entre 1 y 10: " << dis(gen) << endl;

    // --- Problema: Uso de std::to_string y std::stoi ---
    int numStr = 123;
    string strNum = to_string(numStr);
    int num2 = stoi(strNum);
    cout << "to_string: " << strNum << ", stoi: " << num2 << endl;

    // --- Problema: Uso de std::getline y std::istringstream ---
    cout << "\n--- getline y istringstream ---" << endl;
    string linea2 = "10 20 30";
    istringstream iss(linea2);
    int n1, n2, n3;
    iss >> n1 >> n2 >> n3;
    cout << "Leidos: " << n1 << ", " << n2 << ", " << n3 << endl;

    // --- Problema: Uso de std::toupper y std::tolower ---
    char letra = 'a';
    cout << "Mayuscula: " << (char)toupper(letra) << ", Minuscula: " << (char)tolower('Z') << endl;

    // --- Problema: Uso de std::abs y std::pow ---
    cout << "abs(-5): " << abs(-5) << ", pow(2,3): " << pow(2,3) << endl;

    // --- Problema: Uso de std::sqrt y std::log ---
    cout << "sqrt(16): " << sqrt(16) << ", log(100): " << log(100) << endl;

    // --- Problema: Uso de std::ceil y std::floor ---
    cout << "ceil(2.3): " << ceil(2.3) << ", floor(2.7): " << floor(2.7) << endl;

    // --- Problema: Uso de std::swap para strings ---
    string s1 = "uno", s2 = "dos";
    swap(s1, s2);
    cout << "Swap strings: " << s1 << ", " << s2 << endl;

    // --- Problema: Uso de std::vector<bool> ---
    vector<bool> vb = {true, false, true};
    cout << "Vector<bool>: ";
    for (bool b : vb) cout << b << " ";
    cout << endl;

    // --- Problema: Uso de std::distance en iteradores ---
    cout << "Distance vector: " << distance(vb.begin(), vb.end()) << endl;

    // --- Problema: Uso de std::move ---
    string origen = "origen";
    string destino = move(origen);
    cout << "Move: destino=" << destino << ", origen=" << origen << endl;

    // --- Problema: Uso de std::unique_ptr ---
    unique_ptr<int> uptr(new int(42));
    cout << "unique_ptr: " << *uptr << endl;

    // --- Problema: Uso de std::shared_ptr ---
    shared_ptr<int> sptr = make_shared<int>(99);
    cout << "shared_ptr: " << *sptr << endl;

    // --- Problema: Uso de std::function ---
    function<int(int, int)> sumar = [](int a, int b) { return a + b; };
    cout << "function sumar: " << sumar(3, 4) << endl;

    // --- Problema: Uso de std::bind ---
    auto sumar5 = bind(sumar, 5, placeholders::_1);
    cout << "bind sumar5(10): " << sumar5(10) << endl;

    // --- Problema: Uso de std::exception ---
    try {
        throw logic_error("Ejemplo de excepcion");
    } catch (exception& e) {
        cout << "Excepcion atrapada: " << e.what() << endl;
    }

    // --- Problema: Uso de assert ---
    // assert(2 + 2 == 4); // Si la condición es falsa, termina el programa.

    // --- Problema: Uso de macros ---
    #define CUADRADO(x) ((x)*(x))
    cout << "Macro CUADRADO(4): " << CUADRADO(4) << endl;

    // --- Problema: Uso de preprocesador ---
    #ifdef _WIN32
    cout << "Compilando en Windows" << endl;
    #else
    cout << "Compilando en otro sistema" << endl;
    #endif

    // --- Problema: Uso de namespaces ---
    // Un namespace evita conflictos de nombres.
    namespace Ejemplo {
        int valor = 123;
    }
    cout << "Namespace Ejemplo::valor: " << Ejemplo::valor << endl;

    // --- Problema: Uso de plantillas (templates) ---
    // Permiten escribir funciones o clases genéricas.
    cout << "\n--- Template ---" << endl;
    auto maximo = [](auto a, auto b) { return a > b ? a : b; };
    cout << "maximo(3,7): " << maximo(3,7) << ", maximo('a','z'): " << maximo('a','z') << endl;

    // --- Problema: Uso de operadores sobrecargados ---
    struct Complejo {
        double re, im;
        Complejo(double r, double i) : re(r), im(i) {}
        Complejo operator+(const Complejo& c) const { return {re + c.re, im + c.im}; }
    };
    Complejo c1(1,2), c2(3,4);
    Complejo c3 = c1 + c2;
    cout << "Complejo suma: (" << c3.re << "," << c3.im << ")" << endl;

    // --- Problema: Uso de herencia ---
    class Vehiculo {
    public:
        void mover() { cout << "Vehiculo moviendose" << endl; }
    };
    class Coche : public Vehiculo {
    public:
        void tocarBocina() { cout << "BEEP!" << endl; }
    };
    Coche miCoche;
    miCoche.mover();
    miCoche.tocarBocina();

    // --- Problema: Uso de polimorfismo ---
    class Figura {
    public:
        virtual double area() { return 0; }
    };
    class Circulo : public Figura {
    public:
        double radio;
        Circulo(double r) : radio(r) {}
        double area() override { return 3.14159 * radio * radio; }
    };
    Figura* fig = new Circulo(2.0);
    cout << "Area polimorfica: " << fig->area() << endl;
    delete fig;

    // --- Problema: Uso de this ---
    class DemoThis {
    public:
        int x;
        DemoThis(int x) { this->x = x; }
        void mostrar() { cout << "this->x: " << this->x << endl; }
    };
    DemoThis dt(77);
    dt.mostrar();

    // --- Problema: Uso de friend ---
    class Amigo {
        int secreto = 42;
        friend void mostrarSecreto(const Amigo&);
    };
    void mostrarSecreto(const Amigo& a) {
        cout << "Secreto: " << a.secreto << endl;
    }
    Amigo am;
    mostrarSecreto(am);

    // --- Problema: Uso de static en clases ---
    class Contador {
    public:
        static int cuenta;
        Contador() { cuenta++; }
    };
    int Contador::cuenta = 0;
    Contador cA, cB;
    cout << "Contador::cuenta: " << Contador::cuenta << endl;

    // --- Problema: Uso de operadores de incremento y decremento ---
    int inc = 5;
    cout << "inc++: " << inc++ << ", ++inc: " << ++inc << endl;

    // --- Problema: Uso de operadores de asignación compuesta ---
    int comp = 10;
    comp += 5; // comp = comp + 5
    comp *= 2; // comp = comp * 2
    cout << "Asignacion compuesta: " << comp << endl;

    // --- Problema: Uso de operadores relacionales ---
    cout << "5 > 3: " << (5 > 3) << ", 2 == 2: " << (2 == 2) << endl;

    // --- Problema: Uso de operadores lógicos ---
    cout << "(true && false): " << (true && false) << ", (true || false): " << (true || false) << endl;

    // --- Problema: Uso de operadores de dirección y desreferenciación ---
    int var = 10;
    int* pvar = &var;
    cout << "Direccion: " << pvar << ", Valor: " << *pvar << endl;

    // --- Problema: Uso de operadores de acceso a miembros ---
    struct Persona2 {
        string nombre;
        int edad;
    };
    Persona2 p = {"Luis", 40};
    cout << "Persona2: " << p.nombre << ", " << p.edad << endl;

    // --- Problema: Uso de operadores de acceso a miembros con punteros ---
    Persona2* pp = &p;
    cout << "Persona2 puntero: " << pp->nombre << ", " << pp->edad << endl;

    // --- Problema: Uso de operadores de conversión ---
    double d = 3.14;
    int i2 = (int)d;
    cout << "Conversion double a int: " << i2 << endl;

    // --- Problema: Uso de operadores sizeof ---
    cout << "sizeof(int): " << sizeof(int) << ", sizeof(double): " << sizeof(double) << endl;

    // --- Problema: Uso de operadores condicionales ---
    int edad2 = 20;
    cout << (edad2 >= 18 ? "Mayor de edad" : "Menor de edad") << endl;

    // --- Problema: Uso de operadores coma ---
    int sumaComa = (1, 2, 3); // El valor es el último
    cout << "Operador coma: " << sumaComa << endl;

    // --- Problema: Uso de operadores new y delete ---
    int* pnuevo = new int(123);
    cout << "new int: " << *pnuevo << endl;
    delete pnuevo;

    // --- Problema: Uso de memoria dinámica con new[] y delete[] ---
    int* parr = new int[3]{1,2,3};
    cout << "new[]: ";
    for (int j = 0; j < 3; ++j) cout << parr[j] << " ";
    cout << endl;
    delete[] parr;

    // --- Problema: Uso de punteros a funciones ---
    int (*pf)(int, int) = suma;
    cout << "Puntero a funcion suma: " << pf(2,3) << endl;

    // --- Problema: Uso de recursividad (fibonacci recursivo) ---
    function<int(int)> fibRec = [&](int n) {
        return n <= 1 ? n : fibRec(n-1) + fibRec(n-2);
    };
    cout << "Fibonacci recursivo(6): " << fibRec(6) << endl;

    // --- Problema: Uso de break en ciclos anidados ---
    cout << "\n--- Break en ciclos anidados ---" << endl;
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            if (x == 1 && y == 1) break;
            cout << "(" << x << "," << y << ") ";
        }
    }
    cout << endl;

    // --- Problema: Uso de continue en ciclos anidados ---
    cout << "\n--- Continue en ciclos anidados ---" << endl;
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            if (y == 1) continue;
            cout << "(" << x << "," << y << ") ";
        }
    }
    cout << endl;

    // --- Problema: Uso de goto ---
    cout << "\n--- Goto ---" << endl;
    int g = 0;
    goto salto;
    g = 1;
salto:
    cout << "Valor de g: " << g << endl;

    // --- Problema: Uso de comentarios ---
    // Comentario de una línea
    /*
        Comentario
        de varias líneas
    */

    // --- Problema: Uso de directivas de preprocesador ---
    // #include, #define, #ifdef, #ifndef, #endif, #pragma, etc.

    // --- Problema: Uso de operadores ternarios anidados ---
    int nota = 8;
    cout << (nota >= 9 ? "Excelente" : (nota >= 7 ? "Bien" : "Regular")) << endl;

    // --- Problema: Uso de inicialización uniforme ---
    int arrUni[] {1, 2, 3};
    cout << "Inicializacion uniforme: ";
    for (int n : arrUni) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de nullptr en vez de NULL ---
    int* pn = nullptr;
    if (pn == nullptr) cout << "Es nullptr" << endl;

    // --- Problema: Uso de auto ---
    auto valorAuto = 123.45;
    cout << "auto: " << valorAuto << endl;

    // --- Problema: Uso de decltype ---
    decltype(valorAuto) otroValor = 67.89;
    cout << "decltype: " << otroValor << endl;

    // --- Problema: Uso de static_assert ---
    static_assert(sizeof(int) == 4, "int debe ser de 4 bytes en esta plataforma");

    // --- Problema: Uso de nullptr_t ---
    nullptr_t np = nullptr;
    cout << "nullptr_t: " << (np == nullptr ? "ok" : "fail") << endl;

    // --- Problema: Uso de std::vector con reserve y capacity ---
    vector<int> vcap;
    vcap.reserve(10);
    cout << "vector capacity: " << vcap.capacity() << endl;

    // --- Problema: Uso de std::initializer_list ---
    auto sumaInit = [](initializer_list<int> l) {
        int s = 0;
        for (int n : l) s += n;
        return s;
    };
    cout << "initializer_list suma: " << sumaInit({1,2,3,4}) << endl;

    // --- Problema: Uso de std::array con fill ---
    array<int, 4> arrFill;
    arrFill.fill(9);
    cout << "array fill: ";
    for (int n : arrFill) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::emplace_back ---
    vector<pair<int, string>> vemp;
    vemp.emplace_back(1, "uno");
    vemp.emplace_back(2, "dos");
    for (auto& p : vemp) cout << p.first << "-" << p.second << " ";
    cout << endl;

    // --- Problema: Uso de std::remove para eliminar un valor ---
    vector<int> vrem = {1,2,3,2,4};
    vrem.erase(remove(vrem.begin(), vrem.end(), 2), vrem.end());
    cout << "remove 2: ";
    for (int n : vrem) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::insert ---
    vector<int> vins = {1,2,3};
    vins.insert(vins.begin() + 1, 99);
    cout << "insert: ";
    for (int n : vins) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::erase ---
    vins.erase(vins.begin() + 1);
    cout << "erase: ";
    for (int n : vins) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::clear ---
    vins.clear();
    cout << "clear size: " << vins.size() << endl;

    // --- Problema: Uso de std::vector::empty ---
    cout << "empty: " << (vins.empty() ? "si" : "no") << endl;

    // --- Problema: Uso de std::vector::front y back ---
    vector<int> vfb = {1,2,3};
    cout << "front: " << vfb.front() << ", back: " << vfb.back() << endl;

    // --- Problema: Uso de std::vector::at ---
    cout << "at(1): " << vfb.at(1) << endl;

    // --- Problema: Uso de std::vector::resize ---
    vfb.resize(5, 0);
    cout << "resize: ";
    for (int n : vfb) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::shrink_to_fit ---
    vfb.shrink_to_fit();
    cout << "shrink_to_fit capacity: " << vfb.capacity() << endl;

    // --- Problema: Uso de std::vector::swap ---
    vector<int> v6 = {1,2}, v7 = {3,4};
    v6.swap(v7);
    cout << "swap vector: ";
    for (int n : v6) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::assign ---
    v6.assign(3, 8);
    cout << "assign: ";
    for (int n : v6) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::data ---
    int* pdata = v6.data();
    cout << "data[0]: " << pdata[0] << endl;

    // --- Problema: Uso de std::vector::reverse_iterator ---
    cout << "reverse_iterator: ";
    for (auto rit = v6.rbegin(); rit != v6.rend(); ++rit) cout << *rit << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::const_iterator ---
    cout << "const_iterator: ";
    for (vector<int>::const_iterator cit = v6.begin(); cit != v6.end(); ++cit) cout << *cit << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::cend y cbegin ---
    cout << "cbegin/cend: ";
    for (auto it = v6.cbegin(); it != v6.cend(); ++it) cout << *it << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::emplace ---
    v6.emplace(v6.begin(), 99);
    cout << "emplace: ";
    for (int n : v6) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::pop_back ---
    v6.pop_back();
    cout << "pop_back: ";
    for (int n : v6) cout << n << " ";
    cout << endl;

    // --- Problema: Uso de std::vector::operator[] ---
    v6[0] = 100;
    cout << "operator[]: " << v6[0] << endl;

    // --- Problema: Uso de std::vector::max_size ---
    cout << "max_size: " << v6.max_size() << endl;

    // --- Problema: Uso de std::vector::capacity ---
    cout << "capacity: " << v6.capacity() << endl;

    // --- Problema: Uso de std::vector::reserve ---
    v6.reserve(20);
    cout << "reserve: " << v6.capacity() << endl;

    // --- Problema: Uso de std::vector::size ---
    cout << "size: " << v6.size() << endl;

    // --- Problema: Uso de std::vector::empty ---
    cout << "empty: " << (v6.empty() ? "si" : "no") << endl;

    // --- Problema: Uso de std::vector::clear ---
    v6.clear();
    cout << "clear: " << v6.size() << endl;

    return 0;
}