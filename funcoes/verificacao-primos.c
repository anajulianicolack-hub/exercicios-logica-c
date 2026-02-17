/*
Programa: Verificador de Números Primos
Descrição: Função que identifica se um número inteiro é primo através do resto da divisão em um laço de repetição.
Autor: Ana Nicolack
*/

#include <stdio.h>

int verificar_primo(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um numero inteiro para verificar se eh primo: ");
    scanf("%d", &num);

    if (verificar_primo(num)) {
        printf("O numero %d eh PRIMO.\n", num);
    } else {
        printf("O numero %d NAO eh primo.\n", num);
    }

    return 0;
}