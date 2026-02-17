/*
Programa: Analisador de Números
Descrição: Lê seis números inteiros, conta quantos são positivos e negativos, calcula a soma total e a média aritmética.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int num;
    int positivos = 0;
    int negativos = 0;
    int soma = 0;
    float media = 0; 

    for(int i = 0; i < 6; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);

        if(num > 0){
            positivos++;
        } else if (num < 0){
            negativos++;
        }

        soma += num;
    }

    media = (float)soma / 6.0;

    printf("\n--- RESULTADOS DA ANALISE ---\n");
    printf("Total de numeros lidos: 6\n");
    printf("Total de Positivos: %d\n", positivos);
    printf("Total de Negativos: %d\n", negativos);
    printf("Soma Total: %d\n", soma);
    printf("Media: %.2f\n", media); 
    printf("-----------------------------\n");

    return 0;
}