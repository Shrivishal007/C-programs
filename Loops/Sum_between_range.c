// Write a program to find the sum of numbers lying between 2 limits

#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    printf("Enter the first and last number : ");
    scanf("%d %d", &num1, &num2);
    for(int i = num1 + 1; i < num2; i++)       // sum = (num1 + num2) * (num2 - num1 - 1) / 2;
        sum += i;
    printf("The sum of numbers between %d and %d is %d", num1, num2, sum);
    return 0;
}