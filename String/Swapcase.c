// Write a program to convert a letter from lower case to upper case or vice versa. Char c-Use char data type-scanf(“%s”,&c)
#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if(c >= 'A' && c <= 'Z')
    {
        c += 'a' - 'A';
        printf("The lowercase is %c", c);
    }
    else if(c >= 'a' && c <= 'z')
    {
        c -= 'a' - 'A';
        printf("The uppercase is %c", c);
    }
    else
        printf("It is not an alphabet");
    return 0;
}