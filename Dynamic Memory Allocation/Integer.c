// Program to allocate memory dynamically for an integer and assign a value.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n = (int *)malloc(sizeof(int));
    if (n == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the value of n : ");
    scanf("%d", n);
    printf("The value %d is dynamically stored in %p", *n, n);
    free(n);
    return 0;
}