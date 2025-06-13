// Write a program to print the reverse the elements in an array
#include <stdio.h>

int main()
{
    int n, temp, a[50] = {0};
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("The values of array before reversal :\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    for(int i = 0; i < n / 2; i++)
    {   
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("\nThe values of array after reversal :\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}