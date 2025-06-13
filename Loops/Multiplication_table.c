/* Write a program to print the 2 way multiplication table.
1	 2    3    4     5
2	 4    6    8     10
3	 6    9    12    15
4	 8    12   16    20
5	 10   15   20    25 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number for table : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num; j++)
            printf("%2d\t",i * j);
        printf("\n");
    }
    
    return 0;
}