/*
    Crea una aplicación que solicite al usuario cuántos grados tiene un ángulo y muestre el equivalente en radianes. 
    Si el ángulo introducido por el usuario no se encuentra en el rango de 0° a 360°, hay que transformarlo a dicho rango. 

    Nota: El operador módulo (%) puede ayudarnos a convertir un ángulo a su equivalente en el rango comprendido de 0 a 360°.

*/

#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main() {  

    const short MAX_DEGREES = 360;
    //const double PI = 3.14159265358979323846; // Si no queremos usar una libreria solo para sacar el valor de PI

    double gAngle = 0.0;
    
    printf("Introduce el número de grados del angulo: ");
    scanf("%lf",&gAngle);
    
    double modAngle = fmod(gAngle,MAX_DEGREES);
    double rAngle   = M_PI/180 * modAngle;

    printf("%.2f° son %.2frad\n",modAngle,rAngle);
        
}
