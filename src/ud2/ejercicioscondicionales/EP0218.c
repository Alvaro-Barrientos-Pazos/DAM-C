/*
Modifica la actividad anterior (EP0217) para que, además de los dos números aleatorios, 
también aparezca aleatoriamente la operación que debe realizar el jugador: suma, resta o multiplicación.

Amplía el programa anterior para que muestre el número de segundos que el usuario ha tardado en responder. Utiliza la clase LocalTime.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const unsigned char MAX = 99;
    const unsigned char MIN = 1;
    const unsigned char N_OPERATORS = 3;

    // Para guardar el tiempo en el cual empezamos a contar y el de finalizado creamos una struct del tipo timespec, estas estructuras tienen sus propias variables llamadas miembros:
    // tv_sec:  Numero de segundos
    // tv_nsec: Numero de nanosegundos
    //
    // Nosotros necesitamos dos estructuras una para el comienzo y otra para el final y luego podemos acceder a sus miembros con la siguiente syntaxis:
    // 'start.tv_sec' o 'start.tv_nsec'
    // 'end.tv_sec' o 'end.tv_nsec'
    struct timespec start, end;
    // Esta funcion devuelve un valor, dependiendo de los argumentos y lo guarda en el puntero:
    // - CLOCK_MONOTONIC: Usa el tiempo que lleva el equipo encendido y siempre es un valor ascendente y constante
    // - CLOCK_REALTIME: Usa la hora del sistema, la cual puede cambiarse a una fecha en el pasado, por lo que no es ideal para contar el tiempo.
    clock_gettime(CLOCK_MONOTONIC, &start);

    srand(time(NULL));

    unsigned char a = (rand() % MAX) + MIN;
    unsigned char b = (rand() % MAX) + MIN;
    unsigned char operator = (rand() % N_OPERATORS) + 1;
    int result = -1;
    char cOperator = '+';

    switch (operator) {
        case 1:
            result = a + b;
            break;
        case 2:
            cOperator = '-';
            result = a - b;
            break;
        case 3:
            cOperator = '*';
            result = a * b;
            break;
    }

    printf("¿Cuál es el resultado de %d %c %d?\n", a, cOperator, b);
    
    int input;
    scanf("%d", &input);

    // Volvemos a llamar a la funcion para guardar el momento en el que el usuario introduce el resultado.
    clock_gettime(CLOCK_MONOTONIC, &end);

    long seconds = end.tv_sec - start.tv_sec;

    const int S_MINUTES = 60;
    const int S_HOUR = S_MINUTES * S_MINUTES;

    int minutes = (seconds % S_HOUR) / S_MINUTES;
    int hours = seconds / S_HOUR;
    int secondsRemaining = seconds % S_MINUTES;

    printf("%s [%02d:%02d:%02d]\n", input == result ? "Correcto" : "Incorrecto", hours, minutes, secondsRemaining);

}