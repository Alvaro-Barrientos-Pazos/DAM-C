/*
    Crea una aplicación que solicite al usuario cuántos grados tiene un ángulo y muestre el equivalente en radianes. 
    Si el ángulo introducido por el usuario no se encuentra en el rango de 0° a 360°, hay que transformarlo a dicho rango. 

    Nota: El operador módulo (%) puede ayudarnos a convertir un ángulo a su equivalente en el rango comprendido de 0 a 360°.

*/

#include <stdio.h>

int main() {  

        System.out.println("Introduce el número de grados que tiene un angulo?");
        double gAngle = sc.nextDouble();
        
        double modAngle = gAngle%360;
        double rAngle   = Math.PI/180 * modAngle;

        System.out.printf("%.2f° son %.2frad\n",modAngle,rAngle);
        
    }
}
