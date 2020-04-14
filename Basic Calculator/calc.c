#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1;
    int number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    printf("%d + %d = \n", number1, number2);   
    printf("%d\n", number1 + number2);
    return 0;
}
