#include <stdio.h>

int main(){
    int num, count, div = 0; 

    printf("Type a number:\n"); 

    scanf("%d", &num); 
    //loop that will verify the quantity of divisors of the number and if it is prime or not
    for (count=1;(count<=num); count++) { 

        if(num%count==0) 

            div++; 
    }

    if(div==2)

        printf("\nThe %d is a prime number!!!", num);

    else 

        printf("\nThe %d is not prime number!!!",num); 

    printf("\n\n\n\n"); //blank space

    return 0;
}
