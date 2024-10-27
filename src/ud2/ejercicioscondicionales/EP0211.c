/*
    Escribe una aplicación que solicite al usuario un número comprendido entre 0 y 9999. 
    La aplicación tendrá que indicar si el número introducido es capicúa
*/

#include <stdio.h>

int main() {  

    char nString[5];

    unsigned char esCapicua = 0;

    printf("Introduce un número del 0 al 9999\n");
    scanf("%s",&nString);
    
    unsigned char strLength = 0;

    while (nString[strLength] != '\0') {
        strLength++;
    }
    
    switch (strLength) {
        case 1:
            esCapicua = 1;
            break;
            
        case 2:
            esCapicua = nString[0] == nString[1];
            break;
        
        case 3:
            esCapicua = nString[0] == nString[2];
            break;

        case 4:
            esCapicua = nString[0] == nString[3];
            esCapicua = nString[1] == nString[2];
            break;
    }

    printf("El número %s %s\n",nString, esCapicua?"es capicúa":"no es capicúa");
}
