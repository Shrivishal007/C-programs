// Write a program to find the length of the string using pointers
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr = str;
    int count = 0;
    printf("Enter the string : ");
    scanf("%s", str);
    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("The length of the string is %d", count);
    return 0;
}