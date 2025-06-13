// Program to calculate the factorial of a number using recursion.

#include <stdio.h>

int factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    int num, fact;
    printf("Enter a number : ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of %d is %d", num, fact);
    return 0;
}