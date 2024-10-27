
#include <stdio.h>

int main() {
    
        unsigned int hour;
        
        printf("Introduce una hora: ");
        scanf("%u",&hour);

        if (hour >= 0 && hour < 12) {
            printf("Buenos días\n");
        } 
        else if ( hour >= 12 && hour < 21) {
            printf("Buenas tardes\n");
        }
        else if ( hour >= 21 && hour < 24) {
            printf("Buenas noches\n");
        }
        else {
            printf("Hora no válida\n");
        }

        printf("Hasta pronto");
}
