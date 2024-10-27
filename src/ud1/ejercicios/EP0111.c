/* 
Un economista te ha encargado un programa para realizar cálculos con el IVA. 
La aplicación debe solicitar la base imponible y el IVA que se debe aplicar. 
Muestra en pantalla el importe correspondiente al IVA y al total.
*/

#include <stdio.h>

int main() {

    double iva, money;

    printf("Introduzca un valor superior a 0 para el impuesto IVA: ");
    scanf("%lf", &iva);    // para scanear un 'double' se '%lf' viene de la abreviacion de "long float" y una float larga es un "double"
    printf("\nIntroduzca la cantidad de dinero bruto: ");
    scanf("%lf", &money);
    
    double taxAmount = money * (iva * 0.01);
    double finalPrice = money + taxAmount;
    
    // printf pude imprimir un double con '%f' o '%lf' el resultado sera el mismo.
    printf("El Impuesto añadido es de: %.2f€\n",taxAmount);   
    printf("El Precio final es de: %.2f€\n",finalPrice);

    return 0; // Opcional: Codigo de Error 0 significa una ejecucion correcta, si no se expecifica se trata siempre como si devolviese 0.
}
