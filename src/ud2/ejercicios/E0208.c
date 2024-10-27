/*
Pedir los coeficientes de una ecuación de segundo grado y mostrar sus 
soluciones reales. 

    (ax² + bx + c = 0) 

    x = -b + sqr(b²-4 * a *c ) / (a*2)
    x = -b - sqr(b²-4 * a *c ) / (a*2)
*/

#include <stdio.h>
#include <math.h>

int main() {  

    double a, b, c;

    printf("Introduce el valor de a: ");
    scanf("%lf",&a);

    printf("Introduce el valor de b: ");
    scanf("%lf",&b);

    printf("Introduce el valor de c: ");
    scanf("%lf",&c);

    // Discriminante
    double discriminant = b * b - 4 * (a * c); 


    if (discriminant < 0){
        printf("El ejercicio no tiene solucion en números reales\n");
    }
    else {
        double sqroot = sqrt(discriminant);
        
        double positive = -b + sqroot;
        double negative = -b - sqroot;

        positive = positive / (2*a);
        negative = negative / (2*a);
    
        printf("El primer resultado es: %.3f\n",positive);
        printf("El segundo resultado es: %.3f\n",negative);
    }
}
