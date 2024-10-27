/* 
Examen DAM Curso 2023 - 2024  Ejercicio 3

Realiza un programa que simule el funcionamiento de un cajero automático. El programa solicitará al usuario el importe en efectivo que desea retirar, que será un número 
entero de euros (€). El programa calculará el número mínimo de billetes de 50, 20, 10 y 5 euros para obtener dicho importe y presentará la información al usuario.

Si el importe introducido por el usuario no es múltiplo de 5 se informará también al usuario del importe que el cajero no es capaz de satisfacer por no disponer de billetes 
de esa cantidad. Por ejemplo, si el usuario introduce 78 €, el programa informará de que se retirarán 75 € en los billetes que corresponda y que 3 € no se pueden retirar por 
no existir billetes tan pequeños.

 */

#include <stdio.h>

int main() {
        
    const int FIFTY  = 50;        
    const int TWENTY = 20;
    const int TEN    = 10;
    const int FIVE   = 5;
    
    int withdrawal;
    int remainder;

    printf("Introduce el importe a extraer: ");
    scanf("%d",&withdrawal);
    remainder = withdrawal;

    // Dividimos entre el valor del billete y eliminamos los decimales
    // Utilizamos el operador "%" para quedarnos con el resto de la división.
    // Repetimos el proceso hasta quedarnos sin billetes.

    int b50 = remainder/FIFTY;    
    remainder = remainder%FIFTY;           

    int b20 = remainder/TWENTY;
    remainder = remainder%TWENTY;

    int b10 = remainder/TEN;
    remainder = remainder%TEN;

    int b5 = remainder/FIVE;

    printf("billetes de 50:\t%d\nbilletes de 20:\t%d\nbilletes de 10:\t%d\nbilletes de 5:\t%d\n",b50,b20,b10,b5);

    char *mensaje = (withdrawal%FIVE == 0) ? "Todo el crédito a sido concedido con exito" 
                  : "No es posible extraer los últimos %d€, por favor introduzca cantidades múltiplo de 5";
    
    printf(mensaje,withdrawal%FIVE);

}
