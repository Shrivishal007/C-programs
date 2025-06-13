// Function to swap two numbers using call by value and call by reference.
#include <stdio.h>

void swap_call_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("The value of a and b after the swap is a = %d b = %d in call by value", a, b);
}

void swap_call_by_reference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nThe value of a and b after the swap is a = %d b = %d in call by value", *a, *b);
}

int main()
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    swap_call_by_value(a, b);
    printf("\nThe value of a and b after the function is a = %d b = %d in call by value", a, b);
    swap_call_by_reference(&a, &b);
    printf("\nThe value of a and b after the function is a = %d b = %d in call by reference", a, b);
    return 0;
}