/*
Programa: Verificação de Senha
Descrição: Utiliza a estrutura do-while para validar o acesso do usuário, contando o 
número de tentativas incorretas até que a senha 1234 seja digitada.
Autor: Ana Nicolack
*/

#include <stdio.h>

int main(){
    int senha;
    int senha_errada = 0;

    do{
        printf("Digite a senha 1234: ");
        scanf("%d", &senha);
        if(senha != 1234){
            senha_errada++;
        }   
    }while (senha != 1234);

    printf("\nVc errou a senha %d vezes", senha_errada);

    return 0;
}