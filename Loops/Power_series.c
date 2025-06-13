/* Write a program to generate the powers of n. 
( 2 ^ 2 = 4 . . 3^3=27. . . .  n terms) */
#include <stdio.h>
// # include <math.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The series till %d\n", num);
    for(int i = 1; i <= num; i++)
    {   
        double power = 1;
        for(int j = 1; j <= i; j++)            // power = pow(i, i)
            power *= i;
        printf("%d ^ %d = %.0lf\n", i, i, power);
    }
    return 0;
}
