/*
Programa: Comparador de Números
Descrição: Lê três números inteiros e identifica qual é o maior e qual é o menor valor entre eles.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Digite outro numero: ");
    scanf("%d", &num3);

    printf("\n\n --- RESULTADO ---\n");

    if(num1 > num2 && num1 > num3){
        printf("O maior numero eh: %d\n", num1);
        if (num2 > num3){
            printf("O menor numero eh: %d \n\n", num3);
        } else if (num3 > num2){
            printf("o menor numero eh: %d\n\n", num2);
        }  
    } else if(num2 > num1 && num2 > num3){
        printf("O maior numero eh: %d\n", num2);
        if (num1 > num3){
            printf("O menor numero eh: %d \n\n", num3);
        } else if (num3 > num1){
            printf("o menor numero eh: %d\n\n", num1);
        } 
    } else if(num3 > num1 && num3 > num2){
        printf("O maior numero eh: %d\n", num3);
        if (num1 > num2){
            printf("O menor numero eh: %d \n\n", num2);
        } else if (num2 > num1){
            printf("o menor numero eh: %d\n\n", num1);
        } 
    } else {
        printf("Os numeros sao iguais\n\n");
    }

    return 0;
}