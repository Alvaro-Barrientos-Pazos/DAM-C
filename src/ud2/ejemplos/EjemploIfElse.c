
#include <stdio.h>

int main() {  

        double score;
        
        printf("Nota: ");
        scanf("%lf",score);        

        if (score >= 5) {
            printf("Enhorabuena!! Has aprobado");
        } 
        else {
            printf("Has suspendido");
        }

        printf("Hasta pronto");
}
