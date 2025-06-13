// Function to check if a number is prime.
#include <stdio.h>

int is_prime(int n)
{
    int i = 3;
    if(n < 2)
        return 0;
    if(n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    while(i * i <= n)
    {
        if(n % i == 0)
            return 0;
        i += 2;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(is_prime(num))
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}