#include <stdio.h>

int main(){
    int count, num; //declaracao de variaveis

    printf("Type a number:\n"); //exibir mensagem na tela

    scanf("%d", &num); //captar mensagem e atribuir a variavel num

    printf("\n"); //espaco na tela

    printf("The divisors of the number are:\n\n"); //exibir mensagem na tela

    for (count=1;count<=num; count++) { //Repetir a mesma acao de 0 ate o numero pedido de 1 em 1

        if(num%count==0){ //se o resto da divisao por um numero n for 0, executar:


            printf("%d\n", count); //exibir mensagem na tela
        }
    }

     printf("\n\n\n\n"); //espaco na tela

    return 0;
}
