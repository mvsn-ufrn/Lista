#include <stdio.h>

int main(){

    int num, fact=2, mult;

    printf("Type a number to decompose:\n");

    scanf("%d", &num);

    printf("\n\nDecompose of %d in prime factors is:\n", num);
    //loop that will define the factors of decomposition
    while (num > 1){

        mult=0;

        while (num % fact == 0){

            mult ++;

            num = num / fact;
        }
        if (mult != 0){

            printf("%d x ", fact);


        }

        fact++;
    }

    printf("\n\n\n\n"); //blank space

    return 0;
}
