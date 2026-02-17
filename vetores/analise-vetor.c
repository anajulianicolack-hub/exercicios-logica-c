/*
Programa: Análise de Vetor
Descrição: Lê um vetor de 8 posições, identifica o maior e o menor valor e calcula a soma total dos elementos.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int array[8];
    int num_maior;
    int num_menor;
    int soma = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite o %d numero do array: ", i+1);
        scanf("%d", &array[i]);

        if(i == 0){
            num_maior = array[i];
            num_menor = array[i];
        } else {
            if(array[i] > num_maior){
                num_maior = array[i];
            }
            if (array[i] < num_menor){
                num_menor = array[i];
            }
        }
        
        soma += array[i];
    }

    printf("\n----------------------------------------------\n");
    printf("Maior numero digitado: %d\n", num_maior);
    printf("Menor numero digitado: %d\n", num_menor);
    printf("A soma de todos os numeros: %d\n", soma);
    printf("----------------------------------------------\n\n");

    return 0;
}