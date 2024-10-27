/*
    Escribe un programa para emitir la factura de compra de un producto, introduciendo el precio 
    del producto y el número de unidades compradas. La factura deberá añadir al total un IVA 
    (Impuesto del Valor Añadido) del 21%. Si el precio final con IVA es superior a 100 euros 
    se aplicará un descuento del 5%.

    Ejemplos para pruebas:
    Precio = 10 €, Unidades = 5 => Precio final = 60,50 €
    Precio = 20 €, Unidades = 7 => Precio final = 160,93 €

*/

#include <stdio.h>

int main() {  
    const double IVA       = 0.21;
    const int    THRESHOLD = 100;
    const double DISCOUNT  = 0.05;

    unsigned int nItem;

    double rPrice; // Precio sin impuestos Añadidos

    printf("Introduce el número de productos comprados: ");
    scanf("%u",&nItem);

    printf("Introduce el precio del producto: ");
    scanf("%lf",&rPrice);
    
    // Precio con impuestos Añadidos
    double tPrice = (nItem * rPrice) * (1+IVA);

    printf("\nEl precio con impuesto es de: %.2f€\n",tPrice);

    if (tPrice > THRESHOLD){
        printf("\nPero se ha aplicado un descuento!!\nEl precio final es: %.2f€",tPrice * (1-DISCOUNT));
    }

}
