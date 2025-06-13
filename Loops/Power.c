// Write a program to calculate the power of given value. power=pow(a,b)
#include <stdio.h>

int main()
{
    int a, b, ans = 1; 
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= b; i++)
        ans = ans * a;
    printf("The value of a power b is %d", ans);
    return 0;
}