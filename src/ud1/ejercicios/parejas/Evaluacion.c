// Driver/Navigator: Álvaro Barrientos Pazos

#include <stdio.h>

int main() {

    double funciona, eficiente, estructuras, identificadores, legible, presentacion;
    
    printf("¿El programa funciona?; (0-4) ");
    scanf("%lf",&funciona);


    printf("¿El programa funciona y es eficiente? (0-1) ");
    scanf("%lf",&eficiente);

    printf("¿Usa estructuras y tipos de datos adecuados al problema? (0-1) ");
    scanf("%lf",&estructuras);

    printf("¿Usa identificadores adecuados? (0-1.5) ");
    scanf("%lf",&identificadores);

    printf("¿El programa es legible? (0-1.5) ");
    scanf("%lf",&legible);

    printf("¿Presenta la información completa al usuario? (0-1) ");
    scanf("%lf",&presentacion);

    
    double resultado = funciona + eficiente + estructuras + identificadores + legible + presentacion;
    printf("El resultado final es: %.2lf",resultado);
}
