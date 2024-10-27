/* 
Escribe un programa que permita convertir unidades de energía entre julios (J), calorías (cal) y kilovatios-hora (kWh). El usuario deberá ingresar la cantidad de energía, 
así como la unidad de origen y destino.

    1 cal = 4.184 J
    1 kWh = 3,600,000 J

El programa deberá realizar la conversión y mostrar el resultado.

*/

#include <stdio.h>

int main() {

    const double CAL_J = 4.184;               // 1cal a J
    const unsigned int KWH_J = 3600000;       // 1KWh a J

    unsigned char unitInput, unitOutput;
    double cOrigen, cDestino;
    char *unitShortName[] = {"J","cal","Kwh"};

    double jules;

    printf("Introduce el valor asignado a la unidad de origen que prefieras:\nJ = 0   cal = 1   KWh = 2\n");
    scanf("%hhu",&unitInput);

    printf("Introduce la cantidad de la unidad de origen: ");
    scanf("%lf",&cOrigen);

    printf("Introduce el valor asignado a la unidad de destino que prefieras:\nJ = 0   cal = 1   KWh = 2\n");
    scanf("%hhu",&unitOutput);

    jules = (unitInput == 0) ? cOrigen 
          : (unitInput == 1) ? cOrigen * CAL_J 
          : cOrigen * KWH_J; 

    cDestino = (unitOutput == 0) ? jules 
             : (unitOutput == 1) ? jules / CAL_J 
             : jules / KWH_J;

    printf("%.3f%s son %.3f%s",cOrigen,unitShortName[unitInput],cDestino,unitShortName[unitOutput]);

}
