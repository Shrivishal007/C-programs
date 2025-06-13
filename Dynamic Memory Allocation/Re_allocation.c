// Program to resize a dynamically allocated array using realloc().
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(sizeof(int)), num = 0, inp;
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements of the integer array(press x to stop) :\n");
    while(scanf("%d", &inp) == 1)
    {
        int *temp = realloc(arr, (num + 1) * sizeof(int));
        if (temp == NULL)
        {
            printf("Memory allocation failed.\n");
            free(arr);
            return 1;
        }
        arr = temp;
        arr[num++] = inp;
    }
    printf("The values stored in the array is ");
    for (int i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    free(arr);
    return 0;
}