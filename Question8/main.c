#include <stdio.h>

int main(){
    int num, count, table; //declaracao de variaveis

    printf("Type the number you want know the table:\n"); //exibir mensagem na tela

    scanf("%d", &num); //captar valor digitado e atribuir a variavel num

    printf("\nThe table of %d is: ", num); //exibir mensagem na tela

    for (count=1;count<=10;count++) { //de 0 ate 10 o contador ira de 1 em 1

        table=count*num; //eq.1 define a tabuada de um numero

        printf("%d ", table); //exibir mensagem na tela

    }
    printf("\n\n\n\n"); //espaco na tela

    return 0;
}
