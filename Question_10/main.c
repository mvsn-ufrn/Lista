#include <stdio.h>

int main(){
    int count, num[10], qtty=0, qtty1=0;

    for (count = 0; count < 10; count++){

        printf("Type a value:\n");

        scanf("%d", &num[count]);

    }
    count = 0;
    // loop will test if the numbers were typed in the range or not
    while (count < 10){

        if (num[count] >= 10 && num[count] <= 50){

            qtty++;

        }

        else{

            qtty1++;
        }

        count++;

    }
    printf("\nthere are %d numbers within the range and %d numbers outside the range.\n",qtty, qtty1);
    printf("\n\nrange = [10,50]\n\n\n\n");

    return 0;
}
