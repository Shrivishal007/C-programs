// Write a program to sum of the array elements using pointers. 
#include <stdio.h>

int main()
{
    int a[50], n, sum = 0;
    int *ptr_arr = a;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", ptr_arr + i);
    }
    for(int i = 0; i < n; i++)
        sum += *(ptr_arr + i);
    printf("The sum of the elements in the array is %d", sum);
    return 0;
}