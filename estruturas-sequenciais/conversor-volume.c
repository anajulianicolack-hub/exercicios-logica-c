/*
Programa: Conversor de Volume
Descrição: Lê um valor em litros e converte para mililitros e centilitros.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    float L, mL, cL;

    printf("Digite os Litros(L) para realizar a conversao: ");
    scanf("%f", &L);

    mL = L * 1000;
    cL = L * 100;

    printf("\n ---CONVERSAO REALIZADA --- \n");
    printf("%.1f L --> %.1f mL\n", L, mL);
    printf("%.1f L --> %.1f cL\n\n", L, cL);

    return 0;
}