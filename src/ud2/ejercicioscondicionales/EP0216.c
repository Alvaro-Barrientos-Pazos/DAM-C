/*
Utiliza el operador ternario para calcular el valor absoluto de un número que se solicita al usuario por teclado.
*/

#include <stdio.h>

int main() {  

    double n, nAbs;
    
    printf("Introduce un número para calcular su valor absoluto\n");
    scanf("%lf",&n);
    
    nAbs = n < 0 ? n*-1 : n;

    printf("El valor absolute de %.2f es %.2f",n,nAbs);
}
