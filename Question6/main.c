#include <stdio.h>

int main(){
    int num, count=0; //declaracao das variaveis

    printf("Type a number:\n"); //exibir mensagem na tela

    scanf("%d", &num); //captar valor e atribuir a variavel num

    do{ //faca

        count++; //incrementar variável em 1

    } while(count*count<=num); //enquanto o quadrado for menor que o numero

    printf("the smaller number squared > %d is: %d\n", num, count); //exibir mensagem na tela

    printf("\n\n\n\n"); //espaco na tela

    return 0;
}
