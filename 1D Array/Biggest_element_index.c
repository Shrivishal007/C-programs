// Write a program to find the position of the biggest number in an array.
#include <stdio.h>

int main()
{
    int num, a[50] = {0}, max_ind = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < num; i++)
        if(a[i] > a[max_ind])
            max_ind = i;
    printf("The biggest number is %d and it is at %d position", a[max_ind], max_ind);
    return 0;
}