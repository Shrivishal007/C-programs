// Write a program to generate all the Armstrong number within a range
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num, digit, count, sum;
    printf("Enter the limit numbers : ");
    scanf("%d %d", &num1, &num2);
    for(int i = num1 + 1; i < num2; i++)
    {
        num = i;
        count = log10(i) + 1;
        sum = 0;
        while(num)
        {
            digit = num % 10;
            sum += pow(digit, count);
            num /= 10;
        }
        if(i == sum)
            printf("%d\n",i);
    }
    return 0;
}
