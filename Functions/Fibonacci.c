// Program to find the Fibonacci series using recursion.
#include <stdio.h>

int fibonacci(int n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    printf("The fibonacci series upto %d terms is ", num);
    for(int i = 1; i <= num; i++)
        printf("%d ", fibonacci(i));  
    return 0;
}