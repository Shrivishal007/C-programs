// Write a program to find the middle value from a set of numbers in an array
#include <stdio.h>

int main()
{
    int num, a[50] = {0}, mid_index;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    mid_index = num / 2;
    if(num % 2 == 0)
        printf("The middle values are %d and %d ", a[mid_index - 1], a[mid_index]);
    else
        printf("The middle value is %d", a[mid_index]);
    return 0;
}