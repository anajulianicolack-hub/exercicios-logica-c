/*
Programa: Leitura Validada via Função
Descrição: Utiliza uma função com ponteiros e laço do-while para garantir que o valor digitado pelo usuário esteja dentro de um intervalo específico (min e max).
Autor: Ana Nicolack
*/

#include <stdio.h>

void ler_intervalo(int *valor, int min, int max){
        int temp;
        do{
            printf("Digite um numero dentro do intervalo: ");
            scanf("%d", &temp);
        }while(temp < min || temp > max);
    
        *valor = temp;
    }


int main(){
    int num;

    ler_intervalo(&num, 1, 5);
    
    printf("\nO numero final digitado foi: %d\n\n", num);

    return 0;
}