/*
    Implementar un programa que pida por teclado un número decimal e indique si es un número 
    casi-cero que son aquellos, positivos o negativos, que se acercan a 0 por menos de 1 unidad, 
    aunque curiosamente el 0 no se considera un número casi-cero. 

    Ejemplos de números casi-cero son el 0,3, el -0,99 o el 0,123; 
    algunos números que no se consideran casi-ceros son: el 12,3, el 0 o el -1.
*/

#include <stdio.h>

int main() { 

    double f;

    printf("Introduce un número decimal: ");
    scanf("%lf",&f);

    if (f == 0){
        printf("El número es igual a 0");
    }
    else if (f < 1 && f > -1){
        printf("El número es casi 0");
    }
    else{
        printf("El número es mayor o menor a 0 por una o más unidades entera");
    }

}