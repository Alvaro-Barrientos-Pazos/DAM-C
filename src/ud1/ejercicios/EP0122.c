/* 
Convertir una temperatura introducida por teclado en grados Farenheit a grados Celsius o centígrados, mostrando el resultado por pantalla. 
    C = 5/9 * (f-32)
*/

#include <stdio.h>

int main(){

    double f,c;

    printf("Introduce una temperatura en grados Farenheit para la conversión en Celsius\n");
    printf("Introduce la cantidad de grados Farenheit: ");
    scanf("%lf",&f);
    c = 5./9 *(f-32);

    printf("El resultado es: %.2fCº",c);

}
