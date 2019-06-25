#include <stdio.h>

int main(){
    printf("the arithmetic mean of even number between 13 and 73 is:\n"); 

    int par=0, count, qtty=0, mean; 

    for(count=13;count<=73; count++)
    {
        if(count%2==0)  
        {

            par=count+par; //equation that defines the sum of even numbers

            qtty=qtty + 1; //equation that defines the quantity of even numbers

        }
    }

    mean= par/qtty; //equation that defines the arithmetic mean

    printf("%d\n\n\n\n", mean);
}
