/*
    El DNI consta de un entero de 8 digitos seguido de una letra que se obtiene a partir del número de la siguiente forma:
        letra = número DNI módulo 23

    Basándote en esta información, elige la letra a partir de la numeración de la siguiente tabla:

                                        CÓDIGO PARA LA LETRA DEL DNI O NIF
        RESTO   0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22
        LETRA   T   R   W   A   G   M   Y   F   P   D   X   B   N   J   Z   S   Q   V   H   L   C   K   E 

    y diseña una aplicación en la que, dado un número de DNI, calcule la letra que le corresponde. Observa que un número de 8 digitos está dentro del rango del tipo int.
*/

#include <stdio.h>

int main() {  

    const unsigned char TABLE_SIZE = 23;

    unsigned int nDNI;
    unsigned char modDNI;
    char letra = 'Z'; // Error check

    printf("Introduce los dígitos del DNI: ");
    scanf("%u",&nDNI);
    modDNI = nDNI%TABLE_SIZE;


    switch (modDNI) {
        case 0:  letra = 'T'; break;
        case 1:  letra = 'R'; break;
        case 2:  letra = 'W'; break;
        case 3:  letra = 'A'; break;
        case 4:  letra = 'G'; break;
        case 5:  letra = 'M'; break;
        case 6:  letra = 'Y'; break;
        case 7:  letra = 'F'; break;
        case 8:  letra = 'P'; break;
        case 9:  letra = 'D'; break;
        case 10: letra = 'X'; break;
        case 11: letra = 'B'; break;
        case 12: letra = 'N'; break;
        case 13: letra = 'J'; break;
        case 14: letra = 'Z'; break;
        case 15: letra = 'S'; break;
        case 16: letra = 'Q'; break;
        case 17: letra = 'V'; break;
        case 18: letra = 'H'; break;
        case 19: letra = 'L'; break;
        case 20: letra = 'C'; break;
        case 21: letra = 'K'; break;
        case 22: letra = 'E'; break;
    }

    printf("La letra correspondiente el DNI completo sería: %d%c",nDNI,letra);
}
