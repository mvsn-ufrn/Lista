#include <stdio.h>

int main(){
    int num, count, fact=1; 

    printf("Type a number to calculate his factorial:\n"); 

    scanf("%d", &num);

    for (count=1;count<=num;count++) { 

        fact=fact*count; //equation that defines a factorial of a number

        if(count==num) 
        printf("The factorial of %d is: %d", num, fact); 

    }
    printf("\n\n\n\n"); //blank space
    return 0;
}
