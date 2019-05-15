#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, div, qtty=0,nump6=0, nump12=0, sub=0, count=2;

    do{
        for(i = 0; i <= count; i++) {

            div = 0;

            for(j = 1; j <= i; j++) {
                if(i % j == 0) {
                    div++;
                }
            }

            if(div == 2) {

                qtty++;

                if(qtty==6){

                    nump6=i;
                }
                if(qtty==12){

                    nump12=i;

                    sub=nump12-nump6;

                    printf("the difference between the Twelfth and sixth prime number is: %d",sub);

                    break;

                }

            }

            count++;
        }
    }while(qtty<12);

    printf("\n\n\n\n");

    return 0;
}
