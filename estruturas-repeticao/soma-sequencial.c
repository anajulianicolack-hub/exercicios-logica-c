/*
Programa: Soma Sequencial
Descrição: Solicita um número maior que zero e calcula a soma de todos os inteiros de 1 até o número informado.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    do{
        printf("Digite um numero MAIOR que ZERO: ");
        scanf("%d", &num);
    } while (num <= 0);

    for (int i = 1; i <= num; i++){
        soma = soma + i;
    }

    printf("\n--------------------------------------------\n");
    printf("O numero digitado foi: %d\n", num);
    printf("A soma de 1 ate %d eh: %d\n", num, soma);
    printf("--------------------------------------------\n\n");
    

    return 0;
}