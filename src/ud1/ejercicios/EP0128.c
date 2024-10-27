/* 
Pide dos números al usuario: a y b. Deberá mostrarse true si ambos números son iguales y false en caso contrario.
*/

#include <stdio.h>

int main () {

    
    unsigned int d1, d2;

    printf("Introduce el primer número entero: ");
    scanf("%u",&d1);
    

    printf("Introduce el segundo número entero: ");
    scanf("%u",&d2);

    printf((d1 == d2) ? "Ambos números tienen el mismo valor" : "Los números son diferentes");
    
}

