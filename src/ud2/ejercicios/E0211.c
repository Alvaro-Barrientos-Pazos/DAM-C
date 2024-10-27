/*
    Idear un programa que solicite al usuario un número comprendido entre 1 y 7, correspondiente a un día de la semana. 
    Se debe mostrar el nombre del día de la semana al que corresponde. Por ejemplo, el número 1 corresponde a “lunes” y el 6 a “sábado”.
*/

#include <stdio.h>

int main() {  
        
    unsigned char dayIndex;
    
    printf("Introduce un número entero entre 1 y 7: ");
    scanf("%hhu",dayIndex);
    

    switch (dayIndex) {
        case 1:
            printf("Lunes");                
            break;
    
        case 2:
            printf("Martes");                
            break;

        case 3:
            printf("Miercoles");                
            break;

        case 4:
            printf("Jueves");                
            break;

        case 5:
            printf("Viernes");                
            break;

        case 6:
            printf("Sabado");                
            break;

        case 7:
            printf("Domingo");                
            break;

        default:
            printf("Número invalido");    
            break;

    }

}
