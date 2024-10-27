#include <stdio.h>

double basic_aritmetic();

int main(){

    printf("\nBienvenido al Sistema de Calculadora Interactiva\n\n");
    printf("1. Realizar operación matemática (+, -, *, /)\n");
    printf("2. Calcular el IMC (Índice de Masa Corporal)\n");
    printf("3. Calcular descuento sobre un producto\n");
    printf("4. Verificar si un número es par o impar\n");
    printf("5. Simulación de cajero automático\n");
    printf("6. Salir\n");
    
    unsigned char input;

    scanf("%hhu",&input);

    switch (input) {

        case 1: printf("resultado: %lf",basic_aritmetic()); break;

        case 2:  break;

        case 3:  break;

        case 4:  break;

        case 5:  break;

        case 6:
            printf("El programa se está cerrando");  
            return 0; 
        
        default:
            break;
    }
}


double basic_aritmetic() {
        
    double a, b;
    unsigned char op;
    
    printf("Introduce el valor de los operandos\n");
    printf("A: ");
    scanf("%lf",&a);
    
    printf("B: ");
    scanf("%lf",&b);

    printf("Introduce el selecciona un operador:   '+' = 0   '-' = 1   '*' = 2   '/' = 3\n");
    scanf("%hhu",&op);

    if (op == 0) {
        return a+b;
    }
    else if (op == 1){
        return a-b;
    }
    else if (op == 2){
        return a*b;
    }
    else if (op == 3){
        if (a != 0 && b != 0) {
            return a/b;
        }
        else{
            printf("No se puede dividir entre 0");
            return -1.;
        }
    }

    return -1.;

}

