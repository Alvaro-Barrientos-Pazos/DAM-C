/* 
Repite el programa anterior para convertir entre kilómetros por hora (km/h), metros por segundo (m/s) y millas por hora (mph) 
    1 km/h = 0.27778 m/s
    1 mph = 1.60934 km/h
*/

#include <stdio.h>

int main(){
        
    const double MS_IN_KMH  = 0.27778;                                           // Cantidad de m/s en un 1km/h
    const double KMH_IN_MPH = 1.60934;                                           // Cantidad de km/h en 1 mph
    const double MS_IN_MPH  = KMH_IN_MPH * MS_IN_KMH;                            // Cantidad de m/s en 1 mph

    double qOrigin, qTarget;                                                     // Cantidad de origen y salida
    unsigned char originUnitID, targetUnitID;                                    // id de la unidad origen y la unidad salida
    
    double ms;                                                                   // Cantidad convertida a m/s como intermediario

    printf("Introduce una unidad de velocidad para convertir:\n m/s = 0\n km/h = 1\n mph = 2\n");
    scanf("%hhu",&originUnitID);

    printf("Introduce una velocidad: ");
    scanf("%lf",&qOrigin);

    printf("Introduce a que unidad de velocidad deseas convertir:\n m/s = 0\n km/h = 1\n mph = 2\n");
    scanf("%hhu",&targetUnitID);


    ms = (originUnitID == 0) ? qOrigin 
       : (originUnitID == 1) ? qOrigin * MS_IN_KMH 
       : qOrigin * MS_IN_MPH ;
    
    qTarget = (targetUnitID == 0) ? ms
            : (targetUnitID == 1) ? ms / MS_IN_KMH
            : ms / MS_IN_MPH;


    char *unitShortName[] = {"m/s" , "Km/h" , "mph" };                              
    char *unitLongName[] = {"metros segundo", "Kilometros hora" , "millas por hora" };

    
    printf("El resultado en %s es: %f%s%n",unitLongName[targetUnitID],qTarget,unitShortName[targetUnitID]);

}
