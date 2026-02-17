/*Programa: Calculadora Básica
Descrição: Lê dois números e uma letra correspondente à operação (A, B, C ou D), realizando o cálculo via estrutura switch-case.
Autor: Ana Nicolack*/

#include <stdio.h>

int main(){
    float num1, num2, resultado;
    char operacao;

    printf("\n >>>> CALCULADORA <<<< \n");
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("\n\n>>>> ESCOLHA A OPERACAO A SER FEITA <<<< \n");
    printf("A) ADICAO (+)\n");
    printf("B) SUBTRACAO (-)\n");
    printf("C) DIVISAO (/)\n");
    printf("D) MULTIPLICACAO (*)\n\n");
    printf("> Digite a LETRA da operacao desejada: ");
    scanf(" %c", &operacao);

    printf("\n\n >>>>> RESULTADO <<<<<\n");
    printf("Numeros digitados: %.1f, %.1f\n", num1, num2);
    printf("OPERACAO ESCOLHIDA: %c\n", operacao);

    switch (operacao){
    case 'a':
    case 'A':
        resultado = num1 + num2;
        printf("Resultado: %.1f\n\n", resultado);
        break;
    case 'b':
    case 'B': 
        resultado = num1 - num2;
        printf("Resultado: %.1f\n\n", resultado);
        break;
    case 'c':
    case 'C': 
        resultado = num1 / num2;
        printf("Resultado: %.1f\n\n", resultado);
        break;
    case 'd':
    case 'D':
        resultado = num1 * num2;
        printf("Resultado: %.1f\n\n", resultado);
        break;
    default:
        break;
    }

    return 0;
}