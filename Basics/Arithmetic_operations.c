// Write a program to demonstrate Arithmetic operation (ADD ( +) ,SUB ( - ),MUL( * ),DIV( / ),MOD( % ))
#include <stdio.h>

int main()
{
    int a, b, sum, diff, prod, rem;
    float div;
    printf("Enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    printf("Sum = %d\nDifference = %d\nProduct = %d", sum, diff, prod);
    if(b)
    {
        div = (float)a / b;
        rem = a % b;
        printf("\nQuotient = %.2f\nRemainder = %d", div, rem);
    }
    else
        printf("Cannot be divided by zero");
    return 0;
}