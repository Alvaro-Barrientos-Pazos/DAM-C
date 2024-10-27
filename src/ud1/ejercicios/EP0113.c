/* 
Dado el siguiente polinomio de segundo grado:

    y = ax² + bx + c

Crea un programa que pida los coeficientes a, b y c, así como el valor de x, y calcula el valor correspondiente de y.
*/

#include <stdio.h>

int main() {

    double a,b,c,x;

    printf("Introduce el valor de:");
    printf("\nA: ");
    scanf("%lf", &a);

    printf("B: ");
    scanf("%lf", &b);

    printf("C: ");
    scanf("%lf", &c);

    printf("X: ");
    scanf("%lf", &x);

    double resultado = a*(x*x) + b*x + c;
    
    printf("y = ax² + bx + c \t[y = %.2f]",resultado);

}