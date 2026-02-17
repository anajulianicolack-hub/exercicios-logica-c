/*Programa: Cálculo de Dobro com Ponteiros
Descrição: Demonstra a passagem por referência em C, utilizando ponteiros para 
alterar o valor de uma variável diretamente na memória através de uma função.
Autor: Ana Nicolack
*/

#include <stdio.h>

void calcular_dobro(int *n){
    *n = *n * 2; 
}

int main(){
    int num;

    printf("Digite um numero para saber seu dobro: ");
    scanf("%d", &num);

    calcular_dobro(&num);

    printf("O dobro do numero digitado eh: %d", num);

    return 0;
}