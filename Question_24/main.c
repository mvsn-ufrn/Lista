#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str[] = "marcus vinicius";
    size_t size = strlen(str);
//loop tha will reverse the string
    for(int i = 0; i < size / 2; i++) {
        char tmp = str[i]; //
        str[i] = str[size - i - 1]; //
        str[size - i - 1] = tmp; //
    }
    printf("%s", str);
    printf("\n\n\n\n");
    return 0;
}
