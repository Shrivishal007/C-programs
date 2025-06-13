/* Write a program to check whether a given number is krishnamurthi number or not. 
For eg:145=1! + 4! +5!=145 */
#include <stdio.h>

int main()
{
    int number, num, digit, fact, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    num = number;
    while(num)
    {
        digit = num % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        num /= 10;
    }
    if(number == sum)
        printf("It is a Krishnamurthy number number");
    else
        printf("It is not a Krishnamurthy number number");
    return 0;
}
