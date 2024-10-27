/*
Desarrolla un programa en Java que convierta unidades de almacenamiento entre bytes, kilobytes, megabytes y gigabytes.
Solicita al usuario la cantidad de datos y la unidad de origen y destino
*/

#include <stdio.h>

int main(){
    const unsigned short KILOBYTES = 1000;
    const unsigned int GIGABYTES = 1000000;

    double quantInput, quantOutput;      // Cantidad Entrada y Salida
    unsigned char unitInput, unitOutput; // Unidad Entrada y Salida

    double megas;

    printf("Introduce la unidad de origen:\nMB = 0   KB = 1   GB = 2\n");
    scanf("%hhu", &unitInput);

    printf("Introduce la cantidad de origen: ");
    scanf("%lf", &quantInput);

    printf("Introduce la unidad de destino:\nMB = 0   KB = 1   GB = 2\n");
    scanf("%hhu", &unitOutput);

    megas = (unitInput == 0) ? quantInput 
          : (unitInput == 1) ? quantInput * KILOBYTES
          : quantInput * GIGABYTES;

    quantOutput = (unitOutput == 0) ? megas 
                : (unitOutput == 1) ? megas / KILOBYTES
                : megas / GIGABYTES;

    char *letraUnidad = (unitOutput == 0) ? "MB" 
                      : (unitOutput == 1) ? "KB"
                      : "GB";

    printf("El resultado es: %.3f%s", quantOutput, letraUnidad);
}
