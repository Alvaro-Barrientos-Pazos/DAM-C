/* 
Convertir un número de segundos introducido por teclado en horas, minutos y segundos. 
*/

#include <stdio.h>

int main() {

    const unsigned char S_MINUTE = 60;
    const unsigned short S_HOUR = S_MINUTE*S_MINUTE;

    unsigned short hours, minutes, seconds;
    unsigned int input_seconds;


    printf("Introduce el número de segundos a transformar en HH:MM:SS\n");
    scanf("%u",&input_seconds); // 'unsigned int' usa el placeholder '%u'

    // Divide entre 3600 para sacar el número de horas
    hours = input_seconds / S_HOUR; 

    // Divide entre 3600 y si queda resto, dividelo entre 60 para sacar los minutos
    minutes = input_seconds % S_HOUR / S_MINUTE;

    // Divide entre 60 y guarda el resto.
    seconds = input_seconds % S_MINUTE;

    printf("%02hu:%02hu:%02hu",hours,minutes,seconds);
    
}