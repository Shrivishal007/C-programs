// Write a Program to print the series as 1+1/2+1/3+…
#include <stdio.h>

int main()
{
    int num;
    float sum = 1;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    printf("The sum of 1 ");
    for(int i = 2; i <= num; i++)
    {
        sum += (1.0 / i);
        printf("+ (1 / %d) ", i);
    }
    printf("is %.3f", sum);
    return 0;
}