/* Write a program to find the sum of digits of a given number. 
     (given number should be 1234 and expected output should be 10) */
#include <stdio.h>

int main()
{
    int num, digit, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}