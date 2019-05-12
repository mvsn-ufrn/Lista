#include <stdio.h>

int main(){
    int num, count, fact=1; //declaracao de variaveis

    printf("Type a number to calculate his factorial:\n"); //exibir mensagem na tela

    scanf("%d", &num); //captar valor digitado e atribuir a variavel num

    for (count=1;count<=num;count++) { //de 1 até o valor do número digitado o contador irá de 1 em 1

        fact=fact*count; //eq.1 define a fatorial de um número

        if(count==num) //se o contador for igual ao número

        printf("The factorial of %d is: %d", num, fact); //exibir mensagem na tela

    }
    printf("\n\n\n\n"); //espaco na tela
    return 0;
}
