// Write a program to raise a number to a given power using while statement.(Use without pow( ) function)
# include <stdio.h>

int main()
{
    int a, b, n;
    float ans = 1; 
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
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
        printf("The value of a power b is %.f", ans);
    else
        printf("The value of a power b is %.4f", 1 / ans);
    return 0;
}