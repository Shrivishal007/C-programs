// Function to calculate the power of a number.
#include <stdio.h>

float power(int a, int b)
{
    int n;
    float ans = 1; 
    n = b;
    b = (b > 0)? b : -b;
    while(b)
    {
        if(b % 2 == 1)
            ans = ans * a;
        a = a * a;
        b = b / 2;
    }
    if(n >= 0)
        return ans;
    else
        return 1 / ans;
}

int main()
{
    int a, b;
    float pow;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    pow = power(a, b);
    printf("The value of a power b is %.f", pow);
    return 0;
}