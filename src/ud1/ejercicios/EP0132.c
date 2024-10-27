/* 
Crea un programa en Java que convierta unidades de área entre metros cuadrados, hectáreas y pies cuadrados. El usuario deberá ingresar la cantidad de área y especificar 
las unidades de origen y destino.

    1 hectárea       = 10,000 metros cuadrados
    1 metro cuadrado = 10.7639 pies cuadrados

El programa debe realizar la conversión y mostrar el resultado al usuario.
*/

#include <stdio.h>

int main() {
    const unsigned short HECTARE_M2 = 10000;   // 1ht a m²
    const double FEET_M2 = 10.7639;            // 1m² a p²
    double qOrigin, qTarget, m2;

    unsigned char unitIdOrigin, unitIdTarget;
    char *unitShortNames[] = {"m²", "ht", "p²"};

    printf("Introduce el valor asignado a la unidad de origen que prefieras: \nMetros Cuadrados = 0\nHectárea = 1\nPies cuadrados = 2\n");
    scanf("%hhu", &unitIdOrigin);
    
    printf("Introduce la cantidad de %s: ", unitShortNames[unitIdOrigin]);
    scanf("%lf", &qOrigin);

    printf("Introduce el valor asignado a la unidad de destino que prefieras: \nMetros Cuadrados = 0\nHectárea = 1\nPies cuadrados = 2\n");
    scanf("%hhu", &unitIdTarget);

    m2 = (unitIdOrigin == 0) ? qOrigin
       : (unitIdOrigin == 1) ? qOrigin * HECTARE_M2
       : qOrigin / FEET_M2;

    qTarget = (unitIdTarget == 0) ? m2
            : (unitIdTarget == 1) ? m2 / HECTARE_M2
            : m2 * FEET_M2;


    printf("%.2f%s son %.2f%s\n", qOrigin, unitShortNames[unitIdOrigin], qTarget, unitShortNames[unitIdTarget]);
}
