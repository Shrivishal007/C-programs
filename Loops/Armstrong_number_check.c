/* Write a program to check whether a given number is Armstrong or not.
For eg:153 =  1^3 + 5^3 + 3^3 = 153 */
#include <stdio.h>
// #include <math.h>

int power(int a, int b)     // pow(digit, num)
{
    int ans = 1;
    while(b)
    {
        if(b % 2 == 1)
            ans = ans * a;
        a = a * a;
        b = b / 2;
    }
    return ans;
}

int number_of_digits(int num)       // number_of_digits = log10(num) + 1
{
    int no_digit = 0;
    while(num)
    {
        no_digit++;
        num = num / 10;
    }
    return no_digit;
}

int sum_of_power_of_digits(int number)
{
    int num = number_of_digits(number), digit = 0, sum = 0;
    while(number)
    {
        digit = number % 10;
        sum += power(digit, num);
        number = number / 10;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(num == sum_of_power_of_digits(num))
        printf("It is an Armstrong number");
    else
        printf("It is not an Armstrong number");
    return 0;
}
