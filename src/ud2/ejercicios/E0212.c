/*
    Pedir el día, mes y año de una fecha e indicar si la fecha es correcta. 
    Hay que tener en cuenta que existen meses con 28, 30 y 31 días 
    (no se considerarán los años bisiestos).
*/

#include <stdio.h>

int main() {  

    unsigned char day, month;
    unsigned int year;

    printf("Introduce un el día de la fecha: ");
    scanf("%hhu",&day);

    printf("Introduce un el mes de la fecha: ");
    scanf("%hhu",&month);

    printf("Introduce un el año de la fecha: ");
    scanf("%u",&year);

    char *validation = "valida";

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1 ){
        validation = "invalida";
    }
    else{
        switch (month) {         
            case 2:
                if (day > 28){
                    validation = "invalido"; 
                    break;
                }

            case 4:
            case 6:
            case 9:
            case 11:
                if (day > 30){
                    validation = "invalido"; 
                    break;
                }
        }
    }
    
    printf("La fecha %d/%d/%d es %s",day,month,year,validation);
            
}