// Write a program to create a file and while doing writing in a file replace all spaces with hyphens.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *file;

    file = fopen("Output.txt", "w");
    if(file == NULL)
    {
        printf("File not created!");
        exit(1);
    }

    printf("Enter the text(After completion Press Enter -> Ctrl + Z -> Enter to stop) :\n");
    while((ch = getchar()) != EOF)
    {
        if(ch == ' ')
            ch = '-';
        fputc(ch, file);
    }
    fclose(file);
    return 0;
}