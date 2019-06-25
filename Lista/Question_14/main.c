#include <stdio.h>

int main()
{
    int  count;

    printf("The 20 numbers between 1000 and 1999 wich divided by 11 result 5 are :\n\n");

    for(count=1000; count<=1999; count++){ //counter from 1000 to 1999, one by one

        if(count%11==5){ //if the the rest of count per 11 its equal a 5, run:

            printf("%d ", count);
        }
    }
    printf("\n\n\n\n"); //blank space

    return 0;
}
