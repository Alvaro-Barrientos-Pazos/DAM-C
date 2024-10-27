// Driver/Navigator: Álvaro Barrientos Pazos

#include <stdio.h>

int main() {

    // Cantidades
    const double QUANT_APPLE = 1.5 / 6;  // Kg
    const double QUANT_WATER = 330 / 6;  // ml
    const double QUANT_SUGAR = 120 / 6;  // g
    const double QUANT_LEMON = 6 / 6;

    // Precio ingredientes
    const double PRICE_APPLE = 1.69;
    const double PRICE_SUGAR  = 1.52 / 1000; // euros por gramo

    unsigned int nPeople;

    printf(" -- Compota de manzana --\n");
    printf("Introduce el número de comensales: ");
    scanf("%u",&nPeople);

    printf(" - %.2f kilos de manzana\n", QUANT_APPLE * nPeople);
    printf(" - %.2f mililitros de agua\n", QUANT_WATER * nPeople);
    printf(" - %.2f gramos de azucar\n", QUANT_SUGAR * nPeople);
    printf(" - %.2f mililitros de zumo de limón\n", QUANT_LEMON * nPeople);

    double precio = (PRICE_APPLE * QUANT_APPLE * nPeople) + (PRICE_SUGAR * QUANT_SUGAR * nPeople); 
    printf(" El precio de la receta es: %.2f\n", precio);

}
