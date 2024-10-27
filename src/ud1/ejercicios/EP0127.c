/* 
Realiza un programa que intercambie los valores de dos variables.
*/


#include <stdio.h>

int main() {

    double a, b;

    printf("Introduce un valor numérico para \"a\": ");
    scanf("%lf",&a);

    printf("Introduce un valor numérico para \"b\": ");
    scanf("%lf",&b);

    double t = a;
    a = b;
    b = t;

    printf("Al intercambiar los valores de las variables el resultado es: \na: %.2f\nb: %.2f",a,b);
    
}
