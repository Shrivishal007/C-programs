// Program to allocate memory dynamically for an array and find its sum.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, sum = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", ptr + i);
    }
    for(int i = 0; i < n; i++)
        sum += *(ptr + i);
    printf("The sum of the elements in the array is %d", sum);
    free(ptr);
    return 0;
}