/*
    Escribe un programa que calcule el dinero recaudado en un concierto. La aplicación solicitará el aforo máximo de local, 
    el precio por entrada (suponemos que todas las entradas tienen el mismo precio). Hay que tener en cuenta que 
    si el número de entradas vendidas no supera el 20% del aforo del local, se cancela el concierto. 
    Si el número de entradas no supera el 50% del aforo del local, se realiza una rebaja del 25% del precio de la entrada.
*/

#include <stdio.h>

int main() {  
        
        const double THRESHOLD_CANCELLATION = 0.2;
        const double THRESHOLD_DISCOUNT     = 0.5;
        const double DISCOUNT               = 0.25;
        
        unsigned int max_capacity;
        unsigned int capacity;
        double price;
        
        printf("Introduce el número de aforo máximo: ");
        scanf("%u",&max_capacity);

        printf("Introduce el número de aforo: ");
        scanf("%u",&capacity);

        printf("Introduce el precio de las entradas: ");
        scanf("%lf",&price);
        
        if (capacity <= max_capacity * THRESHOLD_CANCELLATION){
            printf("El concierto será ser cancelado");    
        }
        else if (capacity < max_capacity * THRESHOLD_DISCOUNT){
            printf("El precio se ha reducido a: %.2lf",price*(1-DISCOUNT));
            
        }
        else {
            printf("Precio normal de: %.2lf",price);
        }
}
