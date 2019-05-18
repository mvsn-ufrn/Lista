#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    int count, size = 0, word=1;

    printf("Type a text: ");
    gets(text);

    size = strlen(text);
    //loop that will define the quantity of words and characters
    for(count = 0; count < strlen(text); count++){
        if(text[count] == ' '){
            size--;

        }
        if(text[count]== ' ' && text[count+1]!=' '){
            word++;
        }
    }
    printf("The number of characters is: %d\n",size);
    printf("the number of words is: %d", word);
    printf("\n\n\n\n"); //blank space
   
    return 0;
}
