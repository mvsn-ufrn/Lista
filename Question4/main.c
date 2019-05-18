#include <stdio.h>

int main(){
    int count, num;

    printf("Type a number:\n"); 

    scanf("%d", &num); 

    printf("\n"); //blank space

    printf("The divisors of the number are:\n\n"); 

    for (count=1;count<=num; count++) { //counter that will test which are the divisors of the number 'num'


        if(num%count==0){ 


            printf("%d\n", count); 
        }
    }

     printf("\n\n\n\n"); //blank space

    return 0;
}
