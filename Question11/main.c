#include <stdio.h>

int main(){
    int num, count, div = 0; //declaracao das variaveis

    printf("Type a number:\n"); //exibir mensagem na tela

    scanf("%d", &num); //captar valor digitado e atribuir a variavel num

    for (count=1;(count<=num); count++) { //de 1 ate o numero o contador ira de 1 em 1

        if(num%count==0) //se o o resto da divisao do número por um natural qualquer for 0, executar:

            div++; //div aumentara em 1 seu valor
    }

    if(div==2) //se div tiver valor 2, executar

        printf("\nThe %d is a prime number!!!", num); //exibir mensagem na tela

    else //senao

        printf("\nThe %d is not prime number!!!",num); //exibir mensagem na tela

    printf("\n\n\n\n"); //espaco na tela

    return 0;
}
