/*
    Crear una aplicación que solicite al usuario una fecha (día, mes, año) 
    y muestre la fecha correspondiente al día siguiente.
*/

#include <stdio.h>
#include <math.h>

int main() {  
    
    unsigned int day,month,year;

    printf("Introduce el día de la fecha: ");
    scanf("%u",&day);
    
    printf("Introduce el mes de la fecha: ");
    scanf("%u",&month);
    
    printf("Introduce el año de la fecha: ");
    scanf("%u",&year);

    // Datos modificados
    int mDay  = day+1;
    int mMes  = month;
    int mYear = year;

    unsigned char bisiesto = 0;
    

    if (year%4 == 0 && year%100 != 0 || year%400 == 0){
        bisiesto = 1;
    }

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1 || (month == 2 && day>29 && bisiesto)|| (month == 2 && day>28)){
        printf("La fecha es invalida"); 
    }
    else{
        switch (month) {         
            case 2:
                if ((mDay > 28 && !bisiesto) || (mDay>29 && bisiesto)){
                    mDay = 1;
                    mMes++;
                }


            case 4:
            case 6:
            case 9:
            case 11:
                if (mDay > 30){
                    if (mDay > 31){
                        printf("La fecha es invalida");
                        break;
                    }
                    mDay = 1;
                    mMes++;
                }
                
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (mDay > 31){
                    mDay = 1;
                    mMes++;
                    
                    if (mMes > 12){
                        mYear++;
                        mMes = 1;
                    }
                }
                
            default:
                printf("El día siguiente a %d / %d / %d sería: %d / %d / %d \n",day,month,year,mDay,mMes,mYear);
                break;
        }
    }
}
