#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[60];
    printf("Type a phrase: ");
    fgets(phrase, 60, stdin);
    printf("Your phrase is: %s\n", phrase);

    return 0;
}
