// Program to find the GCD of two numbers using recursion.
#include <stdio.h>

int gcd(int a, int b)
{
    int r = a % b;      //  ignored
    if(r == 0)          // if(b == 0)
        return b;       //       return a;
    return gcd(b, r);   // return (b, a % b);
}

int main()
{
    int num1, num2, result;
    printf("Enter the two numbers : ");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("The GCD of the two numbers is %d", result);
    return 0;
}
