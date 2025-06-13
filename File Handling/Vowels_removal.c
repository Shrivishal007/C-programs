// Write a program to read content from one file and write the same content into another file after removing all vowels.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch;
    FILE *input_file, *output_file;

    input_file = fopen("Input.txt", "r");
    if(input_file == NULL)
    {
        printf("File not found!");
        exit(1);
    }

    output_file = fopen("Output.txt", "w");
    if(output_file == NULL)
    {
        printf("File not created!");
        exit(1);
    }

    while((ch = fgetc(input_file)) != EOF)
    {
        if(strchr("AEIOUaeiou", ch))
            continue;
        fputc(ch, output_file);
    }
    fclose(input_file);
    fclose(output_file);
    printf("Success!");
    return 0;
}
