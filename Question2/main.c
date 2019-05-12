#include <stdio.h>

int main(){
    int count; //declaracao de variaveis

    printf("The multiples of seven <200 are:\n\n"); //exibir mensagem na tela

    for (count=0;count<=200; count ++) { //Repetir a mesma acao de 0 ate 200 de 1 em 1

        if(count%7==0) //se o resto da divisao por 7 for 0, executar:


            printf("%d\n", count); //exibir mensagem na tela

    }

    printf("\n\n\n\n"); //espaco na tela

    return 0;
}
