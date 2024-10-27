/* 
Solicita al usuario un número real y calcula su raíz cuadrada. Implementa el programa utilizando el nombre cualificado de las clases, 
en lugar de utilizar ninguna importación.
*/
#include <stdio.h>
#include <math.h>

int main() {     
    
    double n;

    printf("Introduce un número para calcular su raíz cuadrada: ");
    scanf("%lf",&n);

    printf("El resultado es: %.2f",sqrt(n));
        
}
