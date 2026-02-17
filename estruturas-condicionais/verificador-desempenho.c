/*
Programa: Calculadora de Média Estudantil
Descrição: Recebe três notas parciais, calcula a média aritmética e determina o status de 
aprovação (Aprovado, Reprovado ou Aprovado com Distinção).
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n --- RESULTADO --- \n");
    if(media == 10){
        printf("> APROVADO COM DISTINCAO\n\n");
    } else if (media >= 7){
        printf("> APROVADO\n\n");
    } else {
        printf("> REPROVADO\n\n");
    }

    printf("-------------------------------------------\n");
    printf("A media do aluno foi: %.1f", media);
    printf("\n-------------------------------------------\n\n");
    
    return 0;
}