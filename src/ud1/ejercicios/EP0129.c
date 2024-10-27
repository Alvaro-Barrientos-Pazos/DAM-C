/* 
Escribe un programa que tome como entrada un número entero e indique 
qué cantidad hay que sumarle para que el resultado sea múltiplo de 7 
*/

#include <stdio.h>

int main() {

    unsigned int n;
    
    printf("Introduce un número: ");
    scanf("%u", &n);

    unsigned int diff = 7 - (n % 7);
    
    char *mensaje = (diff == 7) ? "%u es múltiplo de 7" : "%u necesita sumar %u ser múltiplo de 7";
    
    printf(mensaje, n, diff);

}

