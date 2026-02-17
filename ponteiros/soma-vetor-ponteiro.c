/*
Programa: Soma de Vetor com Acumulador via Ponteiro
Descrição: Realiza a soma de todos os elementos de um vetor e armazena o 
resultado em uma variável externa através de passagem por referência.
Autor: Ana Nicolack
*/

#include <stdio.h>

void soma (int vet[], int tam, int *result){
    for(int i = 0; i < tam; i++){
        *result = *result + vet[i];
    }
}

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int resultado = 0;

    printf("\nO vetor antes de somar os valores: \n");
    for(int i = 0; i < 5; i++){
        printf("> %d\n", vetor[i]);
    }

    soma(vetor, tamanho, &resultado);

    printf("\n Soma do vetor usando ponteiro: \n");
    printf("> %d\n\n", resultado);

    return 0; 
}