// Driver/Navigator: Álvaro Barrientos Pazos


#include <stdio.h>
int main() {
    
    const double HECTARES     = 10000;            // Metros cuadrados de una hectarea
    const double A_FOOTBALL   = 105 * 70;         // Area campo de futbol en metros cuadrados
    const double A_BASKETBALL = 28 * 15;          // Area campo de baloncesto en metros cuadrados
    const double A_TENNIS     = 23.77 * 10.97;    // Area campo de tenis
    const double HT_RETIRO    = 125 * HECTARES;   // Hectareas del parque del Retiro 

    double hectares;
    
    printf("Introduce un número de hectáreas: ");
    scanf("%lf",&hectares);    

    // Total de hectareas
    double hTotal = hectares * HECTARES; 
    
    double nFootballField   = (hTotal/A_FOOTBALL);
    double nBasketballCourt = (hTotal/A_BASKETBALL);
    double nTennisCourt     = (hTotal/A_TENNIS);
    double nRetiroPark      = (hTotal/HT_RETIRO);

    printf("%.2lf hectáreas son aproximadamente: \n",hectares);
    printf("%.2lf campos de fútbol \n",nFootballField);
    printf("%.2lf canchas de baloncesto \n",nBasketballCourt);
    printf("%.2lf pistas de tenis \n",nTennisCourt);
    printf("%.2lf parques del retiro \n",nRetiroPark);
}
