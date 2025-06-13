// Program to allocate memory dynamically for a string and read user input.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *str;
    printf("Enter the length of the string : ");
    scanf("%d", &size);
    str = (char *)malloc(size + 1);
    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    getchar();
    printf("Enter the string : ");
    fgets(str, size + 1, stdin);
    printf("The string you entered is %s", str);
    free(str);
    return 0;
}