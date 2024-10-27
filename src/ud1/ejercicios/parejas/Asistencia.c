// Driver/Navigator: Álvaro Barrientos Pazos

#include <stdio.h>

int main() {
        
        const double SESSIONS = (240 * 60) / 50;   // número de sesiones de 50m en las 240h.
        const double WARNING_PERC = .06;               
        const double EV_LOST_PERC = .1;                

        double warning = SESSIONS * WARNING_PERC; // 6% de las sesiones
        double evLost  = SESSIONS * EV_LOST_PERC; // 10% de las sesiones
        
        unsigned int faltas; // número de faltas a calcular

        printf("Introduzca el número de faltas a calcular: ");
        scanf("%u",&faltas);

        printf("Número de sesiones de 50': %.0lf\n",SESSIONS);
        printf("Número de faltas sin justificar que implican un apercebimiento: %.0lf\n",warning);
        printf("Número de faltas sin justificar que implican una pérdida de la evaluación continua: %.0lf\n",evLost);

        char *consecuencias = (faltas<=warning) ? "Ningún problema": 
                                (faltas<=evLost) ? "Apercibimiento" : "Pérdida de evaluación continua";
        
        printf(consecuencias);

}
