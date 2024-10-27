/* 
Examen DAM Curso 2023 - 2024  Ejercicio 1

Un grupo de persoas salen a comer juntas. Al terminar piden la cuenta conjunta. Haz un programa que tenga como entrada el número de personas y el importe total 
de la comida y que tenga como salida la cantidad a pagar por cada comensal. Tanto el importe de la comida como el importe a pagar por cada comensal podrán tener 
hasta 2 decimales.
*/

#include <stdio.h>

int main() {
    unsigned int nPeople;
    double totalCost;

    printf("Introduce el número de comensales: ");
    scanf("%u",&nPeople);

    printf("Introduce el importe total en euros a distribuir entre los comensales: ");
    scanf("%lf",&totalCost);

    printf("Cada comensal deberá pagar un total de: %.2f euros", (totalCost/nPeople));


}
