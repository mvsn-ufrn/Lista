#include <stdio.h>

int main(){
    int num, count=0; 

    printf("Type a number:\n"); 

    scanf("%d", &num); 
    //loop to test the condition asked (the smallest positive integer x whose square is greater than a given value L)
    do{ 

        count++; 
    } while(count*count<=num); 

    printf("the smaller number squared > %d is: %d\n", num, count); 

    printf("\n\n\n\n"); //blank space

    return 0;
}
