// Archivo de ejemplo: condicionales en Cpp
#include <iostream>

using namespace std;  


int main (){


 // 1 crear una condicion que determine si puedes entrar a un lugar en especifico
    int edad;
    cout <<" Ingrese su edad para saber si califica para entrar: " << endl;
    cin >> edad;

    if(cin.fail()){
        cout << "Caracter invalido " << endl;}
    else if (edad <18){
  cout <<" No tienes acceso para entrar: " << endl;
    }else if (edad>=18 && edad <=100){
        cout << " Tienes la edad para entrar: " << endl;
    } else {
       cout << " No pusiste una edad valida";
    }
       
// 2. numero impar o par
         int x;

        cout << " Ingresa un numero y dire si es par o impar: ";
        cin >> x;

        if (x % 2 ==0){
            cout << " El numero " << x << " es par ";
        }else{ 
            cout << "EL numero " << x << "es impar ";
        }



// 3. Comparar dos números
// 4. Clasificador de edades
// 5. Verificar contraseñas
// 6. Calculadora de descuentos
// 7. Detector de año bisiesto
// 8. Simulador de semáforo
// 9. Validar entrada numérica
// 10. Sistema de calificació
// 11. Pide un número y verifica si es exactamente igual a 100, menor o mayor.
// 12. Pide una palabra y determina si contiene más de 8 caracteres o no.
// 13. Pide un número entero y revisa si es divisible entre 4 pero no entre 8.
// 14. Pide dos números y muestra si la resta es positiva, negativa o cero.
// 15. Pide un número y muestra si está entre 10 y 20 inclusive.
// 16. Pide una edad y muestra si es mayor o menor de edad.
// 17. Pide tres números y muestra cuál es el mayor.
// 18. Pide una letra y muestra si es vocal o consonante.
// 19. Pide un año y determina si es bisiesto.
// 20. Pide una contraseña y valida si tiene más de 6 caracteres.

// 21. Pide una nota y muestra si el estudiante aprueba o reprueba.
// 22. Pide un número y muestra si termina en 0, 5 o en otro dígito.
// 23. Pide una cadena y verifica si contiene la palabra “hola”.
// 24. Pide un número y muestra si es divisible entre 3.
// 25. Pide un número y verifica si es múltiplo de 2 y 3 a la vez.
// 26. Pide dos cadenas y muestra si son iguales ignorando mayúsculas.
// 27. Pide un número y muestra si está fuera del rango 50–100.
// 28. Pide un número y clasifícalo en “bajo”, “medio” o “alto”.
// 29. Pide un número flotante y verifica si tiene parte decimal.
// 30. Pide tres números y determina si pueden formar un triángulo.

// 31. Pide un número del 1 al 7 y muestra el día de la semana.
// 32. Pide una letra y determina si es mayúscula o minúscula.
// 33. Pide un número y revisa si está entre 1 y 100.
// 34. Pide una cantidad y aplica un descuento si supera 100.
// 35. Pide un número y muestra si es primo usando condicionales simples.
// 36. Pide la hora y determina si es mañana, tarde o noche.
// 37. Pide una edad y clasifica: niño, adolescente, adulto, anciano.
// 38. Pide el nombre de un mes y muestra cuántos días tiene (simplificado).
// 39. Pide un número y muestra si es doble o triple de otro número ingresado.
// 40. Pide tres lados y determina el tipo de triángulo.

// 41. Pide un carácter y verifica si es un número.
// 42. Pide dos números y verifica si uno es divisor del otro.
// 43. Pide un número y muestra si termina en número par.
// 44. Pide un número y determina si es cuadrado perfecto (solo con condicionales).
// 45. Pide una frase y verifica si empieza con mayúscula.
// 46. Pide un número y determina si es mayor que su reverso (invertido).
// 47. Pide una temperatura y clasifica en frío, templado, caliente.
// 48. Pide un número y verifica si es perfecto (solo condicionales simples).
// 49. Pide una calificación del 1 al 5 y muestra un mensaje.
// 50. Pide hora y minuto y determina si es una hora válida.

// 51. Pide un número de tres dígitos y verifica si es capicúa.
// 52. Pide una palabra y determina si termina en vocal.
// 53. Pide dos números y determina si la suma es mayor que 100.
// 54. Pide un número del 1 al 12 y determina la estación del año.
// 55. Pide un número y verifica si todos sus dígitos son pares.
// 56. Pide un número y revisa si es potencia de 2 usando condicionales.
// 57. Pide una letra y verifica si es un símbolo o letra/numero.
// 58. Pide un número y clasifica en centenas (100, 200, 300...).
// 59. Pide un número de cuatro cifras y revisa si la suma de sus dígitos es par.
// 60. Pide un número y verifica si es mayor que el promedio de tres números ingresados.

// 61. Pide un número y determina si está más cerca de 0, 50 o 100.
// 62. Pide dos fechas simples (día y mes) y compara cuál es primero.
// 63. Pide un texto y revisa si contiene espacios.
// 64. Pide un número y verifica si termina en los dígitos 1, 2, 3 o no.
// 65. Pide un número y revisa si pertenece a los primeros 10 múltiplos del 7.
// 66. Pide dos números y muestra si su producto es mayor que su suma.
// 67. Pide un número y valida si su primer dígito es mayor que el último.
// 68. Pide un carácter y revisa si es vocal acentuada.
// 69. Pide una palabra y revisa si contiene doble letra.
// 70. Pide una edad y muestra un mensaje especial si tiene 18 exactos.

// 71. Pide una fecha simple y determina en qué trimestre del año cae.
// 72. Pide dos palabras y revisa si una contiene a la otra.
// 73. Pide un string y verifica si todo es mayúscula.
// 74. Pide una hora y verifica si está en formato 24h válido.
// 75. Pide un número y determina si es “feliz” con condicionales básicos.
// 76. Pide dos números y revisa cuál tiene más divisores.
// 77. Pide un número y revisa si su parte entera es igual a su parte decimal invertida.
// 78. Pide tres números y determina si forman progresión aritmética.
// 79. Pide un número y revisa si es divisible por la suma de sus dígitos.
// 80. Pide un número y clasifícalo según su último dígito.

// 81. Pide una letra y verifica si está entre 'a' y 'm' o entre 'n' y 'z'.
// 82. Pide un número y revisa si su segundo dígito es mayor que el primero.
// 83. Pide una temperatura y revisa si es fiebre, normal o hipotermia.
// 84. Pide dos números y determina si la resta absoluta es mayor que 50.
// 85. Pide una palabra y revisa si todas sus letras son distintas.
// 86. Pide una palabra y determina si tiene más vocales que consonantes.
// 87. Pide un número y clasifícalo como chico, mediano o grande según su cantidad de dígitos.
// 88. Pide tres palabras y determina si la tercera está entre las primeras dos alfabéticamente.
// 89. Pide un número y verifica si sus dígitos están en orden ascendente.
// 90. Pide una cadena y determina si contiene números sin usar funciones avanzadas.

// 91. Pide una edad y determina si puede conducir, beber o ninguno.
// 92. Pide un número y clasifica según si es primo, par o “ninguno”.
// 93. Pide dos strings y revisa si tienen el mismo número de vocales.
// 94. Pide tres números y determina si el segundo está entre los otros dos.
// 95. Pide un número de tres dígitos y revisa si la suma de los dos primeros es igual al último.
// 96. Pide un string y revisa si empieza y termina en la misma letra.
// 97. Pide un número y clasifica según su residuo módulo 4.
// 98. Pide dos números y revisa si el mayor es múltiplo del menor.
// 99. Pide un número decimal y muestra si se redondea hacia arriba o abajo (sin round).
// 100. Pide tres números y determina si al menos dos son iguales.








}
