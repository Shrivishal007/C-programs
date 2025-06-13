// Write a program to swap the values of two variables with using temp variable and without using temp variable
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    printf("The values of a and b before swapping a = %d, b = %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nThe values of a and b after swapping with temp varible a = %d, b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nThe values of a and b after swapping without temp varible a = %d, b = %d", a, b);
    return 0;
}
