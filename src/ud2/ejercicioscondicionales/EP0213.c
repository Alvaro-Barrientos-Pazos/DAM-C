/*
    En una granja se compra diariamente una cantidad (comidaDiaria) de comida para los animales. El número de animales que alimentar (todos de la misma especie) es numAnimales, 
    y sabemos que cada animal come una media de kilosPorAnimal.

    Diseña un programa que solicite al usuario los valores anteriores y determine si disponemos de alimento suficiente para cada animal. En caso negativo, ha de calcular cuál 
    es la ración que corresponde a cada uno de los animales. Nota: Evitar que la aplicación realice divisiones por cero.
*/

#include <stdio.h>

int main() {  

    unsigned int numAnimales;
    double dailySupplies, kilosPerAnimal, newDailyRation;
    
    printf("Introduce el número de kilos de comida que se compran diariamente: ");
    scanf("%lf",&dailySupplies);

    printf("Introduce el número de animales: ");
    scanf("%u",&numAnimales);

    printf("Introduce la cantidad de kilos que consume un animal al día: ");
    scanf("%lf",&kilosPerAnimal);


    if (numAnimales <= 0){
        printf("No hay animales a los que alimentar");
        if (dailySupplies <= 0){
            printf("No hay alimento para los animales");
        }
        return 0;
    }
    if (dailySupplies <= 0){
        printf("No hay alimento para los animales");
        return 0;
    }

    
    if (dailySupplies > numAnimales * kilosPerAnimal){
        printf("Hay comida suficiente para todos los animales");
    }
    else {
        newDailyRation = dailySupplies / numAnimales; 
        printf("No hay suficiente comida para todos los animales");
        printf("Los animales solo podrán consumir: %.2f Kg al día\n",newDailyRation);
    }
              
}
