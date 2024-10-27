/*
    Haz un programa que pida por teclado un número de año y que muestre un mensaje indicando 
    si el año es bisiesto o no. Investiga el agoritmo para calcular si un año es bisiesto o no.

    “Año bisiesto es el divisible entre 4, salvo que sea año secular es decir divisible por 100,
    en cuyo caso también ha de ser divisible entre 400.”

        Ejemplos:
        Son bisiestos: 4, 40, 120, 144, 400, 800, 2024. 
        No son bisiestos: 3, 100, 2100
*/

#include <stdio.h>

int main() {  
    
    unsigned int year;

    printf("Introduce un número de años: ");
    scanf("%u",&year);

    if (year%4 == 0 && year%100 != 0 || year%400 == 0){
        printf("El año es bisiesto");
    }
    else{
        printf("El año no es bisiesto");
    }
}