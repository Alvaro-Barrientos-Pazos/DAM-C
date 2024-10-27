/* 
Un biólogo está realizando un estudio de distintas especies de invertebrados y necesita una aplicación que le ayude a contabilizar el número de patas 
que tienen en total todos los animales capturados durante una jornada de trabajo. Para ello, te ha solicitado que escribas una aplicación a la que hay que proporcionar:
- El número de hormigas capturadas    (6 patas).
- El número de arañas capturadas      (8 patas).
- El número de cochinillas capturadas (14 patas).

La aplicación debe mostrar el número total de patas.
*/

#include <stdio.h>

int main(){
    const unsigned char ANT_NUM_LEGS      = 6;
    const unsigned char SPIDER_NUM_LEGS   = 8;
    const unsigned char ROLYPOLY_NUM_LEGS = 14;

    unsigned int tNumLegs;
    unsigned short input;

    printf("Introduce el número de hormigas: ");
    scanf("%hu",&input); 
    tNumLegs = ANT_NUM_LEGS * input;  

    printf("Introduce el número de arañas: ");
    scanf("%hu",&input);
    tNumLegs += SPIDER_NUM_LEGS * input; 

    printf("Introduce el número de cochinillas:");
    scanf("%hu",&input);
    tNumLegs += ROLYPOLY_NUM_LEGS * input;

    printf("El número de patas total es: %u\n",tNumLegs);

}