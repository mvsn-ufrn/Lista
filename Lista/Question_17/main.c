#include <stdio.h>

int main()
{
    float clss, frnht;

    printf("Type the temperature in Celsius:\n\n");

    scanf("%f", &clss);

    frnht=((clss*9)/5) + 32; //equation defines the conversion from celsius to Farenheit

    printf("\n\nThe temperature in Farenheit is:\n\n%.2f ", frnht);


    printf("\n\n\n\n"); //blank space

    return 0;
}
