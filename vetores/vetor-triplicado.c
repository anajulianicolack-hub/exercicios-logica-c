/*
Programa: Multiplicação de Vetor
Descrição: Lê um vetor de 5 posições e gera um segundo vetor onde cada elemento é o triplo do original.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int vetor[5];
    int novo_vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero do vetor: ", i+1);
        scanf("%d", &vetor[i]);

        novo_vetor[i] = vetor[i] * 3;
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Posicao | Original | Novo (x3)\n");
    printf("------------------------------\n");

    for(int i = 0; i < 5; i++){
        printf("%7d | %8d | %9d\n", i, vetor[i], novo_vetor[i]);
    }
    printf("------------------------------\n");
    

    return 0;
}