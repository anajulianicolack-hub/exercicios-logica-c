/*
Programa: Conversor de Temperatura
Descrição: Lê a temperatura em Fahrenheit informada pelo usuário, e converte para Celsius.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    float F, C;

    printf("Digite sua temperatura em Fahrenheit(F): ");
    scanf("%f", &F);

    C = 5 * (F - 32) / 9;

    printf("\n --- CONVERSAO REALIZADA ---\n");
    printf("%.1f F equivalem a %.1f C\n", F, C);

    return 0;
}