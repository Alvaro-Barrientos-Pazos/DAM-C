/*
    Pedir una nota entera de 0 a 10 y mostrarla de la siguiente forma: 
    insuficiente (de 0 a 4), suficiente (5), bien (6), notable (7 y 8) y sobresaliente (9 y 10).
*/

#include <stdio.h>
#include <math.h>

int main() {  

        System.out.print("Introduce un número entero (de 0 a 10): ");
        int nota = sc.nextInt();
        sc.close();
        
        switch (nota) {
            case 0,1,2,3,4:
                System.out.println("Insuficiente");
                break;
        
            case 5: 
                System.out.println("Suficiente");
                break;
            
            case 6:
                System.out.println("Bien");
                break;
            
            case 7,8:
                System.out.println("Notable");
                break;

            case 9,10:
                System.out.println("Notable");
                break;

            default:
                System.out.println("La nota es invalida");
                break;
        }
    }
}
