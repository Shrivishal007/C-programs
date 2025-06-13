// Function to find the sum of an array.
#include <stdio.h>

int sum_arr(int a[50], int size)
{
    int s = 0;
    for(int i = 0; i < size; i++)
        s += a[i];
    return s;
}

int main()
{
    int a[50], n, sum;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    sum = sum_arr(a, n);
    printf("The sum of the elements in the array is %d", sum);
    return 0;
}