/*
Programa: Maior Valor em Matriz via Função
Descrição: Solicita o preenchimento de uma matriz 3x3 e utiliza uma função dedicada para percorrer as linhas e colunas em busca do maior elemento.
Autor: Ana Nicolack
*/

#include <stdio.h>

int calcular_maior(int m[3][3]){
    int maior = m[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            if(m[i][j] > maior){
                maior = m[i][j];
            }
        }
    }

    return maior;
}

int main(){
    int matriz[3][3];
    int maior_valor;

    printf("\n --- DIGITANDO A MATRIZ ---\n");

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite um valor para a LINHA[%d] e para a COLUNA[%d] da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n --- MATRIZ DIGITADA ---\n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("[%3d]", matriz[i][j]);
        }
        printf("\n");
    }

    maior_valor = calcular_maior(matriz);

    printf("\n--- VENDO O MAIOR NUMERO ---\n");
    printf("O maior valor dentro da matriz eh:\n");
    printf("> %d\n\n", maior_valor);



    return 0;
}