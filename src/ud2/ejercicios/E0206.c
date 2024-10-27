/*
    Solicitar dos números y mostrar cuál es el mayor o si son iguales
*/


#include <stdio.h>

int main() {  
    double n1;
    double n2;

    printf("Introduce un valor para el primer número: ");
    scanf("%lf",&n1);

    printf("Introduce un valor para el segundo número: ");
    scanf("%lf",&n2);


    if (n1 == n2) {
        printf("Ambos números tienen el mismo valor");
        
    }
    else if (n1 > n2) {
        printf("%.2f es mayor que %.2f",n1,n2);
    }
    else {
        printf("%.2f es mayor que %.2f",n2,n1);
    }

}
