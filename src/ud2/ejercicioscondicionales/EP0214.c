/*
    Escribe un programa que solicite al usuario un número comprendido entre 1 y 99. 
    El programa debe mostrario con letras, por ejemplo, para 56, se verá: “cincuenta y seis”.
*/

#include <stdio.h>

int main() {  

    unsigned char input;

    printf("Introduce un número entero entre el 1 y el 99: ");
    scanf("%u",&input);

    char *cUnits = "";
    char *cTens  = "";

    if ( input > 9 ){

        if (input % 10 == 0){

            switch (input) {
                case 10: cTens = "diez";         break;
                case 20: cTens = "veinte";       break;
                case 30: cTens = "treinta";      break;
                case 40: cTens = "cuarenta";     break;
                case 50: cTens = "cincuenta";    break;
                case 60: cTens = "sesenta";      break;
                case 70: cTens = "setenta";      break;
                case 80: cTens = "ochenta";      break;
                case 90: cTens = "noventa";      break;
            }
        }
        else if (input > 20 ) {
            switch (input/10) {
                case 2: cTens = "veinti";        break;
                case 3: cTens = "treinta y ";    break;
                case 4: cTens = "cuarenta y ";   break;
                case 5: cTens = "cincuenta y ";  break;
                case 6: cTens = "sesenta y ";    break;
                case 7: cTens = "setenta y ";    break;
                case 8: cTens = "ochenta y ";    break;
                case 9: cTens = "noventa y ";    break; 
            }
        }
        else {
        
            switch (input) {
                case 11: cTens = "once";         break;
                case 12: cTens = "doce";         break;
                case 13: cTens = "trece";        break;
                case 14: cTens = "catorce";      break;
                case 15: cTens = "quince";       break;
                case 16: cTens = "dieciséis";    break;
                case 17: cTens = "diecisiete";   break;
                case 18: cTens = "dieciocho";    break;
                case 19: cTens = "diecinueve";   break;
            }
        }

    }

    if (input < 10 || input > 20 ) {

        switch (input%10) {
            case 1: cUnits = "uno";               break;
            case 2: cUnits = "dos";               break;
            case 3: cUnits = "tres";              break;
            case 4: cUnits = "cuatro";            break;
            case 5: cUnits = "cinco";             break;
            case 6: cUnits = "seis";              break;
            case 7: cUnits = "siete";             break;
            case 8: cUnits = "ocho";              break;
            case 9: cUnits = "nueve";             break;    
        }
    }
    printf("El nombre del número es: %s%s",cTens,cUnits);
}