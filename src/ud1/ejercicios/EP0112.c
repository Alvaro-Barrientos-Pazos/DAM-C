/* 
Crea un programa que pida la base y la altura de un triángulo y muestre su área.
    Área Triángulo = (base * altura) / 2
*/

#include <stdio.h>

int main() {

    double base, height;

    printf("¿Cual es la base del triángulo en cm?: ");
    scanf("%lf", &base);
    printf("\n¿Cual es la altura del triángulo en cm?: ");
    scanf("%lf", &height);
    
    printf("El area del triángulo es de: %.2fcm²\n",base*height/2);

}
