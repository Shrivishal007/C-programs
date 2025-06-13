// Write a program to find the maximum and  minimum of  a given set of numbers.(3 numbers)
#include <stdio.h>

int main()
{
    int a, b, c, maximum, minimum;
    printf("Enter the values of a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
        maximum = a;
    else if(b > c)
        maximum = b;
    else
        maximum = c;
    if(a < b)
    {
        if(a < c)
            minimum = a;
        else
            minimum = c;
    }
    else
    {
        if(b < c)
            minimum = b;
        else
            minimum = c;
    }
    printf("The maximum number is %d and the minimum number is %d", maximum, minimum);
    return 0;
}