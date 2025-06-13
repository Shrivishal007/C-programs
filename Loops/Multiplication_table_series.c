/* Write a program to print the multiplication table of a given number. 
(1*1=1 . . . . . .  1*10=10 ) */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number for table series : ");
    scanf("%d", &num);
    for(int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);
    return 0;
}