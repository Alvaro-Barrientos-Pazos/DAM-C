// Álvaro Barrientos Pazos

/*
    Tres amig@s deciden juntar el dinero en efectivo que llevan encima para comprar un artículo para compartir (por ejemplo, una pelota, un libro, un disco, etc.). Haz un programa
    que permita introducir el precio del artículo (en euros) y el dinero que aporta cada amig@ y que informe si el dinero aportado es suficiente o no para adquirir el artítulo.
    Si el dinero no es suficiente el programa informará de cuánto falta, y si sobra, se indicará el importe del dinero sobrante que guardará como bote para futuras compras conjuntas
*/

#include <stdio.h>

int main() {
        
        double price = 0.0;
        double pot   = 0.0;

        double contribution;
        printf("Introduce el price del artículo: ");
        scanf("%lf",&price);

        printf("Introduce la contribución del primer amigo: ");
        scanf("%lf",&contribution);
        pot += contribution;

        printf("Introduce la contribución del segundo amigo: ");
        scanf("%lf",&contribution);
        pot += contribution;

        printf("Introduce la contribución del tercer amigo: ");
        scanf("%lf",&contribution);
        pot += contribution;

        double diff = price-pot;
        
        char *output = (diff <= 0 ) ? 
                        (diff == 0) ? "Tienen dinero justo para comprar el artículo, no sobra nada" : "Tienen suficiente dinero y al grupo le sobran: %.2f€" 
            
                      : "El grupo no tiene suficiente dinero, les faltan: %.2f€";

        printf(output, (diff <= 0)? -diff : diff );

}
