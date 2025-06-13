// Write a program to read content from a file and write the reversed content into another file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int position = -1;
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

    if((ch = fgetc(input_file))== EOF)
    {
        printf("No content in the file");
        return 0;
    }

    while(fseek(input_file, position, SEEK_END) == 0)
    {
        ch = fgetc(input_file);
        fputc(ch, output_file);
        position--;
    }

    fclose(input_file);
    fclose(output_file);
    printf("Success!");
    return 0;
}