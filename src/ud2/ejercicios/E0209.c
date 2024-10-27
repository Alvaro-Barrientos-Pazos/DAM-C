/*
    Escribir una aplicación que indique cuántas cifras tiene un número entero 
    introducido por teclado, que estará comprendido entre 0 y 99999.

    Realiza una versión del programa anterior para que indique cuantes cifras 
    tiene un número comprendido entre -99999 y 99999
*/

#include <stdio.h>

int main() {  

    unsigned char nDigits;
    unsigned int num;

    printf("Introduce un valor entre 0 y 99999: ");
    scanf("%u",&num);
    

    if (num/10000. >= 1.){
        nDigits = 5;
    }
    else if (num/1000. >= 1.){
        nDigits = 4;
    }
    else if (num/100. >= 1.){
        nDigits = 3;
    }
    else if (num/10. >= 1.){
        nDigits = 2;
    }
    else {
        nDigits = 1;
    }

    printf("El número tiene %d dígito/s",nDigits);
}
