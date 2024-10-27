/* 
Escribe un programa que convierta unidades de masa entre kilogramos y libras o viceversa. El programa solicitará al usuario la cantidad de masa y la unidad de medida origen (kilogramos o libras).
    1 kilogramo = 1000 gramos
    1 libra = 453.592 gramos
El programa deberá manejar las conversiones automáticamente y mostrar el resultado al usuario. Utiliza el operador ternario para evaluar la unidad de medida introducida por el usuario. El programa mostrará por pantalla el resultado con la unidad de medida adecuada.
 */

#include <stdio.h>

int main() {

    const short  KG_GRAMS = 1000;
    const double LB_GRAMS = 453.592;

    double quantity;   // Cantidad de la unidad de masa, necesita ser doble para los decimales de las conversiones.
    char unitLetter;   // unidad de medida

    printf("Programa de conversión entre Kilos y libras a gramos\n");

    printf("Introduce una unidad de masa (k = Kilos y l = Libras):\n"); 
    scanf("%c",&unitLetter);

    // Para incluir letras mayusculas, comprobamos si unitLetter es una mayuscula comprobando si su valor ASCII esta entre A y Z. Las mayusculas tiene un valor ASCII superior a las minusculas.
    // Si es mayuscula restamos las posiciones que hay entre la 'a' y la 'A' para transformar de mayusculas a su homologo en minusculas.
    if (unitLetter >= 'A' && unitLetter <= 'Z') {
        unitLetter += 'a' - 'A';
    }

    printf("Introduce una cantidad: ");
    scanf("%lf",&quantity);

    unsigned int isKg = (unitLetter == 'k') ? 1 : 0;   // La libreria stdbool añade booleans pero intento usar el minimo numero de librerias, 1 = true 0 = false.
    
    const char *uShortName[] = {"kg","lb"};            // Otra sintaxis para la array de strings
    const char *uFullName[] = {"kilos","libras"};
    
    quantity = (isKg) ? quantity * KG_GRAMS : quantity * LB_GRAMS; 
    double qResult = (isKg) ? quantity/LB_GRAMS : quantity/KG_GRAMS;
    
    // Como solo tenemos dos valores y en C una variable de tipo int con valor false es 0 y true es 1, 
    // podemos acceder a los indices de la array usando isKg 0="kg"(false) y 1="lb"(true)
    printf("El resultado en %s es: %.2f%s\n",uFullName[isKg],qResult,uShortName[isKg]);
        
}
