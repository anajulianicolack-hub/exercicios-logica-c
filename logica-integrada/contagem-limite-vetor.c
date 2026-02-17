/*
Programa: Contagem de Valores com Limite
Descrição: Integra o uso de vetores e funções para filtrar e contar quantos 
elementos de um conjunto superam um valor limite definido.
Autor: Ana Nicolack
*/

#include <stdio.h>

int contar_maiores (int v[], int tam, int limite){
    int contador = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] > limite){
            contador++;
        }
    }
    return contador;
}

int main(){
    int valores[6] = {5, 12, 30, 8, 20, 3};
    int limite = 10;

    int resultado = contar_maiores(valores, 6, limite);

    printf("Quantidade de valores maiores que %d: %d\n", limite, resultado);

    return 0;
}