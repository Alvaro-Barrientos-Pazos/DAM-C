/* 
Convertir una temperatura introducida por teclado en grados Celsius o centígrados a grados 
Farenheit, mostrando el resultado por pantalla.
    F = C * (9/5) + 32

*/

#include <stdio.h>
#include <string.h> // Libreria para usar strcpy

int main(){

    unsigned char isCelsius;
    double c, cDestino;
    
    char uDestino[3]; // String de 2 caracteres mas el caracter que indica el final de la string (\0)

    printf("Introduce la unidad de medida:\n- Farenheit = 0\n- Celsius = 1\n");
    scanf("%hhu",&isCelsius); // 'unsigned char' usa el placeholder '%hhu'

    printf("Introduce la cantidad a convertir: ");
    scanf("%lf",&c);

    // Todo valor superior a 0 en el char sera considerado como verdadero.
    cDestino = (isCelsius) ? 9./5 * c + 32 : 5./9 * (c - 32);
    
    // No se puede asignar una string a una array the char directamente una forma comoda de hacerlo es usar strcpy
    strcpy(uDestino, (isCelsius) ? "Fº" : "Cº"); 

    printf("El resultado es: %.2f%s",cDestino,uDestino);

}