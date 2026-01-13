
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// No se requieren declaraciones adicionales aquí.

int main() {
    // 1. Mostrar en pantalla DIOS, Patria y Libertad.
    cout << "DIOS, Patria y Libertad." << endl;

    // 2. Intercambiar el valor de dos variables.
    int a, b, temp;
    cout << "\n2. Introduzca dos numeros para intercambiar: ";
    cin >> a >> b;
    cout << "Valores introducidos: a=" << a << ", b=" << b << endl;
    temp = a; a = b; b = temp;
    cout << "Valores intercambiados: a=" << a << ", b=" << b << endl;

    // 3. Mostrar los números del 1 al 100.
    cout << "\n3. Numeros del 1 al 100:" << endl;
    for(int i=1; i<=100; i++) cout << i << " ";
    cout << endl;

    // 4. Mostrar los números entre 40 y 70.
    cout << "\n4. Numeros del 40 al 70:" << endl;
    for(int i=40; i<=70; i++) cout << i << " ";
    cout << endl;

    // 5. Mostrar los números pares del 2 al 20.
    cout << "\n5. Numeros pares del 2 al 20:" << endl;
    for(int i=2; i<=20; i+=2) cout << i << " ";
    cout << endl;

    // 6. Suma de los números del 1 al 50.
    int suma = 0;
    for(int i=1; i<=50; i++) suma += i;
    cout << "\n6. Suma del 1 al 50: " << suma << endl;

    // 7. Tabla de multiplicar del 7.
    cout << "\n7. Tabla del 7:" << endl;
    for(int i=1; i<=10; i++) cout << "7 x " << i << " = " << 7*i << endl;

    // 8. Tabla de multiplicar de un número introducido.
    int num;
    cout << "\n8. Introduzca un numero para su tabla de multiplicar: ";
    cin >> num;
    for(int i=1; i<=10; i++) cout << num << " x " << i << " = " << num*i << endl;

    // 9. Comprobar si un carácter es mayúscula, minúscula o no alfabético.
    char c;
    cout << "\n9. Introduzca un caracter: ";
    cin >> c;
    if(c >= 'A' && c <= 'Z') cout << "Es mayuscula." << endl;
    else if(c >= 'a' && c <= 'z') cout << "Es minuscula." << endl;
    else cout << "No corresponde al alfabeto." << endl;

    // 10. Determinar si un número es positivo o negativo.
    int n;
    cout << "\n10. Introduzca un numero: ";
    cin >> n;
    if(n > 0) cout << "Positivo." << endl;
    else if(n < 0) cout << "Negativo." << endl;
    else cout << "Cero." << endl;

    // 11. Determinar si un número es par.
    cout << "\n11. Introduzca un numero: ";
    cin >> n;
    if(n % 2 == 0) cout << "Par." << endl;
    else cout << "Impar." << endl;

    // 12. Leer dos números y determinar el mayor.
    int x, y;
    cout << "\n12. Introduzca dos numeros: ";
    cin >> x >> y;
    if(x > y) cout << "El mayor es: " << x << endl;
    else if(y > x) cout << "El mayor es: " << y << endl;
    else cout << "Son iguales." << endl;

    // 13. Leer dos números y determinar si la suma es par o impar.
    cout << "\n13. Introduzca dos numeros: ";
    cin >> x >> y;
    if((x + y) % 2 == 0) cout << "La suma es par." << endl;
    else cout << "La suma es impar." << endl;

    // 14. Cambio de dólares a pesos.
    float dolares, tasa;
    cout << "\n14. Introduzca cantidad en dolares y tasa de cambio: ";
    cin >> dolares >> tasa;
    cout << "Equivalente en pesos: " << dolares * tasa << endl;

    // 15. Suma de los dígitos de un número de dos dígitos.
    int num2;
    cout << "\n15. Introduzca un numero de dos digitos: ";
    cin >> num2;
    cout << "Suma de los digitos: " << (num2/10) + (num2%10) << endl;

    // 16. Doble, cubo y mitad de un número.
    cout << "\n16. Introduzca un numero: ";
    cin >> n;
    cout << "Doble: " << n*2 << ", Cubo: " << n*n*n << ", Mitad: " << n/2.0 << endl;

    // 17. Determinar día de la semana.
    int dia;
    cout << "\n17. Introduzca un numero (1-7) para el dia de la semana: ";
    cin >> dia;
    string dias[] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    if(dia >= 1 && dia <= 7) cout << "Dia: " << dias[dia-1] << endl;
    else cout << "Dia invalido." << endl;

    // 18. Calculadora básica.
    float n1, n2, res;
    char op;
    cout << "\n18. Calculadora. Introduzca dos numeros y una operacion (+,-,*,/): ";
    cin >> n1 >> n2 >> op;
    switch(op) {
        case '+': res = n1 + n2; break;
        case '-': res = n1 - n2; break;
        case '*': res = n1 * n2; break;
        case '/': res = n2 != 0 ? n1 / n2 : 0; break;
        default: cout << "Operacion invalida." << endl; return 0;
    }
    cout << "Resultado: " << res << endl;

    // 19. Convertir días a horas.
    int dias2;
    cout << "\n19. Introduzca cantidad de dias: ";
    cin >> dias2;
    cout << dias2 << " dias son " << dias2*24 << " horas." << endl;

    // 20. Convertir años a minutos.
    int anios;
    cout << "\n20. Introduzca cantidad de anios: ";
    cin >> anios;
    cout << anios << " anios son " << anios*365*24*60 << " minutos." << endl;

    // 21. Calcular hipotenusa.
    float cat1, cat2;
    cout << "\n21. Introduzca los dos catetos: ";
    cin >> cat1 >> cat2;
    cout << "Hipotenusa: " << sqrt(cat1*cat1 + cat2*cat2) << endl;

    // 22. Diferencia o suma según el mayor.
    cout << "\n22. Introduzca dos numeros: ";
    cin >> x >> y;
    if(x > y) cout << "Diferencia: " << x-y << endl;
    else cout << "Suma: " << x+y << endl;

    // 23. Precio final con itebis.
    float precio, itebis;
    cout << "\n23. Introduzca precio e itebis (%): ";
    cin >> precio >> itebis;
    cout << "Precio final: " << precio + (precio*itebis/100) << endl;

    // 24. Serie de Fibonacci.
    int fib1=0, fib2=1, fibn, nFib;
    cout << "\n24. Cuantos terminos de Fibonacci?: ";
    cin >> nFib;
    cout << fib1 << " " << fib2 << " ";
    for(int i=2; i<nFib; i++) {
        fibn = fib1 + fib2;
        cout << fibn << " ";
        fib1 = fib2;
        fib2 = fibn;
    }
    cout << endl;

    // 25. Formula general (ax^2+bx+c=0)
    float A, B, C, disc;
    cout << "\n25. Introduzca a, b, c para ax^2+bx+c=0: ";
    cin >> A >> B >> C;
    disc = B*B - 4*A*C;
    if(disc < 0) cout << "No hay soluciones reales." << endl;
    else {
        cout << "x1 = " << (-B + sqrt(disc))/(2*A) << ", x2 = " << (-B - sqrt(disc))/(2*A) << endl;
    }

    // 26. Año bisiesto.
    int year;
    cout << "\n26. Introduzca un anio: ";
    cin >> year;
    if((year%4==0 && year%100!=0) || (year%400==0)) cout << "Es bisiesto." << endl;
    else cout << "No es bisiesto." << endl;

    // 27. Calculo de notas.
    float notas[4], examen, prom=0;
    cout << "\n27. Introduzca 4 notas y nota de examen final: ";
    for(int i=0; i<4; i++) cin >> notas[i];
    cin >> examen;
    for(int i=0; i<4; i++) prom += notas[i];
    prom /= 4;
    float setenta = prom*0.7, treinta = examen*0.3, final = setenta+treinta;
    cout << "Promedio: " << prom << ", 70%: " << setenta << ", 30%: " << treinta << ", Nota final: " << final << endl;
    if(final < 70) cout << "Reprobo la materia." << endl;
    else cout << "Aprobo la materia." << endl;

    // 28. Cantidad de caracteres en una palabra.
    string palabra;
    cout << "\n28. Introduzca una palabra: ";
    cin >> palabra;
    cout << "Cantidad de caracteres: " << palabra.length() << endl;

    // 29. Posicion de la letra 'L' en "HOLA".
    string hola = "HOLA";
    size_t pos = hola.find('L');
    cout << "\n29. La letra 'L' esta en la posicion: " << (pos != string::npos ? pos+1 : 0) << endl;

    // 30. Factorial de 7.
    int fact = 1;
    for(int i=1; i<=7; i++) fact *= i;
    cout << "\n30. Factorial de 7: " << fact << endl;

    // 31. Calculo de capital (simple: C = P*(1+rt))
    float P, r, t;
    cout << "\n31. Introduzca capital, tasa anual (%) y tiempo (anios): ";
    cin >> P >> r >> t;
    cout << "Capital final: " << P*(1 + (r/100)*t) << endl;

    // 32. Fahrenheit a Celsius.
    float F;
    cout << "\n32. Introduzca grados Fahrenheit: ";
    cin >> F;
    cout << "Celsius: " << (F-32)*5/9 << endl;

    // 33. Celsius a Fahrenheit.
    float C2;
    cout << "\n33. Introduzca grados Celsius: ";
    cin >> C2;
    cout << "Fahrenheit: " << (C2*9/5)+32 << endl;

    // 34. Leer 20 números y mostrar los positivos.
    cout << "\n34. Introduzca 20 numeros: ";
    for(int i=0; i<20; i++) {
        cin >> n;
        if(n > 0) cout << n << " ";
    }
    cout << endl;

    // 35. Promedio de tres calificaciones como entero.
    int cal1, cal2, cal3;
    cout << "\n35. Introduzca tres calificaciones: ";
    cin >> cal1 >> cal2 >> cal3;
    cout << "Promedio entero: " << (cal1+cal2+cal3)/3 << endl;

    // 36. Calificacion A, B, C.
    int nota;
    cout << "\n36. Introduzca la nota: ";
    cin >> nota;
    if(nota >= 90 && nota <= 100) cout << "Calificacion: A" << endl;
    else if(nota >= 80 && nota < 90) cout << "Calificacion: B" << endl;
    else if(nota >= 70 && nota < 80) cout << "Calificacion: C" << endl;
    else cout << "Fuera de rango." << endl;

    return 0;
}
