/* 
Examen DAM Curso 2023 - 2024  Ejercicio 2

Escribe un programa que lea 3 números por teclado e indique si están ordenados o no, de menor a mayor, y de mayor a menor.

 */

#include <stdio.h>

int main() {
    int d1, d2, d3;
    int isBigToSmall;
    unsigned char isSorted = 0;


    printf("Introduce el primer dígito: ");
    scanf("%d",&d1);

    printf("Introduce el segundo dígito: ");
    scanf("%d",&d2);

    printf("Introduce el tercero dígito: ");
    scanf("%d",&d3);

    printf("¿Que orden quieres comprobar?\n> = 0    < = 1\n");
    scanf("%d",&isBigToSmall);
    
    // Comparamos si el usuario está preguntando 
    isSorted = (isBigToSmall == 0) ? 
               (d1>d2 && d2>d3) ? 1 : 0

             : (d2<d3 && d1<d2) ? 1 : 0;

    char *mVerdad = (isSorted == 1) ? "Está ordenado": "No está ordenado";
    char *mOrden  = (isBigToSmall == 0) ? "de mayor a menor": "de menor a mayor";

    printf("%s %s",mVerdad,mOrden);

}
