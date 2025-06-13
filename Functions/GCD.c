// Function to find the GCD of two numbers.
#include <stdio.h>

int gcd(int a, int b)
{
    int r;
    while(b)
    {
        r = a % b;
        if(r == 0)  // ignored
            break;  // part
        a = b;
        b = r;
    }
    return b;       // return a;
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