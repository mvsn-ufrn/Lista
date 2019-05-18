#include <stdio.h>

int main(){
    int count; 

    printf("The multiples of seven <200 are:\n\n"); 

    for (count=0;count<=200; count ++) { //counter that will test which are the multiples of 7 smaller than 200 

        if(count%7==0) 


            printf("%d\n", count); 

    }

    printf("\n\n\n\n"); //blank space

    return 0;
}
