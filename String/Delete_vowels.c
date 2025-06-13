// Write a program to delete vowels in a given string.
#include <stdio.h>

int main()
{
    char s[50];
    int j = 0, len;
    printf("Enter the string : ");
    fgets(s, 50, stdin);
    len = strlen(s);
    if (s[len - 1] == '\n')
        s[len - 1] = '\0';
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && 
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')   
            s[j++] = s[i];
    s[j] = '\0';
    printf("The string without vowels is %s",s);
    return 0;
}