/*
    Pedir tres números y mostrarlos ordenados de mayor a menor
*/

#include <stdio.h>

int main() {  
    double n1;
    double n2;
    double n3;

    printf("Introduce un valor para el primer número: ");
    scanf("%lf",&n1);

    printf("Introduce un valor para el segundo número: ");
    scanf("%lf",&n2);

    printf("Introduce un valor para el tercer número: ");
    scanf("%lf",&n3);

    double temp;
    double bNum = n1;  // Biggest Number
    double mNum = n2;  // Middle Number
    double sNum = n3;  // Smallest Number

    if (n2 > bNum){
        bNum = n2;
        mNum = n1;
        
        if (n3 > bNum){
            bNum = n3;
            mNum = n2;
            sNum = n1;
        }
        else if (n3 > mNum){
            mNum = n3;
            sNum = n1;
        }
    }
    else if (n3 > bNum){
        bNum = n3;
        mNum = n1;
        sNum = n2;
    }
    else if (n3 > n2){
        mNum = n3;
        sNum = n2;
    }

    printf("El orden de mayor a menor es: %.2lf %.2lf %.2lf\n",bNum,mNum,sNum);
    printf("El orden de menor a mayor es: %.2lf %.2lf %.2lf\n",sNum,mNum,bNum);

}
