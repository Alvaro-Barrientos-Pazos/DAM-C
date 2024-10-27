/*
    Escribir un programa que pida una hora de la siguiente forma: hora, minutos y segundos. El programa debe mostrar qué hora será un segundo más tarde. 
    Por ejemplo: hora actual (10:41:59) => hora actual + 1 segundo (10:42:00)
*/

#include <stdio.h>

int main() {  

    const int SECONDS_HOUR = 60*60;  // Segundos en una hora
    const int SECONDS_MINUTES = 60;  // Segundos en un minuto


    unsigned int hours, minutes, seconds;

    printf("Introduce el número de horas: ");
    scanf("%u",&hours);
    
    printf("Introduce el número de minutos: ");
    scanf("%u",&minutes);
    
    printf("Introduce el número de segundos: ");
    scanf("%u",&seconds);
        
    unsigned int segundosBase = hours * SECONDS_HOUR + minutes * SECONDS_MINUTES + seconds + 1;

    unsigned int nHours   = segundosBase / SECONDS_HOUR;                       // Divide entre 3600 para sacar el número de horas
    unsigned int nMinutes = segundosBase % SECONDS_HOUR / SECONDS_MINUTES;     // Divide entre 3600 y si queda resto, dividelo entre 60 para sacar los minutos
    unsigned int nSeconds = segundosBase % SECONDS_MINUTES;                    // Divide entre 60 y guarda el resto.


    // Usar un digito entre % y d permite "reservar" el espacio de un caracter en caso de que el número de caracter no llege a la cantidad indicada.
    // Si usamos un %0 rellenar el espacio de los caracteres indicados con ceros.
    // Si el número de caracteres de nuestra cifra es superior al indicado en la etiqueta no se apreciara su efecto.
    printf("%02d:%02d:%02d más un segundo son: %02d:%02d:%02d",hours,minutes,seconds,nHours,nMinutes,nSeconds);
    
}
