// Álvaro Barrientos Pazos

/*
    Diseña un programa que calcule el área y el perímetro de un terreno con la forma de la figura a partir de los datos de largo y ancho que se introducirán por teclado en metros.
    Utiliza para los cálculos las fórmulas de área y perímetro de un círculo:
    
        Área círculo = 𝑃𝐼 * 𝑅cuadrado
        Perímetro círculo = 2 * 𝑃𝐼 * 𝑅
        Siendo R el radio del círculo
    
    En dicho terreno se pretende organizar una media maratón, es decir, una carrera en la que los participantes deberán correr una distancia de 21097 metros. 
    El programa deberá calcular y mostrar el número de vueltas completas que deberán dar los participantes y el número de metros “sobrantes” redondeando hacia arriba.
*/

#include <stdio.h>




// Para usar la constante PI podemos escribirla nosotros mismos o añadir las definiciones de math.h
//#define PI 3.14159265358979323846
#define _USE_MATH_DEFINES
#include <math.h> 




int main() {

    const int METROS_MARATON = 21097;

    double ancho, largo;
    double areaCirculo;
    double periCirculo; // Perímetro Círculo

    double areaRect;
    double areaTotal;
    double periTotal; // Perímetro Total

    unsigned int vueltas;
    unsigned int resto;

    
    printf("Introduce la medida del largo: ");
    scanf("%lf",&largo);

    printf("Introduce la medida del ancho: ");
    scanf("%lf",&ancho);

    // el ancho es el mismo tamaño que el diametro del medio circulo por lo tanto
    // para sacar el radio hay que sacar la mitad diviendo entre 2
    double r = ancho / 2;

    areaCirculo = M_PI * pow(r,2); // Dos medio circulos son un circulo // r*r = r^2 = Math.pow(r,2)

    // Restamos el ancho pues es el diametro de el circulo y hay dos medios circulos
    // a los lados es decir dos radios que al juntarse son el diametro del circulo.
    double lRect = (largo - ancho);
    areaRect = lRect * ancho;

    areaTotal = areaCirculo + areaRect;

    printf("\nLa piesta esta compuesta de:\n  %.3lfm2 de Área de circulo\n  %.3lfm² de Área de rectangulo\n  El area total es de: %.3lfm²\n",
            areaCirculo, areaRect, areaTotal);

    // Dos medio circulos son un circulo
    periCirculo = 2 * M_PI * r;

    // No hace falta calcular el perimetro del rectangulo ya que los laterales estan
    // sustituidos por medio circulos sumamos al perimetro del circulo el largo del rectangulo lRect.
    periTotal = periCirculo + lRect * 2;

    // Para saber cuantas vueltas se necesitan dividimos, los metros del maraton y
    // los metros de cada vuelta (perimetro) de la pista.
    // necesitamos redondear para arriba en caso de que el resultado tenga
    // decimales, porq significaria que necesitamos hacer parte de la siguiente vuelta.
    // de esta forma damos a entender que hay que hacer una vuelta mas y 
    // a continuacion calcularemos cuantos metros de esa ultima vuelta han sobrado.
    vueltas = (int)(METROS_MARATON / periTotal);
    char *vueltaMensaje = (vueltas > 1) ? "vueltas" : "vuelta"; // Pijadas

    // Para calcular cuantos metros han sobrado, necesitamos multiplicar el numero
    // de vueltas que necesitamos para terminar el maraton por el numero de metros
    // de cada vuelta (perimetro) y les restamos los metros del maraton. 
    // Ya que este numero siempre sera igual o mas pequeño que los metros recorridos por los corredores.
    resto = (int)ceil(METROS_MARATON - vueltas * periTotal);

    printf(
            "\nEl perimetro de la pista es de: %.3fm\n  Fue necesario hacer: %d %s\n  En la última vuelta sobraron: %dm de pista\n",
            periTotal, vueltas, vueltaMensaje, resto);
}
