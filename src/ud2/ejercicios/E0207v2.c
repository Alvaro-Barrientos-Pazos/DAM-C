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

    if (mNum > bNum){
        temp = bNum;
        bNum = mNum;
        mNum = temp;
    }

    if (sNum > bNum){
        temp = bNum;
        bNum = sNum;
        sNum = temp;
    }

    if (sNum > mNum){
        temp = mNum;
        mNum = sNum;
        sNum = temp;
    }
    
    printf("El orden de mayor a menor es: %.2lf %.2lf %.2lf\n",bNum,mNum,sNum);
    printf("El orden de menor a mayor es: %.2lf %.2lf %.2lf\n",sNum,mNum,bNum);

}
