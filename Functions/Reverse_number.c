// Program to reverse a number using recursion.
#include <stdio.h>

int reverse(int num, int rev_num)
{
    if(num == 0)
        return rev_num;
    return reverse(num / 10, (rev_num * 10) + (num % 10)); 
}

int main()
{
    int n, rev;
    printf("Enter the number : ");
    scanf("%d", &n);
    rev = reverse(n, 0);
    printf("The reverse of the number is %d", rev);
    return 0;
}