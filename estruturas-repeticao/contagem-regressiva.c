/*
Programa: Contagem Regressiva
Descrição: Lê um número inteiro positivo e exibe uma contagem decrescente partindo desse número até zero.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero para a contagem regressiva: ");
    scanf("%d", &num);

    for (int i = num; i >= 0; i--){
        printf("> %d\n", i);
    }

    return 0;
}