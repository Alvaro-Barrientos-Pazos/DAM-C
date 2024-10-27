/* 
Un economista te ha encargado un programa para realizar cálculos con el IVA. 
La aplicación debe solicitar la base imponible y el IVA que se debe aplicar. 
Muestra en pantalla el importe correspondiente al IVA y al total.
*/

#include <stdio.h>

int main() {

    double iva, money;

    printf("Introduzca un valor superior a 0 para el impuesto IVA: ");
    scanf("%lf", &iva); //  'double' usa el placeholder '%lf' -> long float -> double
    printf("\nIntroduzca la cantidad de dinero bruto: ");
    scanf("%lf", &money);
    
    double taxAmount = money * (iva * 0.01);
    double finalPrice = money + taxAmount;
    
    printf("El Impuesto añadido es de: %.2f€\n",taxAmount);
    printf("El Precio final es de: %.2f€\n",finalPrice);

    return 0; // Opcional: Codigo de Error 0 significa una ejecucion correcta, si no se expecifica se trata siempre como si devolviese 0.
}
