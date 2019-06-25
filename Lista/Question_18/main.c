#include <stdio.h>

int main()
{
    float clss, frnht;

    printf("Type the temperature in Farenheit:\n\n");

    scanf("%f", &frnht);
    clss=((frnht-32)*5)/9; //equation defines the conversion from Farenheit to Celsius

    printf("\n\nThe temperature in Celsius is:\n\n%.2f ", clss);


    printf("\n\n\n\n"); //blank space
    return 0;
}
