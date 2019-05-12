#include <stdio.h>

int main(){
    printf("the arithmetic mean of even number between 13 and 73 is:\n"); //exibir mensagem na tela

    int par=0, count, qtty=0, mean; //declaracao de variaveis

    for(count=13;count<=73; count++) //de 13 ate 73 o contador ira de 1 em 1
    {
        if(count%2==0)  //se o resto da divisao do número por 2 for 0, executar:
        {

            par=count+par; //eq.1 define a soma dos numero pares

            qtty=qtty + 1; //eq.2 define a quantidade de numeros pares

        }
    }

    mean= par/qtty; //eq.3 define a media aritmetica

    printf("%d\n\n\n\n", mean); //exibir mensagem na tela
}
