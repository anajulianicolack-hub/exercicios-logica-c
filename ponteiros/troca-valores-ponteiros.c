/*
Programa: Troca de Valores (Swap) com Ponteiros
Descrição: Utiliza uma função com passagem por referência para permutar os valores de duas variáveis inteiras.
Autor: Ana Nicolack
*/

#include <stdio.h>

void trocar_valor(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;

}

int main(){
    int A = 1;
    int B = 2;

    printf("\n\nAntes da troca de valores: \n");
    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n\n", B);

    trocar_valor(&A, &B);

    printf("Depois da troca de valores: \n");
    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n\n", B);

    return 0;
}