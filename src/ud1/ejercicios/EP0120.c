/* 
Una empresa que gestiona un parque acuático te solicita una aplicación que les ayude a calcular el importe que hay que cobrar en la taquilla 
por la compra de una serie de entradas (cuyo número será introducido por el usuario). 
Existen dos tipos de entrada: infantiles, que cuestan 15,50 €; y de adultos, que cuestan 20 €.
En el caso de que el importe total sea igual o superior a 100 €, se aplicará automáticamente un bono descuento del 5%.
*/

#include <stdio.h>

int main(){
    const unsigned char THRESHOLD_DISCOUNT = 100;
    const float DISCOUNT = 0.05f;

    // Precios
    const float CHILD_TICKET_PRICE = 15.5f;
    const float ADULT_TICKET_PRICE = 20.f;

    // Coste total
    float tChildren; 
    float tAdults;
    float tPrice;  // Ambos adultos e infantiles

    unsigned short input;
    char *mensaje; // Guarda la direccion del primer char de una string de la cual no sabemos el tamaño.

    printf("Introduce el número de tickets para infantes: ");
    scanf("%hu",&input);
    tChildren = input * CHILD_TICKET_PRICE;

    printf("Introduce el número de tickets para adultos: ");
    scanf("%hu",&input);
    tAdults = input * ADULT_TICKET_PRICE;

    tPrice = tAdults + tChildren;

    float tDiscount = (tPrice >= THRESHOLD_DISCOUNT) ? tAdults * (1-DISCOUNT) : tAdults;

    mensaje = (tPrice >= THRESHOLD_DISCOUNT) ? "\nTOTAL DESCUENTO: %.2f€ (-%.2f€)" : "\nNo se aplica descuento a cantidades menores a 100€";
    
    printf("Los precios son:\n- Infantes:\t %.2f€\n- Adultos:\t %.2f€\nTOTAL:\t\t %.2f€",tChildren, tAdults, tPrice);
    printf(mensaje, tDiscount, (tPrice)-tDiscount);

}
 