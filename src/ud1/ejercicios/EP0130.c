/* 
Repite el programa anterior para que, indicando dos números n y m, diga que cantidad hay que sumarle a n para que sea múltiplo de m.

Programa anterior: 
Escribe un programa que tome como entrada un número entero e indique qué cantidad hay que sumarle para que el resultado sea múltiplo de 7. Un ejemplo:

A 2 hay que sumarle 5 para que el resultado (2+5=7) sea múltiplo de 7.
A 13 hay que sumarle 1 para que el resultado (13+1=14) sea múltiplo de 7.
A 14 no hay que sumarle nada (0) para que sea múltiplo de 7
*/

#include <stdio.h>

int main() {
    
    unsigned int n, m;

    printf("Introduce un entero número: ");
    scanf("%u",&n);

    printf("Introduce el número que ser múltiplo de %u: ",n);
    scanf("%u",&m);

    int diff = n-(m%n);

    char *output = diff == n ? "%u es ": "%u necesita sumar %u ser ";
    
    printf(output, m, diff);
    printf("múltiplo de %u",n);
        
}
