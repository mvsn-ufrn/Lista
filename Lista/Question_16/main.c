#include <stdio.h>

void reverse(char text[]){ //function to reverse a string

if (text[0] != '\0'){

reverse(&text[1]);

printf("%c",text[0]);}

}
int main(){

char text[100];

printf("\nEnter a text: ");

gets(text);

printf("\nThe reverse of text is: ");

reverse(text);

printf("\n\n\n\n"); //blank space

return 0;

}
