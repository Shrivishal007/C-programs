#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number for pryramid structure : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        for(int space = num - i; space > 0; space--)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}