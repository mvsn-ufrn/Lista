#include <stdio.h>

int main(){
    int num, count, table; 

    printf("Type the number you want know the table:\n"); 

    scanf("%d", &num); 

    printf("\nThe table of %d is: ", num); 

    for (count=1;count<=10;count++) { 

        table=count*num; //equation that defines the table of a number

        printf("%d ", table); 

    }
    printf("\n\n\n\n"); //blank space

    return 0;
}
