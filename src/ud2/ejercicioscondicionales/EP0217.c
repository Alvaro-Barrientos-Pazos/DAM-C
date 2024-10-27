/*
Realiza el “juego de la suma”, que consiste en que aparezcan dos números aleatorios (comprendidos entre 1 y 99) que el usuario tiene que sumar. 
La aplicación debe indicar si el resultado de la operación es correcto o incorrecto.

Pista: Puedes utilizar el método random() de la clase Math o la clase Random.

*/

#include <stdio.h>

int main() {  

    // (Math.random() * MAX+1 -1 ) + MIN
    int a = (int)(Math.random() * MAX ) + MIN;
    int b = (int)(Math.random() * MAX ) + MIN;

    System.out.printf("Cual es el resultado de %d + %d?\n",a,b);
    int resultado = sc.nextInt();

    System.out.println(resultado == a + b ? "Correcto" : "Incorrecto");

}