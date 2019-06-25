#include <stdio.h>

int main()
{
    int  fbncc=0, num_1=-1,num_2=1, fact=0, qtty=0;

    printf("type the n factors you want: ");

    scanf("%d", &fact);

    do{
        fbncc=num_1+num_2; //equation depicting the fibonacci series

        num_1=num_2;       //auxiliary equation to fibonacci series

        num_2=fbncc;       //auxiliary equation to fibonacci series

        qtty++;            //marker of quantity

        printf("%d ", fbncc);

    }while(qtty<fact);


             printf("\n\n\n\n"); //blank space

    return 0;
}
