#include <stdio.h>

int print_main_menu();
int select_program();
int aritmetic_calculator();
int aritmetic_calculator_from_string();
int bmi_calculator();
int discount_calculator();
int atm_calculator();

double my_pow(int x, int p);


enum PROGRAMS {
    M_MENU,
    ARITM_CALC_V1,
    ARITM_CALC_V2,
    BMI_CALC,
    DISCOUNT_CALC,
    EVEN_ODD_CALC,
    ATM_CALC,
    END,

};


int main(){

    const unsigned char M_MENU = 0;

    printf("\nBienvenido al Sistema de Calculadora Interactiva\n\n");

    print_main_menu();
}


int print_main_menu(){ 
    printf("%d. Realizar operación matemática (+, -, *, /)\n",ARITM_CALC_V1);
    printf("%d. Calculadora v2\n",ARITM_CALC_V2);
    printf("%d. Calcular el IMC (Índice de Masa Corporal)\n",BMI_CALC);
    printf("%d. Calcular descuento sobre un producto\n",DISCOUNT_CALC);
    printf("%d. Verificar si un número es par o impar\n",EVEN_ODD_CALC);
    printf("%d. Simulación de cajero automático\n",ATM_CALC);
    printf("%d. Salir",END);
    printf("\n\nO Introduce 0 para mostrar este menu otra vez: ");

    select_program();
}


int select_program(){

    unsigned char input;

    scanf("%hhu",&input);

    switch (input) {

        case ARITM_CALC_V1: 
            aritmetic_calculator(); 
            break;

        case ARITM_CALC_V2: 
            printf("\n\n - Programa: Calculadora Aritmética -\n");
            aritmetic_calculator_from_string();
            break;

        case BMI_CALC:
            bmi_calculator();
            break;

        case DISCOUNT_CALC:
            discount_calculator();
            break;

        case EVEN_ODD_CALC:  break;

        case ATM_CALC:  break;

        case END:
            printf("El programa se está cerrando\n");  
            return 0; 
        
        case M_MENU:            
            print_main_menu();
            break;
            
        default:
            printf("No existe ningun programa asociado al input: %hhu\n",input);
            printf("Por favor seleccione una de las opciones anteriores. Introduzca un 0 si quiere volver a mostrar las opciones.");
            select_program();
            return 0;
    }
}


int aritmetic_calculator() {
    printf("\n\n - Programa: Calculadora Aritmética -\n");

    double a, b, result;
    char op;
    
    printf("\nIntroduce el valor de los operandos\n");
    printf("A: ");
    scanf("%lf",&a);
    
    printf("B: ");
    scanf("%lf",&b);

    printf("Introduzca uno de los operador validos:   '+',  '-',  '*',  '/'\nOperador: ");
    scanf(" %c",&op);

    if (op == '+') {
        result = a+b;
    }
    else if (op == '-'){
        result = a-b;
    }
    else if (op == '*'){
        result = a*b;
    }
    else if (op == '/'){
        if (a != 0 && b != 0) {
            result = a/b;
        }
        else{
            printf("No se puede dividir entre 0");
            return -1.;
        }
    }

    printf("%.2lf %c %.2lf = %.2lf",a,op,b,result);
}


int aritmetic_calculator_from_string() {

    const unsigned char ARR_MAX_SIZE = 100;

    double a, b, result;
    char operator = -1;

    printf("\nIntroduce la operacion usando uno de los operadores validos:  '+',  '-',  '*',  '/'\n");
    char input[ARR_MAX_SIZE];                     // Maximo de 99 caracteres
    fgetc(stdin);                        // Limpiar buffer
    fgets(input, sizeof(input), stdin);

    int nDigits = 0;
    int numberID = 0;

    int nbuffer[ARR_MAX_SIZE-2]; // El tamaño maximo de un numero en una operacion valida 97 mas el caracter del operador mas el caracter del número de una unidad.
    int numbers[2];
    int buffer, buffer2; 

    for (int i = ARR_MAX_SIZE -1 ; i >= 0 ; i--) { 
        if (input[i] >= '0' && input[i] <= '9') { 
            
            buffer = input[i] - '0';

            if (nDigits == 0){ 
                numbers[numberID] = buffer;
            }
            else {
                buffer2 = buffer * my_pow(10, nDigits);
                numbers[numberID] += buffer2;
                printf("buffer 2: %d\n",buffer2);
            }

            nDigits++;

        } 
        else if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            printf("letra: %c",input[i]);
            printf("Este programa no admite el uso de letras\n"); 
            aritmetic_calculator_from_string();
            return 0;

        } 
        else { 
            switch (input[i]) {

                case ' ': 
                    if (nDigits != 0 ){
                        nDigits = 0;
                        numberID++;
                    }

                    break;

                case '+':
                    if (operator == -1) {
                        operator = input[i];
                    }
                    else{
                        printf("Este programa solo acepta un único operador");
                        aritmetic_calculator_from_string();
                        return 0;
                    }
                    break;

                case '-':
                    if (operator == -1) {
                        operator = input[i];
                    }
                    else{
                        printf("Este programa solo acepta un único operador");
                        aritmetic_calculator_from_string();
                        return 0;
                    }
                    break;

                case '*':
                    if (operator == -1) {
                        operator = input[i];
                    }
                    else{
                        printf("Este programa solo acepta un único operador");
                        aritmetic_calculator_from_string();
                        return 0;
                    }
                    break;

                case '/':
                    if (operator == -1) {
                        operator = input[i];
                    }
                    else{
                        printf("Este programa solo acepta un único operador");
                        aritmetic_calculator_from_string();
                        return 0;
                    }
                    break;

                case '.':
                    printf("Este programa no admite números con decimales");
                    aritmetic_calculator_from_string();
                    return 0;

                default:
                    break;
            }
        }
    }

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size ; i++){
        printf("numbers[%d]: %d\n",i,numbers[i]);    
    }
        
    //printf("%.2lf %c %.2lf = %.2lf",a,op,b,result);
    return 0;
}


int bmi_calculator(){
    printf("\n\n - Programa: Calculadora IMC -\n");


    double weight, height, bmi;

    printf("\nPor favor introduce los siguientes datos:\n");
    
    printf("Peso en Kg: ");
    scanf("%lf",&weight);

    printf("Altura en metros: ");
    scanf("%lf",&height);
    
    bmi = weight/(height*height);

    if (bmi < 18.5){
        printf("IMC: %.2lf [Bajo peso]",bmi);
    }
    else if (bmi< 24.9){
        printf("IMC: %.2lf [Peso normal]",bmi);
    }
    else if (bmi< 29.9){
        printf("IMC: %.2lf [Sobrepeso]",bmi);
    }
    else {
        printf("IMC: %.2lf [Obesidad]",bmi);
    }

}


int discount_calculator() {

}


int atm_calculator() {

}




double my_pow(int x, int p) { 
    double acc = 1.0; 
    for (int i = 0; i < p; i++) { 
        acc *= x; 
        } 
    
    return acc; 
}