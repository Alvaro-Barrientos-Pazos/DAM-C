
#include <stdio.h>

int main() {  

    unsigned int n;
    
    printf("Introduce un número entero: ");
    scanf("%u",&n);

    if (n%2 == 0) {
        printf("El número es par");
    } 
    else {
        printf("El número es impar");
    }
}
