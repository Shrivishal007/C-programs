// Write a program to read content from a file and count the number of uppercase and lowercase characters.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int upper_count = 0, lower_count = 0;
    char ch;
    FILE *file;

    file = fopen("Input.txt", "r");
    if(file == NULL)
    {
        printf("File not found!");
        exit(1);
    }

    while((ch = fgetc(file)) != EOF)
    {
        if(isupper(ch))
            upper_count++;
        else if(islower(ch))
            lower_count++;
    }
    
    fclose(file);
    printf("The number of uppercase letters is %d and lowercase letters is %d", upper_count, lower_count);
    return 0;
}