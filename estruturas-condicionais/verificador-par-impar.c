/*
Programa: Verificador de par ou ímpar
Descrição: Lê um numero inteiro digitado pelo usuário e verifica se o númeor é: par, ímpar ou zero.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num > 0){
        printf("O numero eh POSITIVO");
        if (num %2 == 0){
            printf("\n E tbm eh PAR");
        } else{
            printf("\nE tbm eh IMPAR");
        }
    } else if(num < 0){
        printf("O numero eh NEGATIVO");
        if (num %2 == 0){
            printf("\nE tbm eh PAR");
        } else{
            printf("\nE tbm eh IMPAR");
        }
    } else {
        printf("O numero eh ZERO");
        if (num %2 == 0){
            printf("\nE tbm eh PAR");
        } else{
            printf("\nE tbm eh IMPAR");
        }
    }

    return 0;
}