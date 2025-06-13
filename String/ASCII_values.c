// Write a program to print the ASCII value of a character
#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    printf("The ASCII value for \'%c\' is %d", c, c);
    return 0;
}