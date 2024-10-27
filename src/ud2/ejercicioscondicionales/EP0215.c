/*
    Escribe una aplicación que solicite por consola dos números reales que corresponden a la base y la altura de un triángulo. 
    Deberá mostrarse su área, comprobando que los números introducidos por el usuario no son negativos, algo que no tendría sentido.
*/

#include <stdio.h>

int main() {  

    double base, height;

    printf("Introduce las siguientes medidas para calcular el area de un triangulo\n");
    printf("Base en cm: ");
    scanf("%lf",&base);

    printf("Altura en cm: ");
    scanf("%lf",&height);


    if (base <1 || height <1){
        printf("Los números deben ser mayores que cero ");
    }
    else{
        printf("El area del triangulo es: %.2fcm²",base*height/2.);
    }
}
