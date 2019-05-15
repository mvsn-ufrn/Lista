# include <stdio.h>
# include <stdlib.h>
#include <string.h>
int count_a(const char * s){ // function to count a
    int i, num = 0;
    char letter[10] ="a";

    while (*s)
    {
        for (i=0; i<10; i++)
            if (*s == letter[i])
                num++;
        s++;
    }
    return num;
}
int main(){
    char text[50];


    printf ("Type a text:\n");
    gets (text);
    printf("\nThe number of 'a' in text is:%d", count_a(text));
    printf("\n\n\n\n");
    return 0;
}
