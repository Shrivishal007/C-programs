// Program to find the sum of digits of a number using recursion.
#include <stdio.h>

int sum_of_digits(int num)
{
    if(num == 0)
        return num;
    return (num % 10) + sum_of_digits(num / 10);
}

int main()
{
    int num, sum;
    printf("Enter the number : ");
    scanf("%d", &num);
    sum = sum_of_digits(num);
    printf("The sum of the digits is %d", sum);
    return 0;
}
