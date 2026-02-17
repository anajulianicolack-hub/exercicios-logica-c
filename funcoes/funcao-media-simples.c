/*
Programa: Função de Média Simples
Descrição: Implementa uma função modularizada para calcular e retornar a média aritmética de dois números reais.
Autor: Ana Nicolack
*/

#include <stdio.h>

float calcular_media (float n1, float n2){
    float media_calculada;

    media_calculada = (n1 + n2) / 2;

    return media_calculada;
}

int main(){
    float num1, num2;
    float media;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    media = calcular_media(num1, num2);

    printf("\n > A media dos numeros digitados eh: %.1f\n\n", media);

    return 0;
}