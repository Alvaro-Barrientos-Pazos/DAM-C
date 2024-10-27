/* 
    Programa que lee una nota y escribe la calificación correspondiente
*/

#include <stdio.h>

int main() {                                                                      
        double score;

        printf("Introduzca una score entre 0 y 10: ");
        scanf("%lf",&score);
        
        printf("La calificación del alumno es ");
        if (score < 0 || score > 10) {
            printf("score no válida");
        } else if (score == 10) {
            printf("Matrícula de Honor");
        } else if (score >= 9) {
            printf("Sobresaliente");
        } else if (score >= 7) {
            printf("scoreble");                                                                        
        } else if (score >= 6) {
            printf("Bien");
        } else if (score >= 5) {
            printf("Suficiente");
        } else printf("Suspenso");

}