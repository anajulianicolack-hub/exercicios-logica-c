/*
Programa: Cálculo de Média de Vetor via Função
Descrição: Implementa uma função que recebe um array de inteiros e seu tamanho, realizando o cálculo da média aritmética com conversão para ponto flutuante.
Autor: Ana Nicolack
*/

#include <stdio.h>

float calcular_media(int v[], int tam){
    int soma = 0;
    float media;
    for (int i = 0; i < tam; i++){
        soma += v[i];
    }
    media = (float)soma / tam;
    return media;
}

int main(){
    int vetor[3];
    int tamanho = 3;
    float m;

    for (int i = 0; i < 3; i++){
        printf("Digite o %d numero do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    m = calcular_media(vetor, tamanho);

    printf("\nA media final do vetor eh: %.1f\n\n", m);

    return 0;
}