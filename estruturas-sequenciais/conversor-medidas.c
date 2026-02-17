/*
Programa: Conversor de Medidas
Descrição: Lê o valor em metros informado pelo usuário e converte para: centímetros, milímetros, decímetros.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    float m, cm, mm, dm;

    printf("Digite seu valor em metros(m): ");
    scanf("%f", &m);

    cm = m * 100;
    mm = m * 1000;
    dm = m * 10;

    printf("\n --- CONVERSOES REALIZADAS --- \n");
    printf("\n ### CENTIMETROS: \n ");
    printf("%.1f m --> %.1f cm\n", m, cm);
    
    printf("\n ### MILIMETROS: \n ");
    printf("%.1f m --> %.1f mm\n", m, mm);

    printf("\n ### DECIMETROS: \n ");
    printf("%.1f m --> %.1f dm\n\n", m, dm);

    return 0;
}