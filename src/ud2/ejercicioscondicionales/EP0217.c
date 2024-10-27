/*
    Realiza el “juego de la suma”, que consiste en que aparezcan dos números aleatorios (comprendidos entre 1 y 99) que el usuario tiene que sumar. 
    La aplicación debe indicar si el resultado de la operación es correcto o incorrecto.

    Pista: Puedes utilizar el método random() de la clase Math o la clase Random.

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {  
    
    const unsigned char MAX = 99;
    const unsigned char MIN = 1;

    // Para garantizar una generacion de numeros random, podemos usar como semilla del random 
    // time(NULL) el cual devuelve la fecha en formato unix epoch:
    // Esto es igual al numero de segundos que han pasado desde el 1 de Enero de 1970 a las 00:00:00 UTC
    // Si no usamos una nueva semilla de cada vez los resultados de random seran los mismo hasta que cambiemos de semilla.
    srand(time(NULL));

    int a = (rand() % MAX) + MIN;
    int b = (rand() % MAX) + MIN;

    unsigned char resultado;
    
    printf("Cual es el resultado de %d + %d?\n",a,b);
    scanf("%hhu",&resultado);


    printf(resultado == a + b ? "Correcto" : "Incorrecto");

}
