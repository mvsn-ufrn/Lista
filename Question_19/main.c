#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int min, max, num;

    printf("\nType the minimun value of the range:\n");

    scanf("%d", &min);

    printf("\n\nType the maximun value of range:\n");

    scanf("%d", &max);

    srand( (unsigned)time(NULL));

    num=(min + 1) + (rand() % (max - min));

    printf("A random number between %d and %d is: %d",min, max, num);

    printf("\n\n\n\n");

    return 0;
}
