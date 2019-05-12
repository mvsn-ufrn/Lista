#include <stdio.h>

int main(){

int sum, first, last ; //declaracao de variaveis

printf("Type the first number:\n"); //exibir mensagem na tela

scanf("%d", &first); //captar valor digitado e atribuir a variavel first

printf("\nType the last number:\n"); //exibir mensagem na tela

scanf("%d", &last); //captar valor digitado e atribuir a variavel last

if(first==0){

    sum = (last*(last+(first+1))/2); //eq.1 define a soma dos n numeros de uma sequencia comecando do 0

}
else {
sum = (last*(last+first)/2); //eq.1 define a soma dos n numeros de uma sequencia

}
printf("The sum of n firsts natural numbers is:%d\n\n\n\n", sum); //exibir mensagem na tela

return 0;
}
