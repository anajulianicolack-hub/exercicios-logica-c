/*
Programa: Maior Elemento e Posição na Matriz
Descrição: Lê uma matriz 2x4, identifica o maior valor armazenado e informa suas coordenadas (linha e coluna).
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int matriz[2][4];
    int maior_valor;
    int linha_maior = 0;
    int coluna_maior = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um valor para a LINHA(%d) e COLUNA(%d) da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if(i == 0 && j == 0){
                maior_valor = matriz[i][j];
                linha_maior = i+1;
                coluna_maior = j+1;

            } else if(matriz[i][j] > maior_valor){
                maior_valor = matriz[i][j];
                linha_maior = i+1;
                coluna_maior = j+1;
            }
        }
        printf("\n");
    }

    printf("\n --- MATRIZ DIGITADA ---\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("[%4d]", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n --- RESULTADOS --- \n");
    printf("O maior numero da matrriz eh: %d\n", maior_valor);
    printf("Ele esta localizado na LINHA[%d] COLUNA[%d]\n\n", linha_maior, coluna_maior);


    return 0;
}