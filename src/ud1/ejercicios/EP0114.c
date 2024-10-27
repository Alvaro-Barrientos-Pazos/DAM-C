/* 
Convertir un número de horas, minutos y segundos introducidos por teclado en un número total de segundos. 
*/

#include <stdio.h>

int main() {

    // unsigned los valores no pueden ser negativos
    // char tiene el tamaño de 1 byte puede ser usado para guardar valores entre -128 a 127
    // unsigned char cuenta todos los bits como numeros positivos, doblando el numero maximo de la variable: 0 al 255
    const unsigned char S_MINUTE = 60;
    const unsigned short S_HOUR  = S_MINUTE * S_MINUTE; // El valor excede 255 por lo que usamos un tipo de variable mas grande
    
    unsigned short hours,minutes,seconds;

    printf("Introduce un número de horas: ");
    scanf("%hu",&hours); // 'unsigned short' usa el placeholder '%hu'

    printf("Introduce un número de minutos: ");
    scanf("%hu",&minutes);

    printf("Introduce un número de segundos: ");
    scanf("%hu",&seconds);
    

    unsigned int nSeconds = hours * S_HOUR + minutes * S_MINUTE + seconds;

    printf("El número total de segundos es: %d\n",nSeconds);

}

