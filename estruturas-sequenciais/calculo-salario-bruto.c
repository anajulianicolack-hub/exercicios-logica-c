/*
Programa: Cálculo Salarial 
Descrição: Lê o numero de horas trabalhadas, o valor pago por hora e calcula o salário bruto.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    float salario, horas, valor_hora;

    printf("Digite quantas horas vc trabalha por mes: ");
    scanf("%f", &horas);

    printf("Digite o valor que vc ganha por hora trabalhada: ");
    scanf("%f", &valor_hora);

    printf("\n--- SALARIO BRUTO ---\n");

    salario = horas * valor_hora;

    printf("Seu salario bruto eh de R$%.2f\n\n", salario);

    return 0;
}