// Write a program to find the factorial of a number
#include <stdio.h>

int main()
{
    int num, fact = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
        fact *= i;
    printf("Factorial of %d is %d", num, fact);
    return 0;
}