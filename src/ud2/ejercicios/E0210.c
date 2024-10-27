/*
    Pedir una nota entera de 0 a 10 y mostrarla de la siguiente forma: 
    insuficiente (de 0 a 4), suficiente (5), bien (6), notable (7 y 8) y sobresaliente (9 y 10).
*/

#include <stdio.h>

int main() {  

    unsigned int score;

    printf("Introduce un número entero (de 0 a 10): ");
    scanf("%u",&score);
    
    switch (score) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Insuficiente");
            break;
    
        case 5: 
            printf("Suficiente");
            break;
        
        case 6:
            printf("Bien");
            break;
        
        case 7:
        case 8:
            printf("Notable");
            break;

        case 9:
        case 10:
            printf("Sobresaliente");
            break;

        default:
            printf("La nota es invalida");
            break;
    }
}
