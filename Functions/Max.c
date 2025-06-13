// Function to find the largest among three numbers.
#include <stdio.h>

int max(int a, int b, int c)
{
    int max;
    if(a > b && a > c)
        max = a;
    else if(b > c)
        max = b;
    else
        max = c;
    return max;
}

int main()
{
    int a, b, c, maximum;
    printf("Enter the values of a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    maximum = max(a, b, c);
    printf("The maximum number is %d", maximum);
    return 0;
}