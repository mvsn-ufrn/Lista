#include <stdio.h>

int main(){
    int array[]={4,5,6,1,8}, i;
    /*if you use a array with different size:
    for (i = 1; i <= array[0]; i = i + 1){ //structure defines how many * will show
        printf("*");
        }
    printf("\n");

    until:

    for (i = 1; i <= array[n-1]; i = i + 1){ //structure defines how many * will show
        printf("*");
        }
    printf("\n");

*/
    for (i = 1; i <= array[0]; i = i + 1){
        printf("*");
        }
    printf("\n");
        for (i = 1; i <= array[1]; i = i + 1){
            printf("*");

    }
        printf("\n");
    for (i = 1; i <= array[2]; i = i + 1){
        printf("*");

    }
    printf("\n");
    for (i = 1; i <= array[3]; i = i + 1){
        printf("*");
    }
    printf("\n");

    for (i = 1; i <= array[4]; i = i + 1){
        printf("*");

    }
    printf("\n\n\n\n");
    return 0;
}
