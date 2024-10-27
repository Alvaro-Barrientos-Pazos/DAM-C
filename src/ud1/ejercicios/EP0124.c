/* 
Repite el programa anterior para convertir entre litros y galones:
    1 galón (estadounidense) = 3.78541 litros
 */

#include <stdio.h>

int main() {
        
    const double LITER_GALLON = 3.78541;                                         // Cantidad de galones en un litro
    const unsigned short LITER_KILO = 1000;                                      // Cantidad de litros en un Kilolitro

    double quantity;                                                             // Cantidad de la unidad de volumen
    unsigned char isKilos;                                                                // Unidad de medida

    printf("Introduce una unidad de volumen:\n Galones = 0\n KiloLitros = 1\n");
    scanf("%hhu",&isKilos);

    printf("Introduce una cantidad: ");
    scanf("%lf",&quantity);

    quantity = isKilos ? quantity*LITER_KILO : quantity*LITER_GALLON;            // Conversión a litros

    char *unitShortName[] = {"Kl","gal"};                                        // Letra de la unidad a la que se va a convertir
    char *unitLongName[]  = {"kilo litros","galones"};                           // Nombre de la completo de la unidad a la que se va a convertir
    double qResult = (isKilos) ? quantity/LITER_GALLON : quantity/LITER_KILO;      // Conversión de litros a la unidad opuesta a la introducida
    
    printf("El resultado en %s es: %.2f%s%n",unitLongName[isKilos],qResult,unitShortName[isKilos]);

}
