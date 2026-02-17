/*
Programa: Soma de Matriz 3x3
Descrição: Solicita ao usuário elementos para preencher uma matriz 3x3 e calcula a soma total de todos os valores informados.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int matriz[3][3];
    int soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero para a LINHA(%d) e para a COLUNA(%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            soma+= matriz[i][j];
        }
        printf("\n");
    }

    printf("\n\n --- MATRIZ DIGITADA ---\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("[%4d]", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n A soma de todos os numeros da matriz digitada eh: %d\n\n", soma);
    

    return 0;
}