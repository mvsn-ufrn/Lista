#include <stdio.h>

int main(){

int sum, first, last ; 

printf("Type the first number:\n"); 

scanf("%d", &first); 

printf("\nType the last number:\n"); 

scanf("%d", &last); 

if(first==0){

    sum = (last*(last+(first+1))/2); //equation that defines the sum of n number in a sequency starting from n=0

}
else {
sum = (last*(last+first)/2); //equation that defines the sum of n number in a sequency starting from n!=0

}
printf("The sum of n firsts natural numbers is:%d\n\n\n\n", sum); 

return 0;
}
