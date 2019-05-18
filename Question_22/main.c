#include <stdio.h>

int main(){
    int x[]={4,5,6,1,8};
    int n=5;
    int max, i, j;
    max = x[0];
    for(i=1; i<n; i++){
        if(x[i] > max){
            max = x[i];
        }
    }
    printf("\n");
    int plot[max][n];

    for(i=0; i<max; i++){
        for(j=0; j<n; j++){
            plot[i][j]=0;
        }
    }


    for(j=0; j<n; j++){
        for(i=max-1; i>=max-x[j]; i--){
            plot[i][j]=1;
        }
    }

    for(i=0; i<max; i++){
        for(j=0; j<n; j++){
            if(plot[i][j] == 0){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n");

    return 0;
}
