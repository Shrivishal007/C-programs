// Write a program to swap two values of variables using pointers. 
#include <stdio.h>

int main()
{
    int a, b, temp;
    int *ptr_a = &a, *ptr_b = &b;
    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    printf("The values of a and b before swapping a = %d, b = %d", a, b);
    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
    printf("\nThe values of a and b after swapping with temp varible a = %d, b = %d", a, b);
    return 0;
}
