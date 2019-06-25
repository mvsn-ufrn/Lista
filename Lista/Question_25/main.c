#include "stdio.h"
#include "stdlib.h"

int oc_char(char c) { //function that will return the quantity of characters typed
    if(c >= 65 && c <= 90) { // [A-Z]
        return 1;
    }

    if(c >= 97 && c <= 122) { // [a-z]
        return 1;
    }

    return 0;
}

int main(void) {
    int *map = (int *)calloc(128, sizeof(int));
    int i = 0;
    char text[100];
    printf("Type a text:");
    gets(text);

    char tmp;

    do {
        tmp = text[i++];
        if (oc_char(tmp)) {
            map[tmp]++;
        }
    } while (tmp != '\0');

    for (i = 0; i < 128; i++) {
        if (map[i] != 0) {
            printf("%c = %d\n", i, map[i]);
        }
    }

    return 0;
}
